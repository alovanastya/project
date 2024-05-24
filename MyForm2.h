#pragma once
#include "Header.h"
//#include "MyForm.h"



namespace Prac2 {

	//Medicine medicines[102]{};
	//int last = 0;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		Medicine* medicines;
		int* last;
	private: System::Windows::Forms::ComboBox^ comboBoxForm;
	public:

	private: System::Windows::Forms::ComboBox^ comboBoxCategory;


	public:
		System::Windows::Forms::DataGridView^ dataGridView1;
		MyForm2(Medicine* medicines, int* last, System::Windows::Forms::DataGridView^ dataGridView1)
		{
			InitializeComponent();
			this->medicines = medicines;
			this->last = last;
			this->dataGridView1 = dataGridView1;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCount;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownPrice;

	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxMaker;
	private: System::Windows::Forms::Button^ buttonOk;








	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMaker = (gcnew System::Windows::Forms::TextBox());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->comboBoxForm = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxCategory = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPrice))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(33, 38);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"��������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 102);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(243, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�������������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(33, 170);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"����������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(33, 235);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"���������";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(33, 297);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(241, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"����� �������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(33, 366);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 29);
			this->label6->TabIndex = 5;
			this->label6->Text = L"����";
			// 
			// numericUpDownCount
			// 
			this->numericUpDownCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->numericUpDownCount->Location = System::Drawing::Point(363, 170);
			this->numericUpDownCount->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDownCount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownCount->Name = L"numericUpDownCount";
			this->numericUpDownCount->Size = System::Drawing::Size(165, 30);
			this->numericUpDownCount->TabIndex = 6;
			this->numericUpDownCount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownPrice
			// 
			this->numericUpDownPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->numericUpDownPrice->Location = System::Drawing::Point(363, 366);
			this->numericUpDownPrice->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->numericUpDownPrice->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownPrice->Name = L"numericUpDownPrice";
			this->numericUpDownPrice->Size = System::Drawing::Size(164, 30);
			this->numericUpDownPrice->TabIndex = 7;
			this->numericUpDownPrice->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxName->Location = System::Drawing::Point(363, 38);
			this->textBoxName->Margin = System::Windows::Forms::Padding(4);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(164, 30);
			this->textBoxName->TabIndex = 8;
			this->textBoxName->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// textBoxMaker
			// 
			this->textBoxMaker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxMaker->Location = System::Drawing::Point(363, 103);
			this->textBoxMaker->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMaker->Name = L"textBoxMaker";
			this->textBoxMaker->Size = System::Drawing::Size(164, 30);
			this->textBoxMaker->TabIndex = 9;
			// 
			// buttonOk
			// 
			this->buttonOk->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonOk->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOk->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonOk->Location = System::Drawing::Point(363, 443);
			this->buttonOk->Margin = System::Windows::Forms::Padding(4);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(165, 44);
			this->buttonOk->TabIndex = 12;
			this->buttonOk->Text = L"������";
			this->buttonOk->UseVisualStyleBackColor = false;
			this->buttonOk->Click += gcnew System::EventHandler(this, &MyForm2::buttonOk_Click);
			// 
			// comboBoxForm
			// 
			this->comboBoxForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->comboBoxForm->FormattingEnabled = true;
			this->comboBoxForm->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"�����", L"�������", L"�����", L"�����", L"��������" });
			this->comboBoxForm->Location = System::Drawing::Point(363, 297);
			this->comboBoxForm->Name = L"comboBoxForm";
			this->comboBoxForm->Size = System::Drawing::Size(164, 33);
			this->comboBoxForm->TabIndex = 13;
			// 
			// comboBoxCategory
			// 
			this->comboBoxCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->comboBoxCategory->FormattingEnabled = true;
			this->comboBoxCategory->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"��������������", L"����������", L"���������������",
					L"��������������", L"����������"
			});
			this->comboBoxCategory->Location = System::Drawing::Point(361, 238);
			this->comboBoxCategory->Name = L"comboBoxCategory";
			this->comboBoxCategory->Size = System::Drawing::Size(166, 28);
			this->comboBoxCategory->TabIndex = 29;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(567, 532);
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
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������� �������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPrice))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

public: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e){
	medicines[*last].id = *last + 1;
	medicines[*last].price = Convert::ToInt32(numericUpDownPrice->Value);
	medicines[*last].quantity = Convert::ToInt32(numericUpDownCount->Value);
	medicines[*last].name = msclr::interop::marshal_as<std::string>(textBoxName->Text);
	medicines[*last].maker = msclr::interop::marshal_as<std::string>(textBoxMaker->Text);
	medicines[*last].category = msclr::interop::marshal_as<std::string>(comboBoxCategory->Text);
	medicines[*last].form = msclr::interop::marshal_as<std::string>(comboBoxForm->Text);
	if (medicines[*last].name.length() == 0) medicines[*last].name = "��������";
	if (medicines[*last].maker.length() == 0) medicines[*last].maker = "�������������";
	if (medicines[*last].category.length() == 0) medicines[*last].category = "���������";
	if (medicines[*last].form.length() == 0) medicines[*last].form = "�����";
	this->dataGridView1->Rows->Add(1);
	dataGridView1->Rows[*last]->Cells[0]->Value = medicines[*last].id.ToString();
	dataGridView1->Rows[*last]->Cells[1]->Value = msclr::interop::marshal_as<String^>(medicines[*last].name);
	dataGridView1->Rows[*last]->Cells[2]->Value = msclr::interop::marshal_as<String^>(medicines[*last].maker);
	dataGridView1->Rows[*last]->Cells[3]->Value = msclr::interop::marshal_as<String^>(medicines[*last].category);
	dataGridView1->Rows[*last]->Cells[4]->Value = msclr::interop::marshal_as<String^>(medicines[*last].form);
	dataGridView1->Rows[*last]->Cells[5]->Value = medicines[*last].price.ToString();
	dataGridView1->Rows[*last]->Cells[6]->Value = medicines[*last].quantity.ToString();
	*last += 1;
	Close();
}
};
}
