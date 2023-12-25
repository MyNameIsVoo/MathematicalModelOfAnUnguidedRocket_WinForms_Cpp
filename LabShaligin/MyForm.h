#pragma once

#include <Windows.h>

namespace MathematicalModelOfAnUnguidedRocket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//---------

	ref class MyForm;

	//----------

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::TabControl^  tabControl3;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart6;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart8;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart9;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart10;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart11;
	private: System::Windows::Forms::TabControl^  tabControl5;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart12;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart13;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart14;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::StatusStrip^  statusStrip2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;
private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel7;


private: System::Windows::Forms::TabPage^  tabPage16;
private: System::Windows::Forms::TabPage^  tabPage18;
private: System::Windows::Forms::TabPage^  tabPage17;
private: System::Windows::Forms::TabControl^  tabControl8;
private: System::Windows::Forms::TabPage^  tabPage19;
private: System::Windows::Forms::RichTextBox^  richTextBox5;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::TabPage^  tabPage20;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart21;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::TabControl^  tabControl9;
private: System::Windows::Forms::TabPage^  tabPage21;
private: System::Windows::Forms::TabPage^  tabPage22;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::CheckBox^  checkBox7;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::CheckBox^  checkBox6;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::CheckBox^  checkBox8;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart22;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::CheckBox^  checkBox9;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::CheckBox^  checkBox10;
private: System::Windows::Forms::CheckBox^  checkBox11;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TabPage^  tabPage23;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart23;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::CheckBox^  checkBox12;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::CheckBox^  checkBox13;
private: System::Windows::Forms::CheckBox^  checkBox14;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TabPage^  tabPage24;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart24;
private: System::Windows::Forms::GroupBox^  groupBox13;
private: System::Windows::Forms::CheckBox^  checkBox15;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::CheckBox^  checkBox16;
private: System::Windows::Forms::CheckBox^  checkBox17;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::TextBox^  textBox21;
private: System::Windows::Forms::CheckBox^  checkBox18;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::CheckBox^  checkBox19;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  textBox22;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TabPage^  tabPage25;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart25;
private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::TextBox^  textBox23;
private: System::Windows::Forms::Label^  label38;
	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl8 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl9 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage21 = (gcnew System::Windows::Forms::TabPage());
			this->chart21 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabPage22 = (gcnew System::Windows::Forms::TabPage());
			this->chart22 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->tabPage23 = (gcnew System::Windows::Forms::TabPage());
			this->chart23 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->tabPage24 = (gcnew System::Windows::Forms::TabPage());
			this->chart24 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->tabPage25 = (gcnew System::Windows::Forms::TabPage());
			this->chart25 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->statusStrip2 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel7 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tabControl1->SuspendLayout();
			this->tabPage17->SuspendLayout();
			this->tabControl8->SuspendLayout();
			this->tabPage19->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->tabPage20->SuspendLayout();
			this->tabControl9->SuspendLayout();
			this->tabPage21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart21))->BeginInit();
			this->groupBox9->SuspendLayout();
			this->tabPage22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart22))->BeginInit();
			this->groupBox11->SuspendLayout();
			this->tabPage23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart23))->BeginInit();
			this->groupBox12->SuspendLayout();
			this->tabPage24->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart24))->BeginInit();
			this->groupBox13->SuspendLayout();
			this->tabPage25->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart25))->BeginInit();
			this->statusStrip2->SuspendLayout();
			this->SuspendLayout();
			this->tabControl1->Controls->Add(this->tabPage17);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(965, 602);
			this->tabControl1->TabIndex = 0;
			this->tabPage17->Controls->Add(this->tabControl8);
			this->tabPage17->Location = System::Drawing::Point(4, 22);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Size = System::Drawing::Size(957, 576);
			this->tabPage17->TabIndex = 3;
			this->tabPage17->Text = L"Курсовая работа";
			this->tabPage17->UseVisualStyleBackColor = true;
			this->tabControl8->Controls->Add(this->tabPage19);
			this->tabControl8->Controls->Add(this->tabPage20);
			this->tabControl8->Location = System::Drawing::Point(3, 3);
			this->tabControl8->Name = L"tabControl8";
			this->tabControl8->SelectedIndex = 0;
			this->tabControl8->Size = System::Drawing::Size(951, 564);
			this->tabControl8->TabIndex = 0;
			this->tabPage19->Controls->Add(this->richTextBox5);
			this->tabPage19->Controls->Add(this->groupBox8);
			this->tabPage19->Location = System::Drawing::Point(4, 22);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Padding = System::Windows::Forms::Padding(3);
			this->tabPage19->Size = System::Drawing::Size(943, 538);
			this->tabPage19->TabIndex = 0;
			this->tabPage19->Text = L"Меню";
			this->tabPage19->UseVisualStyleBackColor = true;
			this->richTextBox5->Location = System::Drawing::Point(6, 149);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(931, 383);
			this->richTextBox5->TabIndex = 1;
			this->richTextBox5->Text = L"";
			this->groupBox8->Controls->Add(this->textBox23);
			this->groupBox8->Controls->Add(this->label38);
			this->groupBox8->Controls->Add(this->textBox22);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Controls->Add(this->checkBox19);
			this->groupBox8->Controls->Add(this->label36);
			this->groupBox8->Controls->Add(this->textBox21);
			this->groupBox8->Controls->Add(this->checkBox18);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->textBox20);
			this->groupBox8->Controls->Add(this->textBox19);
			this->groupBox8->Controls->Add(this->textBox18);
			this->groupBox8->Controls->Add(this->textBox17);
			this->groupBox8->Controls->Add(this->textBox16);
			this->groupBox8->Controls->Add(this->textBox15);
			this->groupBox8->Controls->Add(this->textBox14);
			this->groupBox8->Controls->Add(this->textBox13);
			this->groupBox8->Controls->Add(this->button4);
			this->groupBox8->Location = System::Drawing::Point(6, 6);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(931, 137);
			this->groupBox8->TabIndex = 0;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Исходные данные";
			this->textBox23->Location = System::Drawing::Point(9, 110);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(47, 20);
			this->textBox23->TabIndex = 24;
			this->textBox23->Text = L"0,1";
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(9, 94);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(112, 13);
			this->label38->TabIndex = 23;
			this->label38->Text = L"Шаг интегрирования";
			this->textBox22->Location = System::Drawing::Point(764, 38);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(47, 20);
			this->textBox22->TabIndex = 22;
			this->textBox22->Text = L"100";
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(761, 23);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(77, 13);
			this->label37->TabIndex = 21;
			this->label37->Text = L"Число пусков";
			this->checkBox19->AutoSize = true;
			this->checkBox19->Location = System::Drawing::Point(575, 68);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(161, 17);
			this->checkBox19->TabIndex = 20;
			this->checkBox19->Text = L"Случайное значение ветра";
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox19_CheckedChanged);
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(628, 45);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(92, 13);
			this->label36->TabIndex = 19;
			this->label36->Text = L"- скорость ветра";
			this->textBox21->Enabled = false;
			this->textBox21->Location = System::Drawing::Point(575, 42);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(47, 20);
			this->textBox21->TabIndex = 18;
			this->textBox21->Text = L"15";
			this->checkBox18->AutoSize = true;
			this->checkBox18->Location = System::Drawing::Point(575, 19);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(82, 17);
			this->checkBox18->TabIndex = 17;
			this->checkBox18->Text = L"Учет ветра";
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox18_CheckedChanged);
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(401, 55);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(140, 13);
			this->label18->TabIndex = 16;
			this->label18->Text = L"Эффект-я ск-ть истечения";
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(401, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(128, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Время горения топлива";
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(236, 55);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(159, 13);
			this->label16->TabIndex = 14;
			this->label16->Text = L"Угол подъема направляющих";
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(236, 16);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(70, 13);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Вес топлива";
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(140, 55);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(77, 13);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Коэффициент";
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(140, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(68, 13);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Полный вес";
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 55);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 13);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Длина направляющих";
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 16);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Калибр";
			this->textBox20->Location = System::Drawing::Point(404, 71);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(47, 20);
			this->textBox20->TabIndex = 8;
			this->textBox20->Text = L"2000";
			this->textBox19->Location = System::Drawing::Point(404, 32);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(47, 20);
			this->textBox19->TabIndex = 7;
			this->textBox19->Text = L"0,65";
			this->textBox18->Location = System::Drawing::Point(239, 71);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(47, 20);
			this->textBox18->TabIndex = 6;
			this->textBox18->Text = L"45";
			this->textBox17->Location = System::Drawing::Point(239, 32);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(47, 20);
			this->textBox17->TabIndex = 5;
			this->textBox17->Text = L"6,5";
			this->textBox16->Location = System::Drawing::Point(143, 71);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(47, 20);
			this->textBox16->TabIndex = 4;
			this->textBox16->Text = L"1,4";
			this->textBox15->Location = System::Drawing::Point(143, 32);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(47, 20);
			this->textBox15->TabIndex = 3;
			this->textBox15->Text = L"40";
			this->textBox14->Location = System::Drawing::Point(9, 71);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(47, 20);
			this->textBox14->TabIndex = 2;
			this->textBox14->Text = L"4";
			this->textBox13->Location = System::Drawing::Point(9, 32);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(47, 20);
			this->textBox13->TabIndex = 1;
			this->textBox13->Text = L"0,12";
			this->button4->Location = System::Drawing::Point(799, 86);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 45);
			this->button4->TabIndex = 0;
			this->button4->Text = L"СТАРТ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			this->tabPage20->Controls->Add(this->tabControl9);
			this->tabPage20->Location = System::Drawing::Point(4, 22);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Padding = System::Windows::Forms::Padding(3);
			this->tabPage20->Size = System::Drawing::Size(943, 538);
			this->tabPage20->TabIndex = 1;
			this->tabPage20->Text = L"Графики";
			this->tabPage20->UseVisualStyleBackColor = true;
			this->tabControl9->Controls->Add(this->tabPage21);
			this->tabControl9->Controls->Add(this->tabPage22);
			this->tabControl9->Controls->Add(this->tabPage23);
			this->tabControl9->Controls->Add(this->tabPage24);
			this->tabControl9->Controls->Add(this->tabPage25);
			this->tabControl9->Location = System::Drawing::Point(6, 6);
			this->tabControl9->Name = L"tabControl9";
			this->tabControl9->SelectedIndex = 0;
			this->tabControl9->Size = System::Drawing::Size(931, 526);
			this->tabControl9->TabIndex = 2;
			this->tabPage21->Controls->Add(this->chart21);
			this->tabPage21->Controls->Add(this->groupBox9);
			this->tabPage21->Location = System::Drawing::Point(4, 22);
			this->tabPage21->Name = L"tabPage21";
			this->tabPage21->Padding = System::Windows::Forms::Padding(3);
			this->tabPage21->Size = System::Drawing::Size(923, 500);
			this->tabPage21->TabIndex = 0;
			this->tabPage21->Text = L"Скорость";
			this->tabPage21->UseVisualStyleBackColor = true;
			chartArea1->Name = L"ChartArea1";
			this->chart21->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart21->Legends->Add(legend1);
			this->chart21->Location = System::Drawing::Point(6, 88);
			this->chart21->Name = L"chart21";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"V";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"V (+)";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"V (-)";
			this->chart21->Series->Add(series1);
			this->chart21->Series->Add(series2);
			this->chart21->Series->Add(series3);
			this->chart21->Size = System::Drawing::Size(911, 406);
			this->chart21->TabIndex = 0;
			this->chart21->Text = L"chart21";
			this->groupBox9->Controls->Add(this->checkBox8);
			this->groupBox9->Controls->Add(this->label25);
			this->groupBox9->Controls->Add(this->label23);
			this->groupBox9->Controls->Add(this->checkBox7);
			this->groupBox9->Controls->Add(this->checkBox5);
			this->groupBox9->Controls->Add(this->label19);
			this->groupBox9->Location = System::Drawing::Point(6, 1);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(911, 81);
			this->groupBox9->TabIndex = 1;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Графики";
			this->checkBox8->AutoSize = true;
			this->checkBox8->Checked = true;
			this->checkBox8->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox8->Location = System::Drawing::Point(208, 32);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(74, 17);
			this->checkBox8->TabIndex = 8;
			this->checkBox8->Text = L"Скорость";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox8_CheckedChanged);
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(205, 16);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(96, 13);
			this->label25->TabIndex = 7;
			this->label25->Text = L"С учетом (-) ветра";
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(100, 16);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(99, 13);
			this->label23->TabIndex = 6;
			this->label23->Text = L"С учетом (+) ветра";
			this->checkBox7->AutoSize = true;
			this->checkBox7->Checked = true;
			this->checkBox7->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox7->Location = System::Drawing::Point(103, 32);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(74, 17);
			this->checkBox7->TabIndex = 4;
			this->checkBox7->Text = L"Скорость";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox7_CheckedChanged);
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Location = System::Drawing::Point(9, 32);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(74, 17);
			this->checkBox5->TabIndex = 2;
			this->checkBox5->Text = L"Скорость";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 16);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(88, 13);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Без учета ветра";
			this->tabPage22->Controls->Add(this->chart22);
			this->tabPage22->Controls->Add(this->groupBox11);
			this->tabPage22->Location = System::Drawing::Point(4, 22);
			this->tabPage22->Name = L"tabPage22";
			this->tabPage22->Padding = System::Windows::Forms::Padding(3);
			this->tabPage22->Size = System::Drawing::Size(923, 500);
			this->tabPage22->TabIndex = 1;
			this->tabPage22->Text = L"Угол наклона";
			this->tabPage22->UseVisualStyleBackColor = true;
			chartArea2->Name = L"ChartArea1";
			this->chart22->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart22->Legends->Add(legend2);
			this->chart22->Location = System::Drawing::Point(6, 91);
			this->chart22->Name = L"chart22";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"Tetta";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->Name = L"Tetta (+)";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->Name = L"Tetta (-)";
			this->chart22->Series->Add(series4);
			this->chart22->Series->Add(series5);
			this->chart22->Series->Add(series6);
			this->chart22->Size = System::Drawing::Size(911, 406);
			this->chart22->TabIndex = 2;
			this->chart22->Text = L"chart22";
			this->groupBox11->Controls->Add(this->checkBox9);
			this->groupBox11->Controls->Add(this->label26);
			this->groupBox11->Controls->Add(this->label27);
			this->groupBox11->Controls->Add(this->checkBox10);
			this->groupBox11->Controls->Add(this->checkBox11);
			this->groupBox11->Controls->Add(this->label28);
			this->groupBox11->Location = System::Drawing::Point(6, 4);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(911, 81);
			this->groupBox11->TabIndex = 3;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Графики";
			this->checkBox9->AutoSize = true;
			this->checkBox9->Checked = true;
			this->checkBox9->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox9->Location = System::Drawing::Point(208, 32);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(96, 17);
			this->checkBox9->TabIndex = 8;
			this->checkBox9->Text = L"Угол наклона";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox9_CheckedChanged);
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(205, 16);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(96, 13);
			this->label26->TabIndex = 7;
			this->label26->Text = L"С учетом (-) ветра";
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(100, 16);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(99, 13);
			this->label27->TabIndex = 6;
			this->label27->Text = L"С учетом (+) ветра";
			this->checkBox10->AutoSize = true;
			this->checkBox10->Checked = true;
			this->checkBox10->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox10->Location = System::Drawing::Point(103, 32);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(96, 17);
			this->checkBox10->TabIndex = 4;
			this->checkBox10->Text = L"Угол наклона";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox10_CheckedChanged);
			this->checkBox11->AutoSize = true;
			this->checkBox11->Checked = true;
			this->checkBox11->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox11->Location = System::Drawing::Point(9, 32);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(96, 17);
			this->checkBox11->TabIndex = 2;
			this->checkBox11->Text = L"Угол наклона";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox11_CheckedChanged);
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(6, 16);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(88, 13);
			this->label28->TabIndex = 1;
			this->label28->Text = L"Без учета ветра";
			this->tabPage23->Controls->Add(this->chart23);
			this->tabPage23->Controls->Add(this->groupBox12);
			this->tabPage23->Location = System::Drawing::Point(4, 22);
			this->tabPage23->Name = L"tabPage23";
			this->tabPage23->Size = System::Drawing::Size(923, 500);
			this->tabPage23->TabIndex = 2;
			this->tabPage23->Text = L"Высота";
			this->tabPage23->UseVisualStyleBackColor = true;
			chartArea3->Name = L"ChartArea1";
			this->chart23->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart23->Legends->Add(legend3);
			this->chart23->Location = System::Drawing::Point(6, 91);
			this->chart23->Name = L"chart23";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Legend = L"Legend1";
			series7->Name = L"y";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Legend = L"Legend1";
			series8->Name = L"y (+)";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Legend = L"Legend1";
			series9->Name = L"y (-)";
			this->chart23->Series->Add(series7);
			this->chart23->Series->Add(series8);
			this->chart23->Series->Add(series9);
			this->chart23->Size = System::Drawing::Size(911, 406);
			this->chart23->TabIndex = 2;
			this->chart23->Text = L"chart23";
			this->groupBox12->Controls->Add(this->checkBox12);
			this->groupBox12->Controls->Add(this->label29);
			this->groupBox12->Controls->Add(this->label30);
			this->groupBox12->Controls->Add(this->checkBox13);
			this->groupBox12->Controls->Add(this->checkBox14);
			this->groupBox12->Controls->Add(this->label31);
			this->groupBox12->Location = System::Drawing::Point(6, 4);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(911, 81);
			this->groupBox12->TabIndex = 3;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Графики";
			this->checkBox12->AutoSize = true;
			this->checkBox12->Checked = true;
			this->checkBox12->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox12->Location = System::Drawing::Point(208, 32);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(64, 17);
			this->checkBox12->TabIndex = 8;
			this->checkBox12->Text = L"Высота";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox12_CheckedChanged);
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(205, 16);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(96, 13);
			this->label29->TabIndex = 7;
			this->label29->Text = L"С учетом (-) ветра";
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(100, 16);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(99, 13);
			this->label30->TabIndex = 6;
			this->label30->Text = L"С учетом (+) ветра";
			this->checkBox13->AutoSize = true;
			this->checkBox13->Checked = true;
			this->checkBox13->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox13->Location = System::Drawing::Point(103, 32);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(64, 17);
			this->checkBox13->TabIndex = 4;
			this->checkBox13->Text = L"Высота";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox13_CheckedChanged);
			this->checkBox14->AutoSize = true;
			this->checkBox14->Checked = true;
			this->checkBox14->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox14->Location = System::Drawing::Point(9, 32);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(64, 17);
			this->checkBox14->TabIndex = 2;
			this->checkBox14->Text = L"Высота";
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox14_CheckedChanged);
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(6, 16);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(88, 13);
			this->label31->TabIndex = 1;
			this->label31->Text = L"Без учета ветра";
			this->tabPage24->Controls->Add(this->chart24);
			this->tabPage24->Controls->Add(this->groupBox13);
			this->tabPage24->Location = System::Drawing::Point(4, 22);
			this->tabPage24->Name = L"tabPage24";
			this->tabPage24->Size = System::Drawing::Size(923, 500);
			this->tabPage24->TabIndex = 3;
			this->tabPage24->Text = L"Дальность";
			this->tabPage24->UseVisualStyleBackColor = true;
			chartArea4->Name = L"ChartArea1";
			this->chart24->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart24->Legends->Add(legend4);
			this->chart24->Location = System::Drawing::Point(6, 91);
			this->chart24->Name = L"chart24";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series10->Legend = L"Legend1";
			series10->Name = L"x";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series11->Legend = L"Legend1";
			series11->Name = L"x (+)";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series12->Legend = L"Legend1";
			series12->Name = L"x (-)";
			this->chart24->Series->Add(series10);
			this->chart24->Series->Add(series11);
			this->chart24->Series->Add(series12);
			this->chart24->Size = System::Drawing::Size(911, 406);
			this->chart24->TabIndex = 2;
			this->chart24->Text = L"chart24";
			this->groupBox13->Controls->Add(this->checkBox15);
			this->groupBox13->Controls->Add(this->label32);
			this->groupBox13->Controls->Add(this->label33);
			this->groupBox13->Controls->Add(this->checkBox16);
			this->groupBox13->Controls->Add(this->checkBox17);
			this->groupBox13->Controls->Add(this->label34);
			this->groupBox13->Location = System::Drawing::Point(6, 4);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(911, 81);
			this->groupBox13->TabIndex = 3;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Графики";
			this->checkBox15->AutoSize = true;
			this->checkBox15->Checked = true;
			this->checkBox15->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox15->Location = System::Drawing::Point(208, 32);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(82, 17);
			this->checkBox15->TabIndex = 8;
			this->checkBox15->Text = L"Дальность";
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox15_CheckedChanged);
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(205, 16);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(96, 13);
			this->label32->TabIndex = 7;
			this->label32->Text = L"С учетом (-) ветра";
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(100, 16);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(99, 13);
			this->label33->TabIndex = 6;
			this->label33->Text = L"С учетом (+) ветра";
			this->checkBox16->AutoSize = true;
			this->checkBox16->Checked = true;
			this->checkBox16->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox16->Location = System::Drawing::Point(103, 32);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(82, 17);
			this->checkBox16->TabIndex = 4;
			this->checkBox16->Text = L"Дальность";
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox16_CheckedChanged);
			this->checkBox17->AutoSize = true;
			this->checkBox17->Checked = true;
			this->checkBox17->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox17->Location = System::Drawing::Point(9, 32);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(82, 17);
			this->checkBox17->TabIndex = 2;
			this->checkBox17->Text = L"Дальность";
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox17_CheckedChanged);
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(6, 16);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(88, 13);
			this->label34->TabIndex = 1;
			this->label34->Text = L"Без учета ветра";
			this->tabPage25->Controls->Add(this->chart25);
			this->tabPage25->Controls->Add(this->groupBox14);
			this->tabPage25->Location = System::Drawing::Point(4, 22);
			this->tabPage25->Name = L"tabPage25";
			this->tabPage25->Size = System::Drawing::Size(923, 500);
			this->tabPage25->TabIndex = 4;
			this->tabPage25->Text = L"Гистограмма";
			this->tabPage25->UseVisualStyleBackColor = true;
			chartArea5->Name = L"ChartArea1";
			this->chart25->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart25->Legends->Add(legend5);
			this->chart25->Location = System::Drawing::Point(149, 109);
			this->chart25->Name = L"chart25";
			series13->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			series13->ChartArea = L"ChartArea1";
			series13->CustomProperties = L"PointWidth=1";
			series13->Legend = L"Legend1";
			series13->Name = L"Norm";
			series13->ShadowColor = System::Drawing::Color::Gray;
			this->chart25->Series->Add(series13);
			this->chart25->Size = System::Drawing::Size(589, 388);
			this->chart25->TabIndex = 1;
			this->chart25->Text = L"chart25";
			this->groupBox14->Location = System::Drawing::Point(3, 3);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(917, 100);
			this->groupBox14->TabIndex = 0;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Меню";
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(6, 16);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(99, 13);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Активный участок";
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(6, 32);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(96, 17);
			this->checkBox6->TabIndex = 3;
			this->checkBox6->Text = L"Угол наклона";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->statusStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel7 });
			this->statusStrip2->Location = System::Drawing::Point(0, 604);
			this->statusStrip2->Name = L"statusStrip2";
			this->statusStrip2->Size = System::Drawing::Size(989, 22);
			this->statusStrip2->SizingGrip = false;
			this->statusStrip2->TabIndex = 1;
			this->statusStrip2->Text = L"statusStrip2";
			this->toolStripStatusLabel7->Name = L"toolStripStatusLabel7";
			this->toolStripStatusLabel7->Size = System::Drawing::Size(101, 17);
			this->toolStripStatusLabel7->Text = L"Ерочин Семен ©";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 626);
			this->Controls->Add(this->statusStrip2);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage17->ResumeLayout(false);
			this->tabControl8->ResumeLayout(false);
			this->tabPage19->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->tabPage20->ResumeLayout(false);
			this->tabControl9->ResumeLayout(false);
			this->tabPage21->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart21))->EndInit();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->tabPage22->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart22))->EndInit();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->tabPage23->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart23))->EndInit();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->tabPage24->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart24))->EndInit();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->tabPage25->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart25))->EndInit();
			this->statusStrip2->ResumeLayout(false);
			this->statusStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	chart21->Series["V"]->Points->Clear();
	chart21->Series["V (+)"]->Points->Clear();
	chart21->Series["V (-)"]->Points->Clear();
	chart22->Series["Tetta"]->Points->Clear();
	chart22->Series["Tetta (+)"]->Points->Clear();
	chart22->Series["Tetta (-)"]->Points->Clear();
	chart23->Series["y"]->Points->Clear();
	chart23->Series["y (-)"]->Points->Clear();
	chart23->Series["y (+)"]->Points->Clear();
	chart24->Series["x"]->Points->Clear();
	chart24->Series["x (-)"]->Points->Clear();
	chart24->Series["x (+)"]->Points->Clear();
	
	clock_t Time = clock();

	struct DataSettings data;

	// Основные
	data.d = Convert::ToDouble(textBox13->Text);
	data.mn = Convert::ToDouble(textBox15->Text);
	data.w = Convert::ToDouble(textBox17->Text);
	data.t = Convert::ToDouble(textBox19->Text);
	data.S = Convert::ToDouble(textBox14->Text);
	data.i = Convert::ToDouble(textBox16->Text);
	data.Tetta = Convert::ToDouble(textBox18->Text) * M_PI / 180.0;
	data.Ue = Convert::ToDouble(textBox20->Text);
	data.h = Convert::ToDouble(textBox23->Text);

	// Ветер
	data.UseWind = checkBox18->Checked;
	data.WindSpeed = Convert::ToDouble(textBox21->Text);
	data.RandomWindSpeed = checkBox19->Checked;

	// Расчет начальных соотношений
	data.Va = data.Ue * data.w / data.mn;
	data.Q = data.w / data.t;
	data.R = data.Ue * data.Q;
	data.Sm = M_PI * pow(data.d, 2.0) / 4.0;
	data.CxEt = 0.157;
	data.Cx = data.CxEt * data.i;
	data.g = 9.81;
	data.ftr = 0.15;

	// Нормальное распределение
	data.N = Convert::ToDouble(textBox22->Text);
	data.left = -data.WindSpeed;
	data.right = data.WindSpeed;

	double Vd, Td, Tetta_a, ya, xa, Vp, Tetta_p, yp, xp;
	float m = 0, k0 = 0, ln = 0, T0 = 0, t0 = 0;

	ofstream out("Data.txt", ios::out);
	out << "\n\t\tData";

	out << setprecision(5) << "\n\n\td = " << data.d << "\n\tm0 = "
		<< data.mn << "\n\tw = " << data.w << "\n\tt = " << data.t << "\n\tS = "
		<< data.S << "\n\ti = " << data.i << "\n\tTetta = " << data.Tetta << "\n\tUe = "
		<< data.Ue << "\n\tVa = Ue * w / m0 = " << data.Va << "\n\tQ = w / t = " << data.Q << "\n\tR = Ue * Q = "
		<< data.R << "\n\tSm = Pi * d^2 / 4 = " << data.Sm << "\n\tCx = CxEtalon * i = " << data.Cx << endl << endl;

	if (data.UseWind || data.RandomWindSpeed)
	{
		// Случайное значение ветра (Гауссовское распределение)
		if (data.RandomWindSpeed)
			data.WindSpeed = GetRandomWindSpeed(out, data);
		out << "\n\t\tСкорость ветра = " << data.WindSpeed << endl;
	}

	out << "\n\t\tДвижение по направляющим" << endl;
	k0 = (((data.R) / data.mn) - data.g * sin(data.Tetta) - data.ftr * data.g * cos(data.Tetta));
	t0 = sqrt(2 * data.S / k0);
	T0 = t0;
	Vd = sqrt(2 * data.R * data.S / data.mn);
	out << "\n\t\tСкорость схода с направляющих [Vd] = " << Vd << "\n\t\tВремя схода с направляющих [td] = " << t0;
	out << "\n\t\tСкорость схода с направляющих [Vd] = " << data.Ue * log(data.mn / (data.mn - data.w)) << " (по формуле Циалковского)";

	float k11 = 0, k12 = 0, k13 = 0, k14 = 0, k21 = 0, k22 = 0, k23 = 0, k24 = 0, k31 = 0, k32 = 0, k33 = 0, k34 = 0, k41 = 0, k42 = 0, k43 = 0, k44 = 0, dy1 = 0, dy2 = 0, dy3 = 0, dy4 = 0;
	int k = 1;

	// Расчет пассивного и активного участков

	// 0-ая итерация без ветра (если он выбран)
	int amountIterations = (data.UseWind || data.RandomWindSpeed) ? 3 : 1;
	for (int i = 0; i < amountIterations; i++)
	{
		k = 0;
		data.Va = Vd;
		Tetta_a = data.Tetta;
		ya = xa = 0;
		t0 = T0;
		m = data.mn - data.Q * t0;
		if (i == 2)
			data.WindSpeed = -data.WindSpeed;

		cout << "\n\n\t\tРасчет активного участка" << endl;
		if (data.UseWind || data.RandomWindSpeed)
			cout << "\t\tС учетом " << (i == 1 ? "положительного" : "отрицательного") << " ветра" << endl;
		do
		{
			cout << "\n\tk = " << k << "\tVa = " << data.Va << "\tTetta_a = " << Tetta_a << "\tya = " << ya << "\txa = " << xa;

			double windSpeedComponent = ((data.UseWind || data.RandomWindSpeed) && i != 0) ? (data.WindSpeed * cos(Tetta_a)) : 0;

			/*Va*/ k11 = -((0.5 * data.Cx * exp(-ya / 7800) * data.Sm * pow(data.Va + windSpeedComponent, 2.0)) / m) - (data.g * sin(Tetta_a)) + data.R / m;
			/*Ta*/ k12 = -data.g * cos(Tetta_a) / data.Va;
			/*ya*/ k13 = data.Va * sin(Tetta_a);
			/*xa*/ k14 = data.Va * cos(Tetta_a);

			k21 = -((0.5 * data.Cx * exp(-(ya + k13 * data.h / 2.0) / 7800) * data.Sm * (pow(data.Va + windSpeedComponent, 2.0) + k11 * data.h / 2.0)) / m) - (data.g * sin(Tetta_a + k12 * data.h / 2.0)) + data.R / m;
			k22 = -data.g * cos(Tetta_a + k12 * data.h / 2.0) / (data.Va + k11 * data.h / 2.0);
			k23 = (data.Va + k11 * data.h / 2.0) * sin(Tetta_a + k12 * data.h / 2.0);
			k24 = (data.Va + k11 * data.h / 2.0) * cos(Tetta_a + k12 * data.h / 2.0);

			k31 = -((0.5 * data.Cx * exp(-(ya + k23 * data.h / 2.0) / 7800) * data.Sm * (pow(data.Va + windSpeedComponent, 2.0) + k21 * data.h / 2.0)) / m) - (data.g * sin(Tetta_a + k12 * data.h / 2.0)) + data.R / m;
			k32 = -data.g * cos(Tetta_a + k22 * data.h / 2.0) / (data.Va + k21 * data.h / 2.0);
			k33 = (data.Va + k21 * data.h / 2.0) * sin(Tetta_a + k22 * data.h / 2.0);
			k34 = (data.Va + k21 * data.h / 2.0) * cos(Tetta_a + k22 * data.h / 2.0);

			k41 = -((0.5 * data.Cx * exp(-(ya + k33 * data.h / 2.0) / 7800) * data.Sm * (pow(data.Va + windSpeedComponent, 2.0) + k31 * data.h / 2.0)) / m) - (data.g * sin(Tetta_a + k12 * data.h / 2.0)) + data.R / m;
			k42 = -data.g * cos(Tetta_a + k32 * data.h / 2.0) / (data.Va + k31 * data.h / 2.0);
			k43 = (data.Va + k31 * data.h / 2.0) * sin(Tetta_a + k32 * data.h / 2.0);
			k44 = (data.Va + k31 * data.h / 2.0) * cos(Tetta_a + k32 * data.h / 2.0);

			dy1 = (data.h / 6) * (k11 + 2 * (k21 + k31) + k41);
			dy2 = (data.h / 6) * (k12 + 2 * (k22 + k32) + k42);
			dy3 = (data.h / 6) * (k13 + 2 * (k23 + k33) + k43);
			dy4 = (data.h / 6) * (k14 + 2 * (k24 + k34) + k44);

			data.Va += dy1;
			Tetta_a += dy2;
			ya += dy3;
			xa += dy4;

			if (i == 0)
			{
				this->chart21->Series["V"]->Points->AddXY(t0, data.Va);
				this->chart22->Series["Tetta"]->Points->AddXY(t0, Tetta_a);
				this->chart23->Series["y"]->Points->AddXY(xa, ya);
				this->chart24->Series["x"]->Points->AddXY(t0, xa);
			}
			else if (i == 1)
			{
				this->chart21->Series["V (+)"]->Points->AddXY(t0, data.Va);
				this->chart22->Series["Tetta (+)"]->Points->AddXY(t0, Tetta_a);
				this->chart23->Series["y (+)"]->Points->AddXY(xa, ya);
				this->chart24->Series["x (+)"]->Points->AddXY(t0, xa);
			}
			else if (i == 2)
			{
				this->chart21->Series["V (-)"]->Points->AddXY(t0, data.Va);
				this->chart22->Series["Tetta (-)"]->Points->AddXY(t0, Tetta_a);
				this->chart23->Series["y (-)"]->Points->AddXY(xa, ya);
				this->chart24->Series["x (-)"]->Points->AddXY(t0, xa);
			}

			t0 += data.h;
			m = data.mn - data.Q * t0;
			k++;
		} while (data.t >= t0);

		cout << "\n\n\t\tРасчет пассивного участка" << endl;
		if (data.UseWind || data.RandomWindSpeed)
			cout << "\t\tС учетом " << (i == 1 ? "положительного" : "отрицательного") << " ветра" << endl;
		do
		{
			cout << "\n\tk = " << k << "\tVa = " << data.Va << "\tTetta_a = " << Tetta_a << "\tya = " << ya << "\txa = " << xa;

			double windSpeedComponent = ((data.UseWind || data.RandomWindSpeed) && i != 0) ? (data.WindSpeed * cos(Tetta_a)) : 0;

			/*Va*/ k11 = -((0.5 * data.Cx * exp(-ya / 7800) * data.Sm * pow(data.Va - windSpeedComponent, 2.0)) / m) - (data.g * sin(Tetta_a));
			/*Ta*/ k12 = -data.g * cos(Tetta_a) / data.Va;
			/*ya*/ k13 = data.Va * sin(Tetta_a);
			/*xa*/ k14 = data.Va * cos(Tetta_a);

			k21 = -((0.5 * data.Cx * exp(-(ya + k13 * data.h / 2.0) / 7800) * data.Sm * (pow(data.Va - windSpeedComponent, 2.0) + k11 * data.h / 2.0)) / m) - (data.g * sin(Tetta_a + k12 * data.h / 2.0));
			k22 = -data.g * cos(Tetta_a + k12 * data.h / 2.0) / (data.Va + k11 * data.h / 2.0);
			k23 = (data.Va + k11 * data.h / 2.0) * sin(Tetta_a + k12 * data.h / 2.0);
			k24 = (data.Va + k11 * data.h / 2.0) * cos(Tetta_a + k12 * data.h / 2.0);

			k31 = -((0.5 * data.Cx * exp(-(ya + k23 * data.h / 2.0) / 7800) * data.Sm * (pow(data.Va - windSpeedComponent, 2.0) + k21 * data.h / 2.0)) / m) - (data.g * sin(Tetta_a + k12 * data.h / 2.0));
			k32 = -data.g * cos(Tetta_a + k22 * data.h / 2.0) / (data.Va + k21 * data.h / 2.0);
			k33 = (data.Va + k21 * data.h / 2.0) * sin(Tetta_a + k22 * data.h / 2.0);
			k34 = (data.Va + k21 * data.h / 2.0) * cos(Tetta_a + k22 * data.h / 2.0);

			k41 = -((0.5 * data.Cx * exp(-(ya + k33 * data.h / 2.0) / 7800) * data.Sm * (pow(data.Va - windSpeedComponent, 2.0) + k31 * data.h / 2.0)) / m) - (data.g * sin(Tetta_a + k12 * data.h / 2.0));
			k42 = -data.g * cos(Tetta_a + k32 * data.h / 2.0) / (data.Va + k31 * data.h / 2.0);
			k43 = (data.Va + k31 * data.h / 2.0) * sin(Tetta_a + k32 * data.h / 2.0);
			k44 = (data.Va + k31 * data.h / 2.0) * cos(Tetta_a + k32 * data.h / 2.0);

			dy1 = (data.h / 6) * (k11 + 2 * (k21 + k31) + k41);
			dy2 = (data.h / 6) * (k12 + 2 * (k22 + k32) + k42);
			dy3 = (data.h / 6) * (k13 + 2 * (k23 + k33) + k43);
			dy4 = (data.h / 6) * (k14 + 2 * (k24 + k34) + k44);

			data.Va += dy1;
			Tetta_a += dy2;
			ya += dy3;
			xa += dy4;

			if (i == 0)
			{
				this->chart21->Series["V"]->Points->AddXY(t0, data.Va);
				this->chart22->Series["Tetta"]->Points->AddXY(t0, Tetta_a);
				this->chart23->Series["y"]->Points->AddXY(xa, ya);
				this->chart24->Series["x"]->Points->AddXY(t0, xa);
			}
			else if (i == 1)
			{
				this->chart21->Series["V (+)"]->Points->AddXY(t0, data.Va);
				this->chart22->Series["Tetta (+)"]->Points->AddXY(t0, Tetta_a);
				this->chart23->Series["y (+)"]->Points->AddXY(xa, ya);
				this->chart24->Series["x (+)"]->Points->AddXY(t0, xa);
			}
			else if (i == 2)
			{
				this->chart21->Series["V (-)"]->Points->AddXY(t0, data.Va);
				this->chart22->Series["Tetta (-)"]->Points->AddXY(t0, Tetta_a);
				this->chart23->Series["y (-)"]->Points->AddXY(xa, ya);
				this->chart24->Series["x (-)"]->Points->AddXY(t0, xa);
			}

			t0 += data.h;
			k++;
		} while (ya > 0);
	}

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	out << "\n\n\t\tВремя выполнения: " << EndTime << endl;

	out.close();

	richTextBox5->Clear();
	richTextBox5->Text = System::IO::File::ReadAllText("Data.txt", System::Text::Encoding::GetEncoding(1251));
}

