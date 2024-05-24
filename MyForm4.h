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
	/// —водка дл€ MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		int* last;
		int* n;
		Medicine* medicines;
		System::Windows::Forms::DataGridView^ dataGridView1;
		MyForm4(Medicine* medicines, int* last, int* n, System::Windows::Forms::DataGridView^ dataGridView1)
		{
			this->last = last;
			this->medicines = medicines;
			this->n = n;
			InitializeComponent();
			this->dataGridView1 = dataGridView1;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDownId;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonOk;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->numericUpDownId = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownId))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDownId
			// 
			this->numericUpDownId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->numericUpDownId->Location = System::Drawing::Point(62, 165);
			this->numericUpDownId->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownId->Name = L"numericUpDownId";
			this->numericUpDownId->Size = System::Drawing::Size(104, 49);
			this->numericUpDownId->TabIndex = 0;
			this->numericUpDownId->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(404, 60);
			this->label1->TabIndex = 1;
			this->label1->Text = L"¬ведите id элемента, \r\nкоторый хотите удалить\r\n";
			// 
			// buttonOk
			// 
			this->buttonOk->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonOk->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOk->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonOk->Location = System::Drawing::Point(257, 168);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(147, 55);
			this->buttonOk->TabIndex = 2;
			this->buttonOk->Text = L"√отово";
			this->buttonOk->UseVisualStyleBackColor = false;
			this->buttonOk->Click += gcnew System::EventHandler(this, &MyForm4::buttonOk_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(436, 271);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDownId);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"”далить элемент";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownId))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e) {
		*n = Convert::ToInt32(numericUpDownId->Value);
		bool flag = true;
		for (int i = 0; i < *last; ++i) {
			if (medicines[i].id == *n) {
				for (int j = i; j < *last - 1; ++j) {
					medicines[j] = medicines[j + 1];
				}
				flag = false;
				*last -= 1;
				break;
			}
		}
		if (flag) {
			MessageBox::Show("Ёлемента с таким индексом нет в списке!");
		}
		else {
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
	}
	};
}
