#pragma once
#include "Header.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm9.h"
#include <msclr\marshal_cppstd.h>
#include <fstream>

namespace Prac2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public: System::Windows::Forms::DataGridView^ dataGridView1;







	public:
		int* last;
		int* n;
	private: System::Windows::Forms::Button^ buttonSort;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;





















	public:

	public:
		Medicine* medicines;
		MyForm1(Medicine *medicines, int *last, int* n)
		{
			this->medicines = medicines;
			this->last = last;
			this->n = n;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ buttonUpdate;
	protected:

	public: System::Windows::Forms::Button^ buttonDelete;
	protected:

	public: System::Windows::Forms::Button^ buttonEdit;

	public: System::Windows::Forms::Button^ buttonAdd;
	public: System::Windows::Forms::Button^ buttonGraph;


	public: System::Windows::Forms::Button^ buttonSaveTXT;

	public: System::Windows::Forms::Button^ buttonReadTXT;

	public: System::Windows::Forms::Button^ buttonExit;
	public: System::Windows::Forms::Button^ buttonSearch;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->buttonUpdate = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonEdit = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonGraph = (gcnew System::Windows::Forms::Button());
			this->buttonSaveTXT = (gcnew System::Windows::Forms::Button());
			this->buttonReadTXT = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonSort = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonUpdate
			// 
			this->buttonUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->buttonUpdate->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonUpdate->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonUpdate->Location = System::Drawing::Point(976, 438);
			this->buttonUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonUpdate->Name = L"buttonUpdate";
			this->buttonUpdate->Size = System::Drawing::Size(222, 57);
			this->buttonUpdate->TabIndex = 4;
			this->buttonUpdate->Text = L"Обновить таблицу";
			this->buttonUpdate->UseVisualStyleBackColor = false;
			this->buttonUpdate->Click += gcnew System::EventHandler(this, &MyForm1::buttonUpdate_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDelete->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonDelete->Location = System::Drawing::Point(976, 135);
			this->buttonDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(222, 59);
			this->buttonDelete->TabIndex = 5;
			this->buttonDelete->Text = L"Удалить элемент";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm1::buttonDelete_Click);
			// 
			// buttonEdit
			// 
			this->buttonEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->buttonEdit->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEdit->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonEdit->Location = System::Drawing::Point(976, 73);
			this->buttonEdit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonEdit->Name = L"buttonEdit";
			this->buttonEdit->Size = System::Drawing::Size(222, 58);
			this->buttonEdit->TabIndex = 6;
			this->buttonEdit->Text = L"Изменить элемент";
			this->buttonEdit->UseVisualStyleBackColor = false;
			this->buttonEdit->Click += gcnew System::EventHandler(this, &MyForm1::buttonEdit_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonAdd->Location = System::Drawing::Point(976, 11);
			this->buttonAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(222, 58);
			this->buttonAdd->TabIndex = 7;
			this->buttonAdd->Text = L"Создать элемент";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm1::buttonAdd_Click);
			// 
			// buttonGraph
			// 
			this->buttonGraph->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->buttonGraph->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGraph->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonGraph->Location = System::Drawing::Point(976, 376);
			this->buttonGraph->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonGraph->Name = L"buttonGraph";
			this->buttonGraph->Size = System::Drawing::Size(222, 58);
			this->buttonGraph->TabIndex = 8;
			this->buttonGraph->Text = L"График";
			this->buttonGraph->UseVisualStyleBackColor = false;
			this->buttonGraph->Click += gcnew System::EventHandler(this, &MyForm1::buttonGraph_Click);
			// 
			// buttonSaveTXT
			// 
			this->buttonSaveTXT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->buttonSaveTXT->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSaveTXT->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonSaveTXT->Location = System::Drawing::Point(976, 261);
			this->buttonSaveTXT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonSaveTXT->Name = L"buttonSaveTXT";
			this->buttonSaveTXT->Size = System::Drawing::Size(222, 59);
			this->buttonSaveTXT->TabIndex = 9;
			this->buttonSaveTXT->Text = L"Сохранить в файл";
			this->buttonSaveTXT->UseVisualStyleBackColor = false;
			this->buttonSaveTXT->Click += gcnew System::EventHandler(this, &MyForm1::buttonSaveTXT_Click);
			// 
			// buttonReadTXT
			// 
			this->buttonReadTXT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->buttonReadTXT->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonReadTXT->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonReadTXT->Location = System::Drawing::Point(976, 198);
			this->buttonReadTXT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonReadTXT->Name = L"buttonReadTXT";
			this->buttonReadTXT->Size = System::Drawing::Size(222, 59);
			this->buttonReadTXT->TabIndex = 10;
			this->buttonReadTXT->Text = L"Читать из файла";
			this->buttonReadTXT->UseVisualStyleBackColor = false;
			this->buttonReadTXT->Click += gcnew System::EventHandler(this, &MyForm1::buttonReadTXT_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExit->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonExit->Location = System::Drawing::Point(976, 591);
			this->buttonExit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(222, 51);
			this->buttonExit->TabIndex = 11;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm1::buttonExit_Click);
			// 
			// buttonSearch
			// 
			this->buttonSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearch->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonSearch->Location = System::Drawing::Point(976, 324);
			this->buttonSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(222, 48);
			this->buttonSearch->TabIndex = 12;
			this->buttonSearch->Text = L"Поиск";
			this->buttonSearch->UseVisualStyleBackColor = false;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MyForm1::buttonSearch_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column7,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->GridColor = System::Drawing::Color::DarkSlateBlue;
			this->dataGridView1->Location = System::Drawing::Point(12, 8);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(954, 642);
			this->dataGridView1->TabIndex = 13;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column7->HeaderText = L"id";
			this->Column7->MinimumWidth = 2;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column7->Width = 47;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Название";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Производитель";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column3->HeaderText = L"Категория";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->HeaderText = L"Форма выпуска";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"Цена";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 69;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column6->HeaderText = L"Количество";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 114;
			// 
			// buttonSort
			// 
			this->buttonSort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->buttonSort->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSort->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonSort->Location = System::Drawing::Point(976, 500);
			this->buttonSort->Name = L"buttonSort";
			this->buttonSort->Size = System::Drawing::Size(222, 57);
			this->buttonSort->TabIndex = 14;
			this->buttonSort->Text = L"Сортировка";
			this->buttonSort->UseVisualStyleBackColor = false;
			this->buttonSort->Click += gcnew System::EventHandler(this, &MyForm1::buttonSort_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(1219, 662);
			this->Controls->Add(this->buttonSort);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonReadTXT);
			this->Controls->Add(this->buttonSaveTXT);
			this->Controls->Add(this->buttonGraph);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->buttonEdit);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonUpdate);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Меню";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	//добавление элемента
	MyForm2^ f3 = gcnew MyForm2(medicines, last, dataGridView1);
	f3->Show();
}
private: System::Void buttonUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	//обновление таблицы
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
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void buttonEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	//изменение элемента
	if (*last > 0) {
		MyForm5^ f6 = gcnew MyForm5(medicines, last, n, dataGridView1);
		f6->Show();
	}
}
private: System::Void buttonSaveTXT_Click(System::Object^ sender, System::EventArgs^ e) {
	if (*last > 0) {
		save_medicines_to_txt(medicines, *last);
	}
}
private: System::Void buttonReadTXT_Click(System::Object^ sender, System::EventArgs^ e) {
	read_medicines_from_txt(medicines, *last);
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
}
private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	//удаление элемента
	if (*last > 0) {
		MyForm4^ f5 = gcnew MyForm4(medicines, last, n, dataGridView1);
		f5->Show();
	}
}
private: System::Void buttonGraph_Click(System::Object^ sender, System::EventArgs^ e) {
	//график
	if (*last > 0) {
		MyForm3^ f4 = gcnew MyForm3(medicines, last, dataGridView1);
		f4->Show();
	}
}
private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	//поиск
	if (*last > 0) {
		MyForm7^ f8 = gcnew MyForm7(medicines, last, dataGridView1);
		f8->Show();
	}
}
private: System::Void buttonSort_Click(System::Object^ sender, System::EventArgs^ e) {
	if (*last > 0) {
		MyForm9^ f10 = gcnew MyForm9(medicines, last, dataGridView1);
		f10->Show();
	}
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
