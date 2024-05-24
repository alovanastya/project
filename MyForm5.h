#pragma once
#include "Header.h"
#include "MyForm6.h"
//#include "MyForm1.h"


namespace Prac2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		int* last;
		int* n;
		Medicine* medicines;
		System::Windows::Forms::DataGridView^ dataGridView1;
		MyForm5(Medicine* medicines, int* last, int* n, System::Windows::Forms::DataGridView^ dataGridView1)//, MyForm1 f)
		{
			this->medicines = medicines;
			this->last = last;
			this->dataGridView1 = dataGridView1;
			this->n = n;
			//this->f = f;			
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonOk;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownId;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownId = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownId))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonOk
			// 
			this->buttonOk->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonOk->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOk->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonOk->Location = System::Drawing::Point(271, 149);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(132, 55);
			this->buttonOk->TabIndex = 5;
			this->buttonOk->Text = L"Готово";
			this->buttonOk->UseVisualStyleBackColor = false;
			this->buttonOk->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(418, 60);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Введите id элемента, \r\nкоторый хотите изменить\r\n";
			// 
			// numericUpDownId
			// 
			this->numericUpDownId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->numericUpDownId->Location = System::Drawing::Point(76, 150);
			this->numericUpDownId->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownId->Name = L"numericUpDownId";
			this->numericUpDownId->Size = System::Drawing::Size(110, 49);
			this->numericUpDownId->TabIndex = 3;
			this->numericUpDownId->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(450, 253);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDownId);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Выбор элемента для изменения";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownId))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		*n = (Convert::ToInt32(numericUpDownId->Value));
		bool flag = true;
		for (int i = 0; i < *last; ++i) {
			if (medicines[i].id == *n) {
				flag = false;
				break;
			}
		}
		if (flag) {
			MessageBox::Show("Элемента с таким индексом нет в списке!");
		}
		else {
			MyForm6^ f7 = gcnew MyForm6(medicines, n, last, dataGridView1);
			f7->Show();
			Close();
		}
	}
	};
}
