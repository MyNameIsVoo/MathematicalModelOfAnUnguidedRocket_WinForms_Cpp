#include "iostream"
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <iomanip> /* setprecision */
#include <time.h>
#include "fstream" /* Для работы с текстовыми файлами, запись */

#include <math.h>
#include<corecrt_math_defines.h>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

struct DataSettings
{
	// Основные параметры
	double d; // Калибр (диаметр)
	double mn; // Полный вес (кг)
	double w; // Вес топлива (кг)
	double t; // Время горения топлива (с)
	double S; // Длина направляющих (м)
	double i; // Коэффициент формы
	double Tetta; // Угол подъема направляющих (рад)
	double Ue; // Эффективная скорость истечения (струи)
	double h; // Шаг интегрирования

	// Ветер
	bool UseWind;
	double WindSpeed; // Скорость ветра
	bool RandomWindSpeed;

	// Расчет начальных соотношений
	double Va; // Скорость ЛА на активном участке
	double Q; // Секундный массовый расход (кг\с)
	double R; // Реактивная сила (Н)
	double Sm; // Площадь миделя (м2)
	double CxEt; // Коэффициент лобового сопротивления эталонного ЛА
	double Cx; // Среднее значение коэфф лобового сопротивления
	double g; // Постоянная гравитации Земли
	double ftr; // Коэффициент трения ЛА об оси направляющих (для стали)

	// Нормальное распределение
	int N; // Число запусков
	int left; // Предел распределения (по умолчанию = - WindSpeed)
	int right; // Предел распределения (по умолчанию = WindSpeed)
};