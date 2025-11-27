#pragma once

#define _USE_MATH_DEFINES

#include <algorithm>
#include <vector>
#include <functional>
#include <cmath>
#include <stdexcept>
#include <string>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i; // Итерация
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X; // X
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1; // vn
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_2; // Истинная траектория
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ absF_2_minus_F_1; // Ошибка







	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;






	private: System::Windows::Forms::ComboBox^ comboBox1;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;






	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;





	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->absF_2_minus_F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(606, 232);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(591, 383);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->i, this->X,
					this->F_1, this->F_2, this->absF_2_minus_F_1
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 232);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(591, 383);
			this->dataGridView1->TabIndex = 2;
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			this->i->ReadOnly = true;
			this->i->Width = 50;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 75;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"vi";
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			this->F_1->Width = 135;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"ui";
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			this->F_2->Width = 135;
			// 
			// absF_2_minus_F_1
			// 
			this->absF_2_minus_F_1->HeaderText = L"abs(ui-vi)";
			this->absF_2_minus_F_1->Name = L"absF_2_minus_F_1";
			this->absF_2_minus_F_1->ReadOnly = true;
			this->absF_2_minus_F_1->Width = 135;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(122, 48);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(98, 20);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"10000";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 8);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Задача";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 51);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Размерность сетки:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Тестовая", L"Основная" });
			this->comboBox1->Location = System::Drawing::Point(12, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(208, 21);
			this->comboBox1->TabIndex = 26;
			this->comboBox1->Text = L"Тестовая";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->TextUpdate += gcnew System::EventHandler(this, &MyForm::comboBox1_TextUpdate);
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(232, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 29;
			this->label5->Text = L"new Xmin";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(305, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 30;
			this->label7->Text = L"new Xmax";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(235, 24);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(64, 20);
			this->textBox5->TabIndex = 31;
			this->textBox5->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(305, 24);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(69, 20);
			this->textBox7->TabIndex = 32;
			this->textBox7->Text = L"5";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(235, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 33);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Масштабировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(232, 46);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 13);
			this->label12->TabIndex = 34;
			this->label12->Text = L"новый Ymin";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(302, 47);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(68, 13);
			this->label13->TabIndex = 35;
			this->label13->Text = L"новый Ymax";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(235, 63);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(64, 20);
			this->textBox10->TabIndex = 36;
			this->textBox10->Text = L"0";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(305, 63);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(69, 20);
			this->textBox11->TabIndex = 37;
			this->textBox11->Text = L"1,2";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Location = System::Drawing::Point(606, 8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(591, 218);
			this->groupBox1->TabIndex = 38;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Справка";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(6, 52);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 13);
			this->label26->TabIndex = 9;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(6, 39);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 13);
			this->label25->TabIndex = 8;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 178);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 13);
			this->label21->TabIndex = 7;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 165);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 13);
			this->label20->TabIndex = 6;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 117);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 104);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 13);
			this->label18->TabIndex = 4;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 91);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 13);
			this->label17->TabIndex = 3;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 78);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 2;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 65);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1209, 627);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"Lab2 Balance Method";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:

	void solveMatrix(std::size_t n, std::vector<double>& UnderDiag, std::vector<double>& Diag,
		std::vector<double>& UpperDiag, std::vector<double>& b, std::vector<double>& y) {
		if (n < 2) return;

		std::vector<double> alpha(n - 1, 0.0), beta(n, 0.0);


		alpha[0] = -UpperDiag[0] / Diag[0];
		beta[0] = b[0] / Diag[0];

		for (std::size_t i = 1; i < n - 1; ++i) {
			double denominator = -Diag[i] - UnderDiag[i] * alpha[i - 1];
			if (std::abs(denominator) < 1e-12) {
				throw std::runtime_error("Matrix is singular");
			}
			alpha[i] = UpperDiag[i] / denominator;
			beta[i] = (-b[i] + UnderDiag[i] * beta[i - 1]) / denominator;
		}

		y.resize(n);
		double denom = Diag[n - 1] + UnderDiag[n - 1] * alpha[n - 2];
		if (std::abs(denom) < 1e-12) {
			throw std::runtime_error("Matrix is singular");
		}
		y[n - 1] = (b[n - 1] - UnderDiag[n - 1] * beta[n - 2]) / denom;

		for (int i = static_cast<int>(n) - 2; i >= 0; --i) {
			y[i] = alpha[i] * y[i + 1] + beta[i];
		}
	}

	double k1t(double x) { return 1.0 + std::sin(M_PI / 6.0); }
	double k2t(double x) { return 2.0 + std::sin(M_PI / 6.0); }
	double q1t(double x) { return 1.0; }
	double q2t(double x) { return M_PI / 6.0; }
	double f1t(double x) { return 2.0 * (M_PI / 6.0); }
	double f2t(double x) { return 3.0 * (M_PI / 6.0); }


	double k1(double x) { return 1.0 + std::sin(x); }
	double k2(double x) { return 2.0 + std::sin(x); }
	double q1(double x) { return 1.0; }
	double q2(double x) { return x; }
	double f1(double x) { return 2.0 * x; }
	double f2(double x) { return 3.0 * x; }

	double u1(double x) {
		return -0.6892617589058818 * std::exp(std::sqrt(2.0 / 3.0) * x) + 0.6420642077092841 * std::exp(-std::sqrt(2.0 / 3.0) * x) + M_PI / 3.0;
	}

	double u2(double x) {
		return -1.6410086518535185 * std::exp(std::sqrt(M_PI / 15.0) * x) - 0.6426233505947469 * std::exp(-std::sqrt(M_PI / 15.0) * x) + 3.0;
	}

	double ait(double x, double h, double ksi) {
		double x_left = x - h;
		double x_right = x;

		if (ksi >= x_right) {
			return k1t(x);
		}
		else if (ksi <= x_left) {
			return k2t(x);
		}
		else {
			double left_part = (ksi - x_left) / k1t(0.0);
			double right_part = (x_right - ksi) / k2t(0.0);
			return h / (left_part + right_part);
		}
	}

	double ai(double x, double h, double ksi) {
		double x_left = x - h;
		double x_right = x;

		if (ksi >= x_right) {
			return k1(x - h / 2.0);
		}
		else if (ksi <= x_left) {
			return k2(x - h / 2.0);
		}
		else {
			double mid1 = (x_left + ksi) / 2.0;
			double mid2 = (ksi + x_right) / 2.0;
			double integral = (ksi - x_left) / k1(mid1) + (x_right - ksi) / k2(mid2);
			return h / integral;
		}
	}

	double dit(double x, double h, double ksi) {
		double x_left = x - h / 2.0;
		double x_right = x + h / 2.0;

		if (ksi >= x_right) {
			return q1t(x);
		}
		else if (ksi <= x_left) {
			return q2t(x);
		}
		else {
			return (q1t(0.0) * (ksi - x_left) + q2t(0.0) * (x_right - ksi)) / h;
		}
	}

	double di(double x, double h, double ksi) {
		double x_left = x - h / 2.0;
		double x_right = x + h / 2.0;

		if (ksi >= x_right) {
			return q1(x);
		}
		else if (ksi <= x_left) {
			return q2(x);
		}
		else {
			double mid1 = (x_left + ksi) / 2.0;
			double mid2 = (ksi + x_right) / 2.0;
			return (q1(mid1) * (ksi - x_left) + q2(mid2) * (x_right - ksi)) / h;
		}
	}

	double phiit(double x, double h, double ksi) {
		double x_left = x - h / 2.0;
		double x_right = x + h / 2.0;

		if (ksi >= x_right) {
			return f1t(x);
		}
		else if (ksi <= x_left) {
			return f2t(x);
		}
		else {
			return (f1t(0.0) * (ksi - x_left) + f2t(0.0) * (x_right - ksi)) / h;
		}
	}

	double phii(double x, double h, double ksi) {
		double x_left = x - h / 2.0;
		double x_right = x + h / 2.0;

		if (ksi >= x_right) {
			return f1(x);
		}
		else if (ksi <= x_left) {
			return f2(x);
		}
		else {
			double mid1 = (x_left + ksi) / 2.0;
			double mid2 = (ksi + x_right) / 2.0;
			return (f1(mid1) * (ksi - x_left) + f2(mid2) * (x_right - ksi)) / h;
		}
	}

	void balanceMethod(std::size_t n, bool flag, std::vector<double>& y) {
		if (n < 2) throw std::runtime_error("n must be at least 2");

		std::size_t num_nodes = n + 1;

		double ksi = M_PI / 6.0;
		double mu1 = 1.0;
		double mu2 = 0.0;
		double h = 1.0 / n;

		// Вектора создаем размера num_nodes
		std::vector<double> upper(num_nodes, 0.0), diag(num_nodes, 0.0), under(num_nodes, 0.0), bvec(num_nodes, 0.0);

		// Граничные условия
		diag[0] = 1.0; bvec[0] = mu1;
		diag[num_nodes - 1] = 1.0; bvec[num_nodes - 1] = mu2;

		if (!flag) {
			for (std::size_t i = 1; i < num_nodes - 1; ++i) {
				double xi = i * h;
				double k_left = ait(xi, h, ksi);
				double k_right = ait(xi + h, h, ksi);

				under[i] = k_left / (h * h);
				upper[i] = k_right / (h * h);
				diag[i] = -(k_left + k_right) / (h * h) - dit(xi, h, ksi);
				bvec[i] = -phiit(xi, h, ksi);
			}
		}
		else {
			for (std::size_t i = 1; i < num_nodes - 1; ++i) {
				double xi = i * h;
				double k_left = ai(xi, h, ksi);
				double k_right = ai(xi + h, h, ksi);

				under[i] = k_left / (h * h);
				upper[i] = k_right / (h * h);
				diag[i] = -(k_left + k_right) / (h * h) - di(xi, h, ksi);
				bvec[i] = -phii(xi, h, ksi);
			}
		}

		solveMatrix(num_nodes, under, diag, upper, bvec, y);
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		panel->GraphObjList->Clear();

		// Списки для графиков
		PointPairList^ list_numeric = gcnew PointPairList(); // Численное решение
		PointPairList^ list_analytic = gcnew PointPairList(); // Аналитическое
		PointPairList^ list_diff = gcnew PointPairList(); // График ошибки

		dataGridView1->Rows->Clear();

		// Чтение и валидация n (Число интервалов)
		if (String::IsNullOrEmpty(textBox6->Text)) {
			MessageBox::Show("Введите число разбиений (n).");
			return;
		}

		int n_intervals;
		if (!Int32::TryParse(textBox6->Text, n_intervals)) {
			MessageBox::Show("Введите целое число.");
			return;
		}

		if (n_intervals < 2) {
			MessageBox::Show("n должно быть >= 2 для метода прогонки.");
			return;
		}

		// Подготовка параметров
		std::vector<double> res;

		// Параметры для расчетов и вывода
		double h = 1.0 / n_intervals;
		double ksi = M_PI / 6.0;
		std::size_t N_nodes = static_cast<std::size_t>(n_intervals) + 1;

		double max_error = 0.0;
		int max_error_index = -1;

		// Логика выбора задачи
		String^ mode = comboBox1->Text;

		if (mode == "Тестовая") {
			try {
				balanceMethod(n_intervals, 0, res);
			}
			catch (const std::exception& ex) {
				MessageBox::Show("Ошибка в расчетах: " + gcnew String(ex.what()));
				return;
			}

			// Обработка результатов
			for (std::size_t i = 0; i < N_nodes; ++i) {
				double x = i * h;
				double v_numeric = res[i];


				double u_exact = (x <= ksi + 1e-15) ? u1(x) : u2(x);

				double err = Math::Abs(u_exact - v_numeric);

				// Заполняем таблицу
				int rowId = dataGridView1->Rows->Add();
				dataGridView1->Rows[rowId]->Cells[0]->Value = (int)i;
				dataGridView1->Rows[rowId]->Cells[1]->Value = Math::Round(x, 15);
				dataGridView1->Rows[rowId]->Cells[2]->Value = Math::Round(u_exact, 15); // u(x)
				dataGridView1->Rows[rowId]->Cells[3]->Value = Math::Round(v_numeric, 15); // v(x)
				dataGridView1->Rows[rowId]->Cells[4]->Value = err; // полная точность для анализа

				// Добавляем точки на графики
				list_numeric->Add(x, v_numeric);
				list_analytic->Add(x, u_exact);
				list_diff->Add(x, u_exact - v_numeric); // График разности (u - v)

				// Поиск максимума ошибки
				if (err > max_error) {
					max_error = err;
					max_error_index = (int)i;
				}
			}

			// Настройка графиков
			panel->Title->Text = "Тестовая задача";
			LineItem^ curve1 = panel->AddCurve("Численное v(x)", list_numeric, Color::Red, SymbolType::Plus);
			LineItem^ curve2 = panel->AddCurve("Точное u(x)", list_analytic, Color::Blue, SymbolType::None);


			label19->Text = String::Format("Max |u - v| = {0:E4} в узле {1}", max_error, max_error_index);

		}
		else if (mode == "Основная") {

			std::vector<double> res_fine; // Решение на сетке 2n
			int n_fine = n_intervals * 2;

			try {
				// Решаем на сетке n
				balanceMethod(n_intervals, 1, res);
				// Решаем на сетке 2n
				balanceMethod(n_fine, 1, res_fine);
			}
			catch (const std::exception& ex) {
				MessageBox::Show("Ошибка в расчетах: " + gcnew String(ex.what()));
				return;
			}

			// Проход по ГРУБОЙ сетке (узлы 0, 1, 2... N)
			// Соответствующие узлы мелкой сетки: 0, 2, 4... 2N
			for (std::size_t i = 0; i < N_nodes; ++i) {
				double x = i * h;
				double v_coarse = res[i];

				// Берем значение из мелкой сетки с шагом 2*i
				// Так как мелкая сетка имеет шаг h/2, то 2 шага мелкой = 1 шаг грубой.
				double v_fine = res_fine[2 * i];

				double diff = Math::Abs(v_coarse - v_fine);

				// Заполняем таблицу
				int rowId = dataGridView1->Rows->Add();
				dataGridView1->Rows[rowId]->Cells[0]->Value = (int)i;
				dataGridView1->Rows[rowId]->Cells[1]->Value = Math::Round(x, 15);
				dataGridView1->Rows[rowId]->Cells[2]->Value = Math::Round(v_coarse, 15); // v(x)
				dataGridView1->Rows[rowId]->Cells[3]->Value = Math::Round(v_fine, 15);   // v2(x)
				dataGridView1->Rows[rowId]->Cells[4]->Value = diff;


				list_numeric->Add(x, v_coarse);         // Решение n
				list_analytic->Add(x, v_fine);          // Решение 2n
				list_diff->Add(x, v_fine - v_coarse);   // Разность

				if (diff > max_error) {
					max_error = diff;
					max_error_index = (int)i;
				}
			}

			panel->Title->Text = "Основная задача";
			panel->AddCurve("Сетка n", list_numeric, Color::Red, SymbolType::Plus);
			panel->AddCurve("Сетка 2n", list_analytic, Color::Blue, SymbolType::None);

			// График разности
			LineItem^ curveDiff = panel->AddCurve("Разность (v2 - v)", list_diff, Color::Green, SymbolType::None);
			curveDiff->Line->Style = System::Drawing::Drawing2D::DashStyle::Dash;

			label19->Text = String::Format("Max |v_n - v_2n| = {0:E4} в узле {1}", max_error, max_error_index);

		}
		else {
			MessageBox::Show("Выберите тип задачи (Тестовая/Основная).");
			return;
		}

		label14->Text = "Число разбиений n = " + n_intervals;
		label25->Text = String::Format("Шаг h = {0:F6}", h);

		panel->XAxis->Scale->Min = 0.0;
		panel->XAxis->Scale->Max = 1.0;
		panel->AxisChange();
		zedGraphControl1->Invalidate();
	}


	private:
		System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
			// Инициализация графика при загрузке (если требуется)
		}

	private:
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			// Обработчик кнопки установки границ графика
			try {
				GraphPane^ panel = zedGraphControl1->GraphPane;

				// Безопасное преобразование с проверкой на пустые строки
				if (String::IsNullOrEmpty(textBox5->Text) ||
					String::IsNullOrEmpty(textBox7->Text) ||
					String::IsNullOrEmpty(textBox10->Text) ||
					String::IsNullOrEmpty(textBox11->Text)) {
					MessageBox::Show("Пожалуйста, заполните все поля границ графика.");
					return;
				}

				double xmin = Convert::ToDouble(textBox5->Text);
				double xmax = Convert::ToDouble(textBox7->Text);
				double ymin = Convert::ToDouble(textBox10->Text);
				double ymax = Convert::ToDouble(textBox11->Text);

				// Проверка корректности введенных данных
				if (xmin >= xmax) {
					MessageBox::Show("Минимальное значение X должно быть меньше максимального!");
					return;
				}
				if (ymin >= ymax) {
					MessageBox::Show("Минимальное значение Y должно быть меньше максимального!");
					return;
				}

				// Проверка на разумные пределы (опционально)
				if (xmax - xmin > 1000000 || ymax - ymin > 1000000) {
					if (MessageBox::Show("Задан очень большой диапазон значений. Продолжить?",
						"Предупреждение",
						MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::No) {
						return;
					}
				}

				// Установка новых границ
				panel->XAxis->Scale->Min = xmin;
				panel->XAxis->Scale->Max = xmax;
				panel->YAxis->Scale->Min = ymin;
				panel->YAxis->Scale->Max = ymax;

				// Обновление графика
				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();
			}
			catch (FormatException^) {
				MessageBox::Show("Ошибка: Введите корректные числовые значения для границ графика.\n" +
					"Используйте точку как разделитель дробной части.");
			}
			catch (OverflowException^) {
				MessageBox::Show("Ошибка: Введены слишком большие числа.");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Неожиданная ошибка при установке границ графика:\n" + ex->Message);
			}
		}

	private:
		System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			// Можно оставить пустым или добавить логику при изменении выбора
		}

	private:
		System::Void comboBox1_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
			// Можно оставить пустым или добавить логику при обновлении текста
		}

	private:
		System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			// Обработчик изменения типа задачи
			try {
				// Сброс всех информационных меток
				label14->Text = "";
				label25->Text = "";
				label26->Text = "";
				label15->Text = "";
				label16->Text = "";
				label17->Text = "";
				label18->Text = "";
				label19->Text = "";
				label20->Text = "";
				label21->Text = "";

				// Очистка графика
				GraphPane^ panel = zedGraphControl1->GraphPane;
				panel->CurveList->Clear();
				panel->Title->Text = ""; // Очистка заголовка

				// Сброс подписей осей к значениям по умолчанию
				panel->XAxis->Title->Text = "x";
				panel->YAxis->Title->Text = "y";

				// Установка автоматического масштабирования
				panel->XAxis->Scale->MinAuto = true;
				panel->XAxis->Scale->MaxAuto = true;
				panel->YAxis->Scale->MinAuto = true;
				panel->YAxis->Scale->MaxAuto = true;

				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();

				// Очистка таблицы результатов
				dataGridView1->Rows->Clear();

				// Принудительное обновление интерфейса
				this->Refresh();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при изменении типа задачи:\n" + ex->Message);
			}
		}
	};
}
