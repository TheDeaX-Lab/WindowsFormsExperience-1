#pragma once
#include "ListCitizen.h"
#include <msclr\marshal_cppstd.h>
#include "MyForm.h"
#include "MyForm2.h"
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			this->list_citizens = new list_citizen;
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: list_citizen* list_citizens;
	private: bool datetime_checked = true;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView2;




	private: System::Windows::Forms::DataGridViewButtonColumn^ Column8;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column10;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column11;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Label^ label6;

	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint9 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				L"0,0"));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint10 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				L"0,0"));
			System::Windows::Forms::DataVisualization::Charting::Title^ title5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint11 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint12 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::Title^ title6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(662, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть...";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить...";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::сохранитьToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"input.txt";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(650, 582);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(642, 556);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Просмотр";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart1->Legends->Add(legend5);
			this->chart1->Location = System::Drawing::Point(4, 407);
			this->chart1->Name = L"chart1";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series5->LabelFormat = L"#.##%";
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			dataPoint9->LabelFormat = L"#.##%";
			dataPoint9->LegendText = L"< 18";
			dataPoint10->LabelFormat = L"#.##%";
			dataPoint10->LegendText = L">= 18";
			series5->Points->Add(dataPoint9);
			series5->Points->Add(dataPoint10);
			series5->YValuesPerPoint = 2;
			this->chart1->Series->Add(series5);
			this->chart1->Size = System::Drawing::Size(635, 143);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			title5->Name = L"Title1";
			title5->Text = L"Процентное соотношение граждан по возрасту";
			this->chart1->Titles->Add(title5);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column8, this->Column9
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(642, 384);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ФИО";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Номер квартиры";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Площадь квартиры";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Этаж";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Изменение";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Text = L"Изменить";
			this->Column8->UseColumnTextForButtonValue = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Удаление";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Text = L"Удалить";
			this->Column9->UseColumnTextForButtonValue = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->chart2);
			this->tabPage4->Controls->Add(this->label1);
			this->tabPage4->Controls->Add(this->comboBox2);
			this->tabPage4->Controls->Add(this->dataGridView2);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(642, 556);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Просмотр зарегистрированных";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// chart2
			// 
			chartArea6->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chart2->Legends->Add(legend6);
			this->chart2->Location = System::Drawing::Point(0, 390);
			this->chart2->Name = L"chart2";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series6->Legend = L"Legend1";
			series6->Name = L"Series1";
			dataPoint11->LegendText = L"< 18";
			dataPoint12->LegendText = L"> 18";
			series6->Points->Add(dataPoint11);
			series6->Points->Add(dataPoint12);
			this->chart2->Series->Add(series6);
			this->chart2->Size = System::Drawing::Size(642, 166);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			title6->Name = L"Title1";
			title6->Text = L"Процентное соотношение граждан по возрасту в текущей квартире";
			this->chart2->Titles->Add(title6);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Номер квартиры:";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(105, 3);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(534, 21);
			this->comboBox2->Sorted = true;
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column5,
					this->Column6, this->Column7, this->Column10, this->Column11
			});
			this->dataGridView2->Location = System::Drawing::Point(0, 30);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowTemplate->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(639, 354);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView2_CellContentClick);
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"ФИО";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Дата рождения";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Род занятий";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Изменение";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Text = L"Изменить";
			this->Column10->UseColumnTextForButtonValue = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Удаление";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Text = L"Удалить";
			this->Column11->UseColumnTextForButtonValue = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(642, 556);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Создание владельца";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 140);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(332, 53);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Площадь квартиры:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Этаж:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Номер квартиры:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ФИО:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(131, 96);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(226, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(131, 70);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(226, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(226, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(131, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 20);
			this->textBox1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->comboBox1);
			this->tabPage3->Controls->Add(this->groupBox1);
			this->tabPage3->Controls->Add(this->dateTimePicker1);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(642, 556);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Регистрация жителей";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(125, 41);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(226, 21);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 3;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(19, 96);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(332, 64);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Род занятий";
			this->groupBox1->Visible = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(199, 28);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(63, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Пенсия";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(106, 28);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(61, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Работа";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(17, 28);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(56, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Учеба";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(125, 68);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(226, 20);
			this->dateTimePicker1->TabIndex = 19;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker1_ValueChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(19, 185);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(332, 53);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 70);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Дата рождения";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Номер квартиры:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"ФИО:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(125, 15);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(226, 20);
			this->textBox8->TabIndex = 9;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 391);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Всего арендовано 0 квартир";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 621);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Программа по регистрации владельцев и жителей квартир многоэтажного дома";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		};
	private: System::Void update_chart() {
		double s = this->list_citizens->less18 + this->list_citizens->more18;
		this->chart1->Series[0]->Points[0]->SetValueXY(this->list_citizens->less18 / s, this->list_citizens->less18);
		this->chart1->Series[0]->Points[1]->SetValueXY(this->list_citizens->more18 / s, this->list_citizens->more18);
		this->chart1->Series[0]->Points[0]->Label = std::trunc(this->list_citizens->less18 / s * 100.0).ToString() + "%";
		this->chart1->Series[0]->Points[1]->Label = std::ceil(this->list_citizens->more18 / s * 100.0).ToString() + "%";
		this->chart1->Refresh();

		int index = this->comboBox2->SelectedIndex;
		if (index != -1) {
			citizen* owner = this->list_citizens->search_by_apartament_number(System::Convert::ToInt32(this->comboBox2->Items[index]));
			s = owner->list_registered_citizens->less18 + owner->list_registered_citizens->more18;
			this->chart2->Series[0]->Points[0]->SetValueXY(owner->list_registered_citizens->less18 / s, owner->list_registered_citizens->less18);
			this->chart2->Series[0]->Points[1]->SetValueXY(owner->list_registered_citizens->more18 / s, owner->list_registered_citizens->more18);
			this->chart2->Series[0]->Points[0]->Label = std::trunc(owner->list_registered_citizens->less18 / s * 100.0).ToString() + "%";
			this->chart2->Series[0]->Points[1]->Label = std::ceil(owner->list_registered_citizens->more18 / s * 100.0).ToString() + "%";
			this->chart2->Refresh();
		}
	}
	private: System::Void update_status() {
		this->label6->Text = "Всего зарегистрировано " + this->list_citizens->size + " квартир";
	}
	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (this->openFileDialog1->ShowDialog())
		{
		case System::Windows::Forms::DialogResult::None:
			break;
		case System::Windows::Forms::DialogResult::OK:
		{
			std::ifstream* fin = new std::ifstream(msclr::interop::marshal_as<std::string>(this->openFileDialog1->FileName));
			list_citizen* templ = new list_citizen;
			try {
				templ->read_file(fin);
				this->dataGridView1->Rows->Clear();
				this->dataGridView2->Rows->Clear();
				this->comboBox1->Items->Clear();
				this->comboBox2->Items->Clear();
				delete this->list_citizens;
				this->list_citizens = templ;
				node_citizen* tmpc = templ->head;
				do {
					if (tmpc->data != NULL) {
						this->dataGridView1->Rows->Add(msclr::interop::marshal_as<System::String^>(tmpc->data->fio_owner), tmpc->data->apartment_number.ToString(), tmpc->data->square.ToString(), tmpc->data->stage.ToString());
						this->comboBox1->Items->Add(tmpc->data->apartment_number);
						this->comboBox2->Items->Add(tmpc->data->apartment_number);
						/*node_registered_citizen* tmprc = tmpc->data->list_registered_citizens->head;
						do {
							if (tmprc->data != NULL) {

							}
						} while (tmprc != NULL)*/
					}
					tmpc = tmpc->pNext;
				} while (tmpc != NULL);
				this->update_chart();
				this->update_status();
			}
			catch (...) {
				System::Windows::Forms::MessageBox::Show("Неверный формат данных!", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			}
			fin->close();
			delete fin;
		}
		case System::Windows::Forms::DialogResult::Cancel:
			break;
		case System::Windows::Forms::DialogResult::Abort:
			break;
		case System::Windows::Forms::DialogResult::Retry:
			break;
		case System::Windows::Forms::DialogResult::Ignore:
			break;
		case System::Windows::Forms::DialogResult::Yes:
			break;
		case System::Windows::Forms::DialogResult::No:
			break;
		default:
			break;
		}
	}
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (this->saveFileDialog1->ShowDialog())
		{
		case System::Windows::Forms::DialogResult::None:
			break;
		case System::Windows::Forms::DialogResult::OK:
		{
			std::ofstream* fout = new std::ofstream(msclr::interop::marshal_as<std::string>(this->saveFileDialog1->FileName));
			this->list_citizens->save_file(fout);
			fout->close();
			delete fout;
		}
		case System::Windows::Forms::DialogResult::Cancel:
			break;
		case System::Windows::Forms::DialogResult::Abort:
			break;
		case System::Windows::Forms::DialogResult::Retry:
			break;
		case System::Windows::Forms::DialogResult::Ignore:
			break;
		case System::Windows::Forms::DialogResult::Yes:
			break;
		case System::Windows::Forms::DialogResult::No:
			break;
		default:
			break;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->errorProvider2->Clear();
		bool valid = true;
		System::String^ fio;
		std::string target = "";
		int number_apartament;
		if (comboBox1->SelectedIndex == -1) {
			this->errorProvider2->SetError(comboBox1, "Вы должны номер квартиры для регистрации!");
			valid = false;
		}
		else {
			number_apartament = System::Convert::ToInt32(comboBox1->Items[comboBox1->SelectedIndex]);
		}
		if (!this->datetime_checked) {
			this->errorProvider2->SetError(this->dateTimePicker1, "Вы проигнорировали неверную дату рождения!");
			valid = false;
		}
		fio = this->textBox8->Text;
		if (System::String::IsNullOrEmpty(fio)) {
			this->errorProvider2->SetError(this->textBox8, "Вы должны ввести ФИО!");
			valid = false;
		}
		if (this->groupBox1->Visible) {
			if (this->radioButton1->Checked) {
				target = "Учеба";
			}
			else if (this->radioButton2->Checked) {
				target = "Работа";
			}
			else if (this->radioButton3->Checked) {
				target = "Пенсия";
			}
			else {
				this->errorProvider2->SetError(this->groupBox1, "Вы должны выбрать род занятий для данного человека!");
				valid = false;
			}
		}
		if (valid) {
			registered_citizen* tmp = new registered_citizen;
			System::DateTime^ datetime = this->dateTimePicker1->Value;
			tmp->birth.day = datetime->Day;
			tmp->birth.month = datetime->Month;
			tmp->birth.year = datetime->Year;
			tmp->fio = msclr::interop::marshal_as<std::string>(fio);
			tmp->target = target;
			if (!this->list_citizens->search_registered_citizen_by_all_data(number_apartament, tmp->fio, tmp->birth.year, tmp->birth.month, tmp->birth.day, tmp->target)) {
				tmp->age = tmp->birth.get_age();
				this->list_citizens->push_registered_citizen(number_apartament, tmp);
				System::Windows::Forms::MessageBox::Show("Вы зарегистрировали жителя в данную квартиру!", "Успех", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
				this->textBox8->Clear();
				this->radioButton1->Checked = false;
				this->radioButton2->Checked = false;
				this->radioButton3->Checked = false;
				this->dateTimePicker1->Value = System::DateTime::Now;
				this->comboBox1->SelectedIndex = -1;
				int index = this->comboBox2->SelectedIndex;
				if (System::Convert::ToInt32(this->comboBox2->Items[index]) == number_apartament) {
					dataGridView2->Rows->Add(msclr::interop::marshal_as<System::String^>(tmp->fio), msclr::interop::marshal_as<System::String^>(tmp->birth.to_string()), msclr::interop::marshal_as<System::String^>(tmp->target));
				}
				this->update_chart();
			}
			else {
				this->errorProvider2->SetError(textBox8, "Такая запись уже существует!");
				this->errorProvider2->SetError(dateTimePicker1, "Такая запись уже существует!");
				this->errorProvider2->SetError(comboBox1, "Такая запись уже существует!");
				this->errorProvider2->SetError(groupBox1, "Такая запись уже существует!");
			}
		}
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex > -1) {
			switch (e->ColumnIndex) {
			case 3:
			{
				System::Windows::Forms::DataGridViewRow^ row = dataGridView2->Rows[e->RowIndex];
				int index = comboBox2->SelectedIndex;
				unsigned int* number_apartament = new unsigned int(System::Convert::ToInt32(this->comboBox2->Items[index]));
				System::DateTime^ dt = System::DateTime::ParseExact(row->Cells["Column6"]->Value->ToString(), msclr::interop::marshal_as<System::String^>("d.M.yyyy"), nullptr);
				std::string fio = msclr::interop::marshal_as<std::string>(row->Cells["Column5"]->Value->ToString());
				std::string target = msclr::interop::marshal_as<std::string>(row->Cells["Column7"]->Value->ToString());
				registered_citizen* tmp = this->list_citizens->search_registered_citizen_by_all_data(*number_apartament, fio, dt->Year, dt->Month, dt->Day, target);
				this->list_citizens->remove_registered_citizen_from_apartament(*number_apartament, tmp);
				System::Windows::Forms::Form^ form = gcnew CppCLR_WinformsProjekt1::MyForm2(tmp, this->list_citizens, number_apartament);
				form->ShowDialog();
				this->list_citizens->push_registered_citizen(*number_apartament, tmp);
				if (index != -1) {
					dataGridView2->Rows->Clear();
					citizen* owner = this->list_citizens->search_by_apartament_number(System::Convert::ToInt32(comboBox2->Items[index]));
					node_registered_citizen* temp = owner->list_registered_citizens->head;
					do {
						if (temp->data != NULL) {
							dataGridView2->Rows->Add(msclr::interop::marshal_as<System::String^>(temp->data->fio), msclr::interop::marshal_as<System::String^>(temp->data->birth.to_string()), msclr::interop::marshal_as<System::String^>(temp->data->target));
						}
						temp = temp->pNext;
					} while (temp != NULL);
				}
				this->update_chart();
				break;
			}
			case 4:
			{
				switch (System::Windows::Forms::MessageBox::Show("Вы уверены что хотите удалить данную запись? Запись будет утеряна навсегда", "Подтверждение пользователя", System::Windows::Forms::MessageBoxButtons::OKCancel, System::Windows::Forms::MessageBoxIcon::Question))
				{
				case System::Windows::Forms::DialogResult::OK:
				{
					System::Windows::Forms::DataGridViewRow^ row = dataGridView2->Rows[e->RowIndex];
					int index = comboBox2->SelectedIndex;
					unsigned int number_apartament = System::Convert::ToInt32(this->comboBox2->Items[index]);
					System::DateTime^ dt = System::DateTime::ParseExact(row->Cells["Column6"]->Value->ToString(), msclr::interop::marshal_as<System::String^>("d.M.yyyy"), nullptr);
					std::string fio = msclr::interop::marshal_as<std::string>(row->Cells["Column5"]->Value->ToString());
					std::string target = msclr::interop::marshal_as<std::string>(row->Cells["Column7"]->Value->ToString());
					registered_citizen* tmp = this->list_citizens->search_registered_citizen_by_all_data(number_apartament, fio, dt->Year, dt->Month, dt->Day, target);
					this->list_citizens->remove_registered_citizen_from_apartament(number_apartament, tmp);
					delete tmp;
					if (index != -1) {
						dataGridView2->Rows->Clear();
						citizen* owner = this->list_citizens->search_by_apartament_number(System::Convert::ToInt32(comboBox2->Items[index]));
						node_registered_citizen* temp = owner->list_registered_citizens->head;
						do {
							if (temp->data != NULL) {
								dataGridView2->Rows->Add(msclr::interop::marshal_as<System::String^>(temp->data->fio), msclr::interop::marshal_as<System::String^>(temp->data->birth.to_string()), msclr::interop::marshal_as<System::String^>(temp->data->target));
							}
							temp = temp->pNext;
						} while (temp != NULL);
					}
					this->update_chart();
					System::Windows::Forms::MessageBox::Show("Вы успешно удалили данную запись", "Успех", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
					break;
				}
				default:
					break;
				}
			}
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->errorProvider1->Clear();
		bool valid = true;
		System::String^ fio;
		int number_apartament;
		int stage;
		int square;

		// Проверка первого поля
		fio = this->textBox1->Text;
		if (System::String::IsNullOrEmpty(fio)) {
			this->errorProvider1->SetError(this->textBox1, "Требуется ФИО владельца!");
			valid = false;
		}

		// Проверка второго поля
		try {
			number_apartament = System::Convert::ToInt32(this->textBox2->Text->ToString());
			if (number_apartament <= 0) {
				this->errorProvider1->SetError(this->textBox2, "Номер квартиры должен быть больше нуля!");
				valid = false;
			}
			else if (this->list_citizens->search_by_apartament_number(number_apartament) != NULL) {
				this->errorProvider1->SetError(this->textBox2, "Квартира уже занята!");
				valid = false;
			}
		}
		catch (...) {
			this->errorProvider1->SetError(this->textBox2, "Номер квартиры должен быть числовым!");
			valid = false;
		}

		// Проверка третьего поля
		try {
			stage = System::Convert::ToInt32(this->textBox3->Text->ToString());
			if (stage <= 0) {
				this->errorProvider1->SetError(this->textBox3, "Этаж должен быть больше нуля!");
				valid = false;
			}
		}
		catch (...) {
			this->errorProvider1->SetError(this->textBox3, "Этаж должен быть числовым!");
			valid = false;
		}

		// Проверка четвертого поля
		try {
			square = System::Convert::ToInt32(this->textBox4->Text->ToString());
			if (square <= 0) {
				this->errorProvider1->SetError(this->textBox4, "Площадь квартиры должен быть больше нуля!");
				valid = false;
			}
		}
		catch (...) {
			this->errorProvider1->SetError(this->textBox4, "Площадь квартиры должен быть числовым!");
			valid = false;
		}
		if (valid) {
			citizen* temp = new citizen;
			temp->apartment_number = number_apartament;
			temp->fio_owner = msclr::interop::marshal_as<std::string>(fio);
			temp->stage = stage;
			temp->square = square;
			comboBox1->Items->Add(number_apartament);
			comboBox2->Items->Add(number_apartament);
			this->list_citizens->push_sorted(temp);
			this->dataGridView1->Rows->Add(fio, number_apartament, square, stage);
			System::Windows::Forms::MessageBox::Show("Вы добавили владельца квартиры!", "Успех", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			this->textBox1->Clear();
			this->textBox2->Clear();
			this->textBox3->Clear();
			this->textBox4->Clear();
			this->update_status();
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex > -1) {
			switch (e->ColumnIndex) {
			case 4:
			{
				System::Windows::Forms::DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
				int number_apartament = System::Convert::ToInt32(row->Cells["Column2"]->Value);
				citizen* temp = this->list_citizens->search_by_apartament_number(number_apartament);
				System::Windows::Forms::Form^ form = gcnew CppCLR_WinformsProjekt1::MyForm(temp, this->list_citizens);
				int index1 = this->comboBox1->Items->IndexOf(temp->apartment_number);
				int index2 = this->comboBox2->Items->IndexOf(temp->apartment_number);
				form->ShowDialog();
				row->Cells["Column1"]->Value = msclr::interop::marshal_as<System::String^>(temp->fio_owner);
				row->Cells["Column2"]->Value = temp->apartment_number;
				row->Cells["Column3"]->Value = temp->square;
				row->Cells["Column4"]->Value = temp->stage;
				comboBox1->Items[index1] = temp->apartment_number;
				comboBox2->Items[index2] = temp->apartment_number;
				this->update_status();
				break;
			}
			case 5:
			{
				switch (System::Windows::Forms::MessageBox::Show("Вы уверены что хотите удалить данную запись? Запись будет утеряна навсегда", "Подтверждение пользователя", System::Windows::Forms::MessageBoxButtons::OKCancel, System::Windows::Forms::MessageBoxIcon::Question))
				{
				case System::Windows::Forms::DialogResult::OK:
				{
					System::Windows::Forms::DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
					int number_apartament = System::Convert::ToInt32(row->Cells["Column2"]->Value);
					this->list_citizens->delete_by_apartament_number(number_apartament);
					dataGridView1->Rows->Remove(row);
					if (comboBox2->SelectedIndex == comboBox2->Items->IndexOf(number_apartament)) {
						dataGridView2->Rows->Clear();
					}
					comboBox1->Items->Remove(number_apartament);
					comboBox2->Items->Remove(number_apartament);
					this->update_chart();
					System::Windows::Forms::MessageBox::Show("Вы успешно удалили данную запись", "Успех", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
					this->update_status();
				}
				default:
					break;
				}
			}
			}
		}
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		errorProvider2->Clear();
		System::DateTime^ datetime = this->dateTimePicker1->Value;
		System::DateTime^ now = System::DateTime::Now;
		bool c = true;
		if (datetime->Year > now->Year) {
			c = false;
		} else if (datetime->Year == now->Year) {
			if (datetime->Month > now->Month) {
				c = false;
			}
			else if (datetime->Month == now->Month) {
				if (datetime->Day > now->Day) {
					c = false;
				}
			}
		}
		if (!c) {
			errorProvider2->SetError(this->dateTimePicker1, "Гражданин ещё не родился!");
			this->datetime_checked = false;
		}
		else {
			int ages = now->Year - datetime->Year - (now->Month < datetime->Month ? 1 : (now->Month == datetime->Month && now->Day < datetime->Day ? 1 : 0));
			if (ages > 18) {
				groupBox1->Visible = true;
			}
			else {
				groupBox1->Visible = false;
			}
			this->datetime_checked = true;
		}
	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int index = comboBox2->SelectedIndex;
	if (index != -1) {
		dataGridView2->Rows->Clear();
		citizen* owner = this->list_citizens->search_by_apartament_number(System::Convert::ToInt32(comboBox2->Items[index]));
		node_registered_citizen* temp = owner->list_registered_citizens->head;
		do {
			if (temp->data != NULL) {
				dataGridView2->Rows->Add(msclr::interop::marshal_as<System::String^>(temp->data->fio), msclr::interop::marshal_as<System::String^>(temp->data->birth.to_string()), msclr::interop::marshal_as<System::String^>(temp->data->target));
			}
			temp = temp->pNext;
		} while (temp != NULL);
	}
	this->update_chart();
}
};
};