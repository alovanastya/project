#pragma once
#include "Header.h"

namespace Prac2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		int* n;
		int* last;
		Medicine* medicines;
	private: System::Windows::Forms::ComboBox^ comboBoxForm;
	public:

	private: System::Windows::Forms::ComboBox^ comboBoxCategory;

	public:
		System::Windows::Forms::DataGridView^ dataGridView1;
		MyForm6(Medicine* medicines, int* n, int* last, System::Windows::Forms::DataGridView^ dataGridView1)
		{
			this->medicines = medicines;
			this->n = n;
			this->last = last;
			this->dataGridView1 = dataGridView1;
			InitializeComponent();
			this->textBoxName->Text = msclr::interop::marshal_as<String^>(this->medicines[*n].name);
			this->textBoxMaker->Text = msclr::interop::marshal_as<String^>(medicines[*n].maker);
			this->comboBoxCategory->Text = msclr::interop::marshal_as<String^>(medicines[*n].category);
			this->comboBoxForm->Text = msclr::interop::marshal_as<String^>(medicines[*n].form);
			this->numericUpDownPrice->Value = (medicines[*n].price);
			this->numericUpDownCount->Value = (medicines[*n].quantity);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonOk;
	protected:

	private: System::Windows::Forms::TextBox^ textBoxMaker;
	protected:



	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPrice;


	private: System::Windows::Forms::NumericUpDown^ numericUpDownCount;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->textBoxMaker = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDownPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxForm = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxCategory = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCount))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonOk
			// 
			this->buttonOk->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonOk->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOk->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonOk->Location = System::Drawing::Point(359, 435);
			this->buttonOk->Margin = System::Windows::Forms::Padding(4);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(148, 54);
			this->buttonOk->TabIndex = 25;
			this->buttonOk->Text = L"Готово";
			this->buttonOk->UseVisualStyleBackColor = false;
			this->buttonOk->Click += gcnew System::EventHandler(this, &MyForm6::buttonOk_Click);
			// 
			// textBoxMaker
			// 
			this->textBoxMaker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxMaker->Location = System::Drawing::Point(308, 105);
			this->textBoxMaker->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMaker->Name = L"textBoxMaker";
			this->textBoxMaker->Size = System::Drawing::Size(198, 30);
			this->textBoxMaker->TabIndex = 22;
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxName->Location = System::Drawing::Point(308, 40);
			this->textBoxName->Margin = System::Windows::Forms::Padding(4);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(198, 30);
			this->textBoxName->TabIndex = 21;
			// 
			// numericUpDownPrice
			// 
			this->numericUpDownPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->numericUpDownPrice->Location = System::Drawing::Point(308, 368);
			this->numericUpDownPrice->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDownPrice->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownPrice->Name = L"numericUpDownPrice";
			this->numericUpDownPrice->Size = System::Drawing::Size(198, 30);
			this->numericUpDownPrice->TabIndex = 20;
			this->numericUpDownPrice->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// numericUpDownCount
			// 
			this->numericUpDownCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->numericUpDownCount->Location = System::Drawing::Point(308, 172);
			this->numericUpDownCount->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDownCount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownCount->Name = L"numericUpDownCount";
			this->numericUpDownCount->Size = System::Drawing::Size(199, 30);
			this->numericUpDownCount->TabIndex = 19;
			this->numericUpDownCount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 368);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 29);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Цена";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 299);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(241, 29);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Форма выпуска";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 237);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 29);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Категория";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 172);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 29);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Количество";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 104);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(243, 29);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Производитель";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 40);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 29);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Название";
			// 
			// comboBoxForm
			// 
			this->comboBoxForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->comboBoxForm->FormattingEnabled = true;
			this->comboBoxForm->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Капли", L"Порошок", L"Сироп", L"Спрей", L"Таблетки" });
			this->comboBoxForm->Location = System::Drawing::Point(308, 306);
			this->comboBoxForm->Name = L"comboBoxForm";
			this->comboBoxForm->Size = System::Drawing::Size(196, 33);
			this->comboBoxForm->TabIndex = 26;
			// 
			// comboBoxCategory
			// 
			this->comboBoxCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->comboBoxCategory->FormattingEnabled = true;
			this->comboBoxCategory->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Обезболивающее", L"Антибиотик", L"Противовирусное",
					L"Антидепрессант", L"Снотворное"
			});
			this->comboBoxCategory->Location = System::Drawing::Point(308, 235);
			this->comboBoxCategory->Name = L"comboBoxCategory";
			this->comboBoxCategory->Size = System::Drawing::Size(196, 28);
			this->comboBoxCategory->TabIndex = 27;
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(529, 526);
			this->Controls->Add(this->comboBoxCategory);
			this->Controls->Add(this->comboBoxForm);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->textBoxMaker);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->numericUpDownPrice);
			this->Controls->Add(this->numericUpDownCount);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Изменение элемента";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCount))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < *last; ++i) {
			if (medicines[i].id == *n) {
				medicines[i].price = Convert::ToInt32(numericUpDownPrice->Value);
				medicines[i].quantity = Convert::ToInt32(numericUpDownCount->Value);
				medicines[i].name = msclr::interop::marshal_as<std::string>(textBoxName->Text);
				medicines[i].maker = msclr::interop::marshal_as<std::string>(textBoxMaker->Text);
				medicines[i].category = msclr::interop::marshal_as<std::string>(comboBoxCategory->Text);
				medicines[i].form = msclr::interop::marshal_as<std::string>(comboBoxForm->Text);
				break;
			}
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
