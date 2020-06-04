#pragma once
#include <msclr\marshal_cppstd.h>
#include "Citizen.h"
#include "ListCitizen.h"
#include "ListRegisteredCitizen.h"
#include "RegisteredCitizen.h"
namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(citizen* tmp, list_citizen* list_citizens)
		{
			InitializeComponent();
			this->tmp = tmp;
			this->list_citizens = list_citizens;
			this->textBox1->Text = msclr::interop::marshal_as<System::String^>(tmp->fio_owner);
			this->textBox2->Text = tmp->apartment_number.ToString();
			this->textBox3->Text = tmp->square.ToString();
			this->textBox4->Text = tmp->stage.ToString();
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: citizen* tmp;
	private: list_citizen* list_citizens;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::ComponentModel::IContainer^ components;

	protected:








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(332, 53);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Изменить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Площадь квартиры:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Этаж:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Номер квартиры:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"ФИО:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(122, 91);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(226, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(122, 65);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(226, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(122, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(226, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 20);
			this->textBox1->TabIndex = 9;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 189);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
			else if (this->tmp->apartment_number != number_apartament && this->list_citizens->search_by_apartament_number(number_apartament) != NULL) {
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
			this->tmp->apartment_number = number_apartament;
			this->tmp->fio_owner = msclr::interop::marshal_as<std::string>(fio);
			this->tmp->stage = stage;
			this->tmp->square = square;
			System::Windows::Forms::MessageBox::Show("Вы отредактировали владельца квартиры!", "Успех", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			this->Close();
			delete this;
		}
	}
};
}
