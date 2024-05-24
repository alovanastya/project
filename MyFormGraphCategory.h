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
	/// Сводка для MyFormGraphCategory
	/// </summary>
	public ref class MyFormGraphCategory : public System::Windows::Forms::Form
	{
	public:
		int* last;
		Medicine* medicines; 
		System::Windows::Forms::DataGridView^ dataGridView1;
		MyFormGraphCategory(Medicine* medicines, int* last, System::Windows::Forms::DataGridView^ dataGridView1)
		{
			this->medicines = medicines;
			this->last = last;
			this->dataGridView1 = dataGridView1;
			InitializeComponent();
			int other = 0, painkillers = 0, antibiotics = 0, antiviral = 0, antidepressants = 0, sleeping = 0; //таблетки, сироп, порошок, спрей, капли
			for (int i = 0; i < *last; ++i) {
				if (medicines[i].category == "Обезболивающее") {
					painkillers += 1;
				}
				else {
					if (medicines[i].category == "Антибиотик") {
						antibiotics += 1;
					}
					else {
						if (medicines[i].category == "Противовирусное") {
							antiviral += 1;
						}
						else {
							if (medicines[i].category == "Антидепрессант") {
								antidepressants += 1;
							}
							else {
								if (medicines[i].category == "Снотворное") {
									sleeping += 1;
								}
								else {
									other += 1;
								}
							}
						}
					}
				}
			}
			if (painkillers > 0) chartCategory->Series["s1"]->Points->AddXY("Обезболивающие", painkillers);
			if (antibiotics > 0) chartCategory->Series["s1"]->Points->AddXY("Антибиотики", antibiotics);
			if (antiviral > 0) chartCategory->Series["s1"]->Points->AddXY("Противовирусные", antiviral);
			if (antidepressants > 0) chartCategory->Series["s1"]->Points->AddXY("Антидепрессанты", antidepressants);
			if (sleeping > 0) chartCategory->Series["s1"]->Points->AddXY("Снотворное", sleeping);
			if (other > 0) chartCategory->Series["s1"]->Points->AddXY("Другое", other);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyFormGraphCategory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonOk;
	protected:

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartCategory;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormGraphCategory::typeid));
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->chartCategory = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCategory))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonOk
			// 
			this->buttonOk->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonOk->Font = (gcnew System::Drawing::Font(L"Zametka_Parletter", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOk->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonOk->Location = System::Drawing::Point(692, 351);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(83, 54);
			this->buttonOk->TabIndex = 0;
			this->buttonOk->Text = L"Готово";
			this->buttonOk->UseVisualStyleBackColor = false;
			this->buttonOk->Click += gcnew System::EventHandler(this, &MyFormGraphCategory::buttonOk_Click);
			// 
			// chartCategory
			// 
			this->chartCategory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			chartArea1->Name = L"ChartArea1";
			this->chartCategory->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			legend1->Name = L"Legend1";
			this->chartCategory->Legends->Add(legend1);
			this->chartCategory->Location = System::Drawing::Point(35, 27);
			this->chartCategory->Name = L"chartCategory";
			this->chartCategory->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			series1->Legend = L"Legend1";
			series1->Name = L"s1";
			this->chartCategory->Series->Add(series1);
			this->chartCategory->Size = System::Drawing::Size(640, 378);
			this->chartCategory->TabIndex = 1;
			this->chartCategory->Text = L"chart1";
			// 
			// MyFormGraphCategory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(787, 435);
			this->Controls->Add(this->chartCategory);
			this->Controls->Add(this->buttonOk);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormGraphCategory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"График категорий";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCategory))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}
