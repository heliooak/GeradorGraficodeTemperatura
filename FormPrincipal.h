#pragma once

namespace Questao02 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormPrincipal
	/// </summary>
	public ref class FormPrincipal : public System::Windows::Forms::Form
	{
	public:
		FormPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ tbTemperatura;
	private: System::Windows::Forms::Button^ btInserir;
	private: System::Windows::Forms::DataGridView^ dgHistoricoTemperaturas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Instante;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Valor;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ graficoTemperaturas;
	private: System::Windows::Forms::TextBox^ tbMinimo;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbMaximo;
	private: System::Windows::Forms::Label^ label3;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbTemperatura = (gcnew System::Windows::Forms::TextBox());
			this->btInserir = (gcnew System::Windows::Forms::Button());
			this->dgHistoricoTemperaturas = (gcnew System::Windows::Forms::DataGridView());
			this->Instante = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Valor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->graficoTemperaturas = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tbMinimo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbMaximo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgHistoricoTemperaturas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graficoTemperaturas))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Temperatura";
			// 
			// tbTemperatura
			// 
			this->tbTemperatura->Location = System::Drawing::Point(12, 29);
			this->tbTemperatura->Name = L"tbTemperatura";
			this->tbTemperatura->Size = System::Drawing::Size(100, 20);
			this->tbTemperatura->TabIndex = 1;
			// 
			// btInserir
			// 
			this->btInserir->Location = System::Drawing::Point(118, 27);
			this->btInserir->Name = L"btInserir";
			this->btInserir->Size = System::Drawing::Size(75, 23);
			this->btInserir->TabIndex = 2;
			this->btInserir->Text = L"Registrar";
			this->btInserir->UseVisualStyleBackColor = true;
			this->btInserir->Click += gcnew System::EventHandler(this, &FormPrincipal::btInserir_Click);
			// 
			// dgHistoricoTemperaturas
			// 
			this->dgHistoricoTemperaturas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgHistoricoTemperaturas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Instante,
					this->Valor
			});
			this->dgHistoricoTemperaturas->Location = System::Drawing::Point(12, 55);
			this->dgHistoricoTemperaturas->Name = L"dgHistoricoTemperaturas";
			this->dgHistoricoTemperaturas->Size = System::Drawing::Size(305, 282);
			this->dgHistoricoTemperaturas->TabIndex = 3;
			// 
			// Instante
			// 
			this->Instante->HeaderText = L"Instante";
			this->Instante->Name = L"Instante";
			// 
			// Valor
			// 
			this->Valor->HeaderText = L"Valor";
			this->Valor->Name = L"Valor";
			this->Valor->Width = 150;
			// 
			// graficoTemperaturas
			// 
			chartArea2->Name = L"ChartArea1";
			this->graficoTemperaturas->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->graficoTemperaturas->Legends->Add(legend2);
			this->graficoTemperaturas->Location = System::Drawing::Point(323, 55);
			this->graficoTemperaturas->Name = L"graficoTemperaturas";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Temperaturas";
			this->graficoTemperaturas->Series->Add(series2);
			this->graficoTemperaturas->Size = System::Drawing::Size(404, 282);
			this->graficoTemperaturas->TabIndex = 4;
			this->graficoTemperaturas->Text = L"chart1";
			// 
			// tbMinimo
			// 
			this->tbMinimo->Location = System::Drawing::Point(12, 382);
			this->tbMinimo->Name = L"tbMinimo";
			this->tbMinimo->Size = System::Drawing::Size(100, 20);
			this->tbMinimo->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 361);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Registros abaixo do limiar inferior(20)";
			// 
			// tbMaximo
			// 
			this->tbMaximo->Location = System::Drawing::Point(227, 382);
			this->tbMaximo->Name = L"tbMaximo";
			this->tbMaximo->Size = System::Drawing::Size(100, 20);
			this->tbMaximo->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(224, 361);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(181, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Registros acima do limiar superior(50)";
			// 
			// FormPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 410);
			this->Controls->Add(this->tbMaximo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbMinimo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->graficoTemperaturas);
			this->Controls->Add(this->dgHistoricoTemperaturas);
			this->Controls->Add(this->btInserir);
			this->Controls->Add(this->tbTemperatura);
			this->Controls->Add(this->label1);
			this->Name = L"FormPrincipal";
			this->Text = L"Monitor de temperaturas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgHistoricoTemperaturas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graficoTemperaturas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double valorMinimo = 0;
		double valorMaximo = 0;


	private: System::Void btInserir_Click(System::Object^ sender, System::EventArgs^ e) {
		
		double temperatura;

		try
		{
			temperatura = Convert::ToDouble(tbTemperatura->Text);
		}
		catch (...)
		{
			MessageBox::Show("Valor incorreto. Digite novamente.", "Erro");
			return;
		}

		dgHistoricoTemperaturas->Rows->Add(DateTime::Now.ToString(), tbTemperatura->Text);
		graficoTemperaturas->Series["Temperaturas"]->Points->AddXY(DateTime::Now.ToString(), temperatura);


		if (temperatura > 50)
		{
			valorMaximo++;
		}
		if (temperatura < 20)
		{
			valorMinimo++;
		}

		tbTemperatura->Text = "";

		tbMinimo->Text = Convert::ToString(valorMinimo);
		tbMaximo->Text = Convert::ToString(valorMaximo);

	}
};
}
