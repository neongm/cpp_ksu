//1.9 Напишите программу, которая определяет можно ли из 4 отрезков с данными длинами a,b,c,d составить прямоугольник.
#pragma once

namespace My19 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(12, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(187, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Очистить поля";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(232, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(75, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(232, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(75, 64);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(232, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(92, 157);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(155, 20);
			this->textBox4->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(3, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Сторона АB";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(2, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Сторона BC";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(3, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Сторона CD";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(89, 128);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Ответ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 234);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(314, 30);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Закрыть программу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(75, 96);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(231, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(2, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Сторона DA";
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(359, 308);
			this->ControlBox = false;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"1.9";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int ab,bc,cd,da;
				

					ab = Convert::ToInt32(textBox1->Text);
					bc = Convert::ToInt32(textBox2->Text);
					cd = Convert::ToInt32(textBox3->Text);
					da = Convert::ToInt32(textBox5->Text);
				 
				 if ((ab + bc) == (cd + da)) {
					 textBox4->Text="Можно построить";}
				 else textBox4->Text="Построить нельзя";
				 
				 textBox4->Show();
				
			 }
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "" && textBox2->Text !="" && textBox3->Text !="" && textBox5->Text !="")
					 button1->Enabled = true;
				 else button1->Enabled = false;
			 }
			 
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
	 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox2->Text = "";
				 textBox1->Text = "";
				 textBox3->Text = "";
				 textBox4->Text = "";
				 textBox5->Text = "";
				 button1->Enabled = false;
				 
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show ("Напишите программу, которая определяет можно ли из 4 отрезков с данными длинами a,b,c,d составить прямоугольник.","Задача 1.9");
		 }
		 private: System::Void textBox1_KeyPress(System::Object^  sender, 
           System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) 
	// цифра 
	return; 
	e->Handled = true;}
};
}
