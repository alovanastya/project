#pragma once
#include "Header.h"
/*
			this->comboBoxItem->DropDownStyle = ComboBoxStyle::DropDownList;
			this->comboBoxItem->SelectedIndex = 0;

			this->comboBoxPriority->DropDownStyle = ComboBoxStyle::DropDownList;
			this->comboBoxPriority->SelectedIndex = 0;
*/


namespace Prac2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::DataGridView^ dataGridView1;
		int* last;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ComboBox^ comboBoxPriority;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public:
		Medicine* medicines;
		MyForm9(Medicine* medicines, int* last, System::Windows::Forms::DataGridView^ dataGridView1)
		{
			this->medicines = medicines;
			this->last = last;
			this->dataGridView1 = dataGridView1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonOk;
	protected:

	private: System::Windows::Forms::ComboBox^ comboBoxItem;
	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->comboBoxItem = (gcnew System::Windows::Forms::ComboBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->comboBoxPriority = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonOk
			// 
			this->buttonOk->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonOk->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOk->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonOk->Location = System::Drawing::Point(351, 193);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(113, 41);
			this->buttonOk->TabIndex = 0;
			this->buttonOk->Text = L"Готово";
			this->buttonOk->UseVisualStyleBackColor = false;
			this->buttonOk->Click += gcnew System::EventHandler(this, &MyForm9::buttonOk_Click);
			// 
			// comboBoxItem
			// 
			this->comboBoxItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->comboBoxItem->FormattingEnabled = true;
			this->comboBoxItem->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"id", L"Название", L"Производитель", L"Категория",
					L"Форма выпуска", L"Цена", L"Количество"
			});
			this->comboBoxItem->Location = System::Drawing::Point(265, 51);
			this->comboBoxItem->Name = L"comboBoxItem";
			this->comboBoxItem->Size = System::Drawing::Size(199, 33);
			this->comboBoxItem->TabIndex = 1;
			this->comboBoxItem->DropDownStyle = ComboBoxStyle::DropDownList;
			this->comboBoxItem->SelectedIndex = 0;
			// 
			// comboBoxPriority
			// 
			this->comboBoxPriority->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->comboBoxPriority->FormattingEnabled = true;
			this->comboBoxPriority->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"По возрастанию", L"По убыванию" });
			this->comboBoxPriority->Location = System::Drawing::Point(265, 131);
			this->comboBoxPriority->Name = L"comboBoxPriority";
			this->comboBoxPriority->Size = System::Drawing::Size(199, 33);
			this->comboBoxPriority->TabIndex = 2;
			this->comboBoxPriority->DropDownStyle = ComboBoxStyle::DropDownList;
			this->comboBoxPriority->SelectedIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"По какому полю\r\nхотите сортировать:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(2, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"В каком порядке:";
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(476, 262);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxPriority);
			this->Controls->Add(this->comboBoxItem);
			this->Controls->Add(this->buttonOk);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm9";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Сортировка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBoxItem->Text == "id" && comboBoxPriority->Text == "По возрастанию") {
			std::sort(medicines, medicines + *last, comp11);
		}
		if (comboBoxItem->Text == "id" && comboBoxPriority->Text == "По убыванию") {
			std::sort(medicines, medicines + *last, comp12);
		}
		if (comboBoxItem->Text == "Название" && comboBoxPriority->Text == "По возрастанию") {
			std::sort(medicines, medicines + *last, comp21);
		}
		if (comboBoxItem->Text == "Название" && comboBoxPriority->Text == "По убыванию") {
			std::sort(medicines, medicines + *last, comp22);
		}
		if (comboBoxItem->Text == "Производитель" && comboBoxPriority->Text == "По возрастанию") {
			std::sort(medicines, medicines + *last, comp31);
		}
		if (comboBoxItem->Text == "Производитель" && comboBoxPriority->Text == "По убыванию") {
			std::sort(medicines, medicines + *last, comp32);
		}
		if (comboBoxItem->Text == "Категория" && comboBoxPriority->Text == "По возрастанию") {
			std::sort(medicines, medicines + *last, comp41);
		}
		if (comboBoxItem->Text == "Категория" && comboBoxPriority->Text == "По убыванию") {
			std::sort(medicines, medicines + *last, comp42);
		}
		if (comboBoxItem->Text == "Форма выпуска" && comboBoxPriority->Text == "По возрастанию") {
			std::sort(medicines, medicines + *last, comp51);
		}
		if (comboBoxItem->Text == "Форма выпуска" && comboBoxPriority->Text == "По убыванию") {
			std::sort(medicines, medicines + *last, comp52);
		}
		if (comboBoxItem->Text == "Цена" && comboBoxPriority->Text == "По возрастанию") {
			std::sort(medicines, medicines + *last, comp61);
		}
		if (comboBoxItem->Text == "Цена" && comboBoxPriority->Text == "По убыванию") {
			std::sort(medicines, medicines + *last, comp62);
		}
		if (comboBoxItem->Text == "Количество" && comboBoxPriority->Text == "По возрастанию") {
			std::sort(medicines, medicines + *last, comp71);
		}
		if (comboBoxItem->Text == "Количество" && comboBoxPriority->Text == "По убыванию") {
			std::sort(medicines, medicines + *last, comp72);
		}

		while (0 != dataGridView1->RowCount)
			dataGridView1->Rows->RemoveAt(0);
		for (int i = 0; i < *last; ++i) {
			this->dataGridView1->Rows->Add(1);
			dataGridView1->Rows[i]->Cells[0]->Value = medicines[i].id.ToString();
			dataGridView1->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(medicines[i].name);
			dataGridView1->Rows[i]->Cells[2]->Value = msclr::interop::marshal_as<String^>(medicines[i].maker);
			dataGridView1->Rows[i]->Cells[3]->Value = msclr::interop::marshal_as<String^>(medicines[i].category);
			dataGridView1->Rows[i]->Cells[4]->Value = msclr::interop::marshal_as<String^>(medicines[i].form);
			dataGridView1->Rows[i]->Cells[5]->Value = medicines[i].price.ToString();
			dataGridView1->Rows[i]->Cells[6]->Value = medicines[i].quantity.ToString();
		}
		Close();
	}
	};
}
