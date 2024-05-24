#pragma once
#include "Header.h"
#include "MyFormGraphForm.h"
#include "MyFormGraphCategory.h"
#include "MyFormGraphMaker.h"

namespace Prac2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyFormGraph
	/// </summary>
	public ref class MyFormGraph : public System::Windows::Forms::Form
	{
	public:
		Medicine* medicines;
	private: System::Windows::Forms::Button^ buttonGraphMaker;
	private: System::Windows::Forms::Button^ buttonGraphCategory;
	private: System::Windows::Forms::Button^ buttonGraphForm;
	public:

	public:

	public:



	public:
		System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		int* last;
		MyFormGraph(Medicine* medicines, int* last, System::Windows::Forms::DataGridView^ dataGridView1)
		{
			InitializeComponent();
			this->medicines = medicines;
			this->last = last;
			this->dataGridView1 = dataGridView1;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyFormGraph()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormGraph::typeid));
			this->buttonGraphMaker = (gcnew System::Windows::Forms::Button());
			this->buttonGraphCategory = (gcnew System::Windows::Forms::Button());
			this->buttonGraphForm = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonGraphMaker
			// 
			this->buttonGraphMaker->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonGraphMaker->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGraphMaker->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonGraphMaker->Location = System::Drawing::Point(21, 32);
			this->buttonGraphMaker->Name = L"buttonGraphMaker";
			this->buttonGraphMaker->Size = System::Drawing::Size(203, 91);
			this->buttonGraphMaker->TabIndex = 0;
			this->buttonGraphMaker->Text = L"Производитель";
			this->buttonGraphMaker->UseVisualStyleBackColor = false;
			this->buttonGraphMaker->Click += gcnew System::EventHandler(this, &MyFormGraph::buttonGraphMaker_Click);
			// 
			// buttonGraphCategory
			// 
			this->buttonGraphCategory->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonGraphCategory->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGraphCategory->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonGraphCategory->Location = System::Drawing::Point(257, 32);
			this->buttonGraphCategory->Name = L"buttonGraphCategory";
			this->buttonGraphCategory->Size = System::Drawing::Size(203, 91);
			this->buttonGraphCategory->TabIndex = 1;
			this->buttonGraphCategory->Text = L"Категория";
			this->buttonGraphCategory->UseVisualStyleBackColor = false;
			this->buttonGraphCategory->Click += gcnew System::EventHandler(this, &MyFormGraph::buttonGraphCategory_Click);
			// 
			// buttonGraphForm
			// 
			this->buttonGraphForm->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonGraphForm->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGraphForm->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonGraphForm->Location = System::Drawing::Point(21, 138);
			this->buttonGraphForm->Name = L"buttonGraphForm";
			this->buttonGraphForm->Size = System::Drawing::Size(203, 91);
			this->buttonGraphForm->TabIndex = 2;
			this->buttonGraphForm->Text = L"Форма\r\nвыпуска";
			this->buttonGraphForm->UseVisualStyleBackColor = false;
			this->buttonGraphForm->Click += gcnew System::EventHandler(this, &MyFormGraph::buttonGraphForm_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(247, 129);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(246, 143);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// MyFormGraph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(490, 265);
			this->Controls->Add(this->buttonGraphForm);
			this->Controls->Add(this->buttonGraphCategory);
			this->Controls->Add(this->buttonGraphMaker);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormGraph";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"График";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonGraphMaker_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormGraphMaker^ f12 = gcnew MyFormGraphMaker(medicines, last, dataGridView1);
		f12->Show();
		Close();
	}
	private: System::Void buttonGraphCategory_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormGraphCategory^ f11 = gcnew MyFormGraphCategory(medicines, last, dataGridView1);
		f11->Show();
		Close();
	}
	private: System::Void buttonGraphForm_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormGraphForm^ f9 = gcnew MyFormGraphForm(medicines, last, dataGridView1);
		f9->Show();
		Close();
	}
};
}