private: System::Double GetRandomWindSpeed(std::ofstream& out, struct DataSettings data)
{
	double windSpeed = 0;
	if (checkBox18->Checked == true && checkBox19->Checked == false)
		windSpeed = Convert::ToDouble(textBox21->Text);

	// НОРМАЛЬНОЕ РАСПРЕДЕЛЕНИЕ
	int N = Convert::ToInt32(textBox22->Text), left = -Convert::ToDouble(textBox21->Text), right = Convert::ToDouble(textBox21->Text), kol = 0, vsp = 0;

	float* Norm = new float[N], summ = 0, MO = 0, sko = 0;
	float max, min, * Pi = new float[100], * Coord = new float[100];

	if (checkBox19->Checked == true)
	{
		MO = (left + right) / 2.0;
		sko = (MO - left) / 3.0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < 25; j++)
				summ += 1.0 * rand() / RAND_MAX;
			Norm[i] = (sqrt(2.0) * (sko) * (summ - 12.5)) / 1.99661 + MO;
			summ = 0;
		}

		max = Norm[0];
		min = Norm[0];

		for (int i = 0; i < N; i++)
		{
			if (max < Norm[i])
				max = Norm[i];
			if (min > Norm[i])
				min = Norm[i];
		}

		windSpeed = (max - min) / (10.0);

		float mx = 0;
		for (int i = 0; i < N; i++)
			mx += Norm[i];
		mx = mx * (1.0 / (float)N);

		float D = 0;
		for (int i = 0; i < N; i++)
			D += pow((Norm[i] - mx), 2.0);
		D = D * (1.0 / ((float)N - 1.0));

		float sigma = sqrt(D);

		float l_border = min;
		float r_border = min + windSpeed;
		do
		{
			vsp = 0;
			for (int i = 0; i < N; i++)
				if (Norm[i] > l_border && Norm[i] < r_border)
					vsp++;
			Pi[kol] = vsp / (float)N;
			Coord[kol] = l_border;
			kol++;
			l_border = r_border;
			r_border += windSpeed;
		} while (r_border < max);

		chart25->Series["Norm"]->Points->Clear();
		for (int i = 0; i < kol; i++)
			chart25->Series["Norm"]->Points->AddXY(Coord[i], Pi[i]);
	}
	delete[]Norm;

	return windSpeed;
}

