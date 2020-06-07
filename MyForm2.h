#pragma once

namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(registered_citizen* tmp, list_citizen* list_citizens, unsigned int* number_apartament_t)
		{
			InitializeComponent();
			this->tmpr = tmp;
			this->list_citizens = list_citizens;
			this->number_apartament_t = number_apartament_t;
			node_citizen* temp = list_citizens->head;
			do {
				if (temp->data != NULL) {
					this->comboBox1->Items->Add(temp->data->apartment_number);
				}
				temp = temp->pNext;
			} while (temp != NULL);

			this->groupBox1->Visible = tmp->age >= 18;
			if (tmp->target == "Учеба") {
				this->radioButton1->Checked = true;
			}
			else if (tmp->target == "Работа") {
				this->radioButton2->Checked = true;
			}
			else if (tmp->target == "Пенсия") {
				this->radioButton3->Checked = true;
			}
			else {
				tmp->target = "";
			}
			this->textBox8->Text = msclr::interop::marshal_as<System::String^>(tmp->fio);
			this->dateTimePicker1->Value = System::DateTime(tmp->birth.year, tmp->birth.month, tmp->birth.day);
			//System::Windows::Forms::MessageBox::Show(System::Convert::ToString(*number_apartament_t), "Информация");
			int index = this->comboBox1->Items->IndexOf(*number_apartament_t);
			this->comboBox1->SelectedIndex = index;
			//this->comboBox1->SelectedItem = *number_apartament_t;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: list_citizen* list_citizens;
	private: registered_citizen* tmpr;
	private: unsigned int* number_apartament_t;
	private: bool datetime_checked = true;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::ComponentModel::IContainer^ components;

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
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(118, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(226, 21);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 21;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(12, 90);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(332, 64);
			this->groupBox1->TabIndex = 28;
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
			this->dateTimePicker1->Location = System::Drawing::Point(118, 62);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(226, 20);
			this->dateTimePicker1->TabIndex = 27;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm2::dateTimePicker1_ValueChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 179);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(332, 53);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Изменить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Дата рождения";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Номер квартиры:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"ФИО:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(118, 9);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(226, 20);
			this->textBox8->TabIndex = 22;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(372, 235);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Name = L"MyForm2";
			this->Text = L"Редактор жителя";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	errorProvider1->Clear();
	System::DateTime^ datetime = this->dateTimePicker1->Value;
	System::DateTime^ now = System::DateTime::Now;
	bool c = true;
	if (datetime->Year > now->Year) {
		c = false;
	}
	else if (datetime->Year == now->Year) {
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
		errorProvider1->SetError(this->dateTimePicker1, "Гражданин ещё не родился!");
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->errorProvider1->Clear();
	bool valid = true;
	System::String^ fio;
	std::string target = "";
	int number_apartament;
	if (comboBox1->SelectedIndex == -1) {
		this->errorProvider1->SetError(comboBox1, "Вы должны номер квартиры для регистрации!");
		valid = false;
	}
	else {
		number_apartament = System::Convert::ToInt32(comboBox1->Items[comboBox1->SelectedIndex]);
	}
	if (!this->datetime_checked) {
		this->errorProvider1->SetError(this->dateTimePicker1, "Вы проигнорировали неверную дату рождения!");
		valid = false;
	}
	fio = this->textBox8->Text;
	if (System::String::IsNullOrEmpty(fio)) {
		this->errorProvider1->SetError(this->textBox8, "Вы должны ввести ФИО!");
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
			this->errorProvider1->SetError(this->groupBox1, "Вы должны выбрать род занятий для данного человека!");
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
			*tmpr = *tmp;
			*this->number_apartament_t = number_apartament;
			System::Windows::Forms::MessageBox::Show("Вы отредактировали данные жителя!", "Успех", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			this->Close();
			delete this;
		}
		else {
			this->errorProvider1->SetError(textBox8, "Такая запись уже существует!");
			this->errorProvider1->SetError(dateTimePicker1, "Такая запись уже существует!");
			this->errorProvider1->SetError(comboBox1, "Такая запись уже существует!");
			this->errorProvider1->SetError(groupBox1, "Такая запись уже существует!");
		}
	}
}
};
}
