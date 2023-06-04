#pragma once

namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ComboBox^ ComboBox;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;




	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Location = System::Drawing::Point(480, 0);
			this->button_exit->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(20, 21);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MainForm::button_exit_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(414, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Выберите тип уравнения";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 616);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(34, 33);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// ComboBox
			// 
			this->ComboBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ComboBox->FormattingEnabled = true;
			this->ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"0=0", L"C=0", L"A*x^2+B*x+C=0", L"A*x^2+B*x=0",
					L"A*x^2+C=0", L"A*x^2=0", L"B*x+C=0", L"B*x=0"
			});
			this->ComboBox->Location = System::Drawing::Point(51, 151);
			this->ComboBox->Name = L"ComboBox";
			this->ComboBox->Size = System::Drawing::Size(407, 21);
			this->ComboBox->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(54, 286);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(394, 37);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Введите коэффиценты ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(56, 328);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"A:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(56, 366);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 29);
			this->label4->TabIndex = 8;
			this->label4->Text = L"B:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label5->Location = System::Drawing::Point(56, 400);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 29);
			this->label5->TabIndex = 9;
			this->label5->Text = L"C:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(61, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(386, 63);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Выполнить расчет";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Location = System::Drawing::Point(89, 337);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(359, 20);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->Location = System::Drawing::Point(89, 374);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(359, 20);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox3->Location = System::Drawing::Point(89, 409);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(359, 20);
			this->textBox3->TabIndex = 13;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(500, 650);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ComboBox);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_exit);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Решение уравнений";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int equationType = ComboBox->SelectedIndex;
		double a = 0; // Значение по умолчанию для коэффициента A
		double b = 0; // Значение по умолчанию для коэффициента B
		double c = 0; // Значение по умолчанию для коэффициента C

		// Проверяем, заполнен ли textBox1
		if (!String::IsNullOrEmpty(textBox1->Text)) {
			a = Double::Parse(textBox1->Text);
		}

		// Проверяем, заполнен ли textBox2
		if (!String::IsNullOrEmpty(textBox2->Text)) {
			b = Double::Parse(textBox2->Text);
		}

		// Проверяем, заполнен ли textBox3
		if (!String::IsNullOrEmpty(textBox3->Text)) {
			c = Double::Parse(textBox3->Text);
		}

		if (equationType == 0) {
			System::Windows::Forms::MessageBox::Show("Уравнение верно при любом X");
		}
		else if (equationType == 1) {
			System::Windows::Forms::MessageBox::Show("Уравнение не имеет корней");
		}
		else if (equationType == 2) {
			// Решение уравнения типа A*x^2 + B*x + C = 0
			if (a == 0) {
				System::Windows::Forms::MessageBox::Show("Коэффициент A не задан");
				return;
			}

			if (b == 0) {
				System::Windows::Forms::MessageBox::Show("Коэффициент B не задан");
				return;
			}

			if (c == 0) {
				System::Windows::Forms::MessageBox::Show("Коэффициент C не задан");
				return;
			}

			double discriminant = b * b - 4 * a * c;

			if (discriminant > 0) {
				double root1 = (-b + Math::Sqrt(discriminant)) / (2 * a);
				double root2 = (-b - Math::Sqrt(discriminant)) / (2 * a);
				System::Windows::Forms::MessageBox::Show("Уравнение имеет два корня: " + root1 + " и " + root2);
			}
			else if (discriminant == 0) {
				double root = -b / (2 * a);
				System::Windows::Forms::MessageBox::Show("Уравнение имеет один корень: " + root);
			}
			else {
				System::Windows::Forms::MessageBox::Show("Уравнение не имеет действительных корней");
			}
		}
		else if (equationType == 3) {
			// Решение уравнения типа A*x^2 + B*x = 0
			if (a == 0) {
				System::Windows::Forms::MessageBox::Show("Коэффициент A не задан");
				return;
			}

			if (b == 0) {
				System::Windows::Forms::MessageBox::Show("Коэффициент B не задан");
				return;
			}
			if (c != 0) {
				System::Windows::Forms::MessageBox::Show("Выбран неверный тип уравнения. Коэффициент C должен быть равен 0");
				return;
			}

			double root1 = 0;
			double root2 = (-b) / a;

			System::Windows::Forms::MessageBox::Show("Уравнение имеет два корня: " + root1 + " и " + root2);
		}
		else if (equationType == 4) {
			// Решение уравнения типа A*x^2 + C = 0
			if (a == 0) {
				System::Windows::Forms::MessageBox::Show("Коэффициент A не задан");
				return;
			}

			if (c == 0) {
				System::Windows::Forms::MessageBox::Show("Коэффициент C не задан");
				return;
			}

			if (b != 0) {
				System::Windows::Forms::MessageBox::Show("Выбран неверный тип уравнения. Коэффициент B должен быть равен 0");
				return;
			}

			double discriminant = b * b - 4 * a * c;

			if (discriminant > 0) {
				double root1 = (-b + Math::Sqrt(discriminant)) / (2 * a);
				double root2 = (-b - Math::Sqrt(discriminant)) / (2 * a);
				System::Windows::Forms::MessageBox::Show("Уравнение имеет два корня: " + root1 + " и " + root2);
			}
			else if (discriminant == 0) {
				double root = -b / (2 * a);
				System::Windows::Forms::MessageBox::Show("Уравнение имеет один корень: " + root);
			}
			else {
				System::Windows::Forms::MessageBox::Show("Уравнение не имеет действительных корней");
			}
		}
		else if (equationType == 5) {
			// Решение уравнения типа A*x^2 = 0
			if (a == 0) {
				System::Windows::Forms::MessageBox::Show("Коэффициент A не задан");
				return;
			}

			if (b != 0 || c != 0) {
				System::Windows::Forms::MessageBox::Show("Выбран неверный тип уравнения. Коэффициенты B и C должны быть равны 0");
				return;
			}

			double root = 0;
			System::Windows::Forms::MessageBox::Show("Уравнение имеет один корень: " + root);
		}
		else if (equationType == 6) {
			// Решение уравнения типа B*x + C = 0
			if (b == 0) {
				System::Windows::Forms::MessageBox::Show("Коэффициент B не задан");
				return;
			}

			if (c == 0) {
				System::Windows::Forms::MessageBox::Show("Коэффициент C не задан");
				return;
			}

			if (a != 0) {
				System::Windows::Forms::MessageBox::Show("Выбран неверный тип уравнения. Коэффициент A должен быть равен 0");
				return;
			}

			double root = -c / b;
			System::Windows::Forms::MessageBox::Show("Уравнение имеет один корень: " + root);
		}
		else if (equationType == 7) {
			// Решение уравнения типа B*x = 0
			if (b == 0) {
				System::Windows::Forms::MessageBox::Show("Коэффициент B не задан");
				return;
			}

			if (a != 0 || c != 0) {
				System::Windows::Forms::MessageBox::Show("Выбран неверный тип уравнения. Коэффициенты A и C должны быть равны 0");
				return;
			}

			double root = 0;
			System::Windows::Forms::MessageBox::Show("Уравнение имеет один корень: " + root);
		}
	}
};
}
