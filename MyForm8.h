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
	/// Сводка для MyForm8
	/// </summary>
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
	public:
		int* last;
		Medicine* medicines;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartForm;
	public:

	private: System::Windows::Forms::Button^ buttonOk;

	public:
		System::Windows::Forms::DataGridView^ dataGridView1;
		MyForm8(Medicine* medicines, int* last, System::Windows::Forms::DataGridView^ dataGridView1)
		{
			this->medicines = medicines;
			this->last = last;
			this->dataGridView1 = dataGridView1;
			InitializeComponent();
			int other = 0, tablets = 0, syrup = 0, powder = 0, spray = 0, drops = 0; //таблетки, сироп, порошок, спрей, капли
			for (int i = 0; i < *last; ++i) {
				if (medicines[i].form == "Таблетки") {
					tablets += 1;
				}
				else {
					if (medicines[i].form == "Сироп") {
						syrup += 1;
					}
					else {
						if (medicines[i].form == "Порошок") {
							powder += 1;
						}
						else {
							if (medicines[i].form == "Спрей") {
								spray += 1;
							}
							else {
								if (medicines[i].form == "Капли") {
									drops += 1;
								}
								else {
									other += 1;
								}
							}
						}
					}
				}
			}
			if (drops > 0) chartForm->Series["s1"]->Points->AddXY("Капли", drops);
			if (powder > 0) chartForm->Series["s1"]->Points->AddXY("Порошок", powder);
			if (syrup > 0) chartForm->Series["s1"]->Points->AddXY("Сироп", syrup);
			if (spray > 0) chartForm->Series["s1"]->Points->AddXY("Спрей", spray);
			if (tablets > 0) chartForm->Series["s1"]->Points->AddXY("Таблетки", tablets);
			if (other > 0) chartForm->Series["s1"]->Points->AddXY("Другое", other);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm8()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm8::typeid));
			this->chartForm = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartForm))->BeginInit();
			this->SuspendLayout();
			// 
			// chartForm
			// 
			this->chartForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->chartForm->BorderlineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			chartArea1->Name = L"ChartArea1";
			this->chartForm->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			legend1->Name = L"Legend1";
			this->chartForm->Legends->Add(legend1);
			this->chartForm->Location = System::Drawing::Point(54, 29);
			this->chartForm->Name = L"chartForm";
			this->chartForm->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series1->BackSecondaryColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->CustomProperties = L"CollectedColor=135\\, 140\\, 211";
			series1->EmptyPointStyle->BackSecondaryColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->EmptyPointStyle->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->EmptyPointStyle->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->EmptyPointStyle->LabelBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->EmptyPointStyle->LabelBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->EmptyPointStyle->MarkerBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->EmptyPointStyle->MarkerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->LabelBackColor = System::Drawing::Color::Transparent;
			series1->LabelBorderColor = System::Drawing::Color::Transparent;
			series1->Legend = L"Legend1";
			series1->MarkerBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->MarkerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->Name = L"s1";
			this->chartForm->Series->Add(series1);
			this->chartForm->Size = System::Drawing::Size(640, 378);
			this->chartForm->TabIndex = 0;
			this->chartForm->Text = L"chart1";
			// 
			// buttonOk
			// 
			this->buttonOk->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonOk->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOk->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonOk->Location = System::Drawing::Point(700, 355);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(83, 52);
			this->buttonOk->TabIndex = 1;
			this->buttonOk->Text = L"Готово";
			this->buttonOk->UseVisualStyleBackColor = false;
			this->buttonOk->Click += gcnew System::EventHandler(this, &MyForm8::buttonOk_Click_1);
			// 
			// MyForm8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(787, 435);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->chartForm);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm8";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"График формы выпуска";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartForm))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonOk_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}