//
//
//

private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox5->Checked == true)
		this->chart21->Series["V"]->Enabled = true;
	else
		this->chart21->Series["V"]->Enabled = false;
}
private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox5->Checked == true)
		this->chart21->Series["V (+)"]->Enabled = true;
	else
		this->chart21->Series["V (+)"]->Enabled = false;
}
private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox5->Checked == true)
		this->chart21->Series["V (-)"]->Enabled = true;
	else
		this->chart21->Series["V (-)"]->Enabled = false;
}

private: System::Void checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox11->Checked == true)
		this->chart22->Series["Tetta"]->Enabled = true;
	else
		this->chart22->Series["Tetta"]->Enabled = false;
}
private: System::Void checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox11->Checked == true)
		this->chart22->Series["Tetta (+)"]->Enabled = true;
	else
		this->chart22->Series["Tetta (+)"]->Enabled = false;
}
private: System::Void checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox11->Checked == true)
		this->chart22->Series["Tetta (-)"]->Enabled = true;
	else
		this->chart22->Series["Tetta (-)"]->Enabled = false;
}

private: System::Void checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox14->Checked == true)
		this->chart23->Series["y"]->Enabled = true;
	else
		this->chart23->Series["y"]->Enabled = false;
}
private: System::Void checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox14->Checked == true)
		this->chart23->Series["y (+)"]->Enabled = true;
	else
		this->chart23->Series["y (+)"]->Enabled = false;
}
private: System::Void checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox14->Checked == true)
		this->chart23->Series["y (-)"]->Enabled = true;
	else
		this->chart23->Series["y (-)"]->Enabled = false;
}

private: System::Void checkBox17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox17->Checked == true)
		this->chart24->Series["x"]->Enabled = true;
	else
		this->chart24->Series["x"]->Enabled = false;
}
private: System::Void checkBox16_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox17->Checked == true)
		this->chart24->Series["x (+)"]->Enabled = true;
	else
		this->chart24->Series["x (+)"]->Enabled = false;
}
private: System::Void checkBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox17->Checked == true)
		this->chart24->Series["x (-)"]->Enabled = true;
	else
		this->chart24->Series["x (-)"]->Enabled = false;
}

private: System::Void checkBox18_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox18->Checked == true)
	{
		checkBox19->Checked = false;
		textBox21->Enabled = true;
	}
}
private: System::Void checkBox19_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox19->Checked == true)
	{
		checkBox18->Checked = false;
		textBox21->Enabled = true;
	}
}
};
}
