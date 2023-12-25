#include "iostream"
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <iomanip> /* setprecision */
#include <time.h>
#include "fstream" /* ��� ������ � ���������� �������, ������ */

#include <math.h>
#include<corecrt_math_defines.h>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

struct DataSettings
{
	// �������� ���������
	double d; // ������ (�������)
	double mn; // ������ ��� (��)
	double w; // ��� ������� (��)
	double t; // ����� ������� ������� (�)
	double S; // ����� ������������ (�)
	double i; // ����������� �����
	double Tetta; // ���� ������� ������������ (���)
	double Ue; // ����������� �������� ��������� (�����)
	double h; // ��� ��������������

	// �����
	bool UseWind;
	double WindSpeed; // �������� �����
	bool RandomWindSpeed;

	// ������ ��������� �����������
	double Va; // �������� �� �� �������� �������
	double Q; // ��������� �������� ������ (��\�)
	double R; // ���������� ���� (�)
	double Sm; // ������� ������ (�2)
	double CxEt; // ����������� �������� ������������� ���������� ��
	double Cx; // ������� �������� ����� �������� �������������
	double g; // ���������� ���������� �����
	double ftr; // ����������� ������ �� �� ��� ������������ (��� �����)

	// ���������� �������������
	int N; // ����� ��������
	int left; // ������ ������������� (�� ��������� = - WindSpeed)
	int right; // ������ ������������� (�� ��������� = WindSpeed)
};