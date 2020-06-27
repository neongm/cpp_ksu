#pragma once

namespace My43 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	int a,b,h; //Используются в разных местах
	bool fl = false; //Чтобы не писалось до рисования фигуры
	
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button5;





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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(27, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(401, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"нарисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(434, 179);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"высота (h)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(434, 237);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(169, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"нижняя(a)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(27, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(401, 323);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(434, 208);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(169, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"верхняя (b)";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(434, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(27, 371);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(401, 33);
			this->button5->TabIndex = 6;
			this->button5->Text = L"очистить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 403);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				
				 System::Drawing::Font^ rFont = gcnew System::Drawing::Font 
               ("Tahoma", 11, FontStyle::Regular);
				
				String^ st = "Равнобедренная трапеция";
				
				if (fl == true){
					e->Graphics->DrawString(st,rFont, Brushes::Black, 20, h+21);}
				
							
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		fl = true;

		this->Refresh();

		Graphics^ g = pictureBox1->CreateGraphics();

	  Point point1 = Point(20,h+20);
      Point point2 = Point(a-b+20,20);   //+20 чтобы не рисовалось у края бокса
      Point point3 = Point(b+20,20);
      Point point4 = Point(a+20,h+20);
    
      array<Point>^ curvePoints = {point1,point2,point3,point4};
 
      // Draw polygon to screen
      g->DrawPolygon(System::Drawing::Pens::Black, curvePoints );
      
      // Fill polygon 
      
	  g->FillPolygon(Brushes::Black, curvePoints);

			 }

			 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 h = Convert::ToInt32(textBox1->Text);
			 textBox1->Text = "";
			 textBox1->Focus();
		 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 a = Convert::ToInt32(textBox1->Text);
			 textBox1->Text = "";
			 textBox1->Focus();
			 if (h >=290 ||a >= 290 || b > 290){
			 MessageBox::Show ("При значениях > 270 фигура может не вместиться в форму, измените значения");}
			 else button1->Enabled = true;
			 
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 b = Convert::ToInt32(textBox1->Text);
			 textBox1->Text = "";
			 textBox1->Focus();

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  pictureBox1->Invalidate();
			  fl = false;
			  textBox1->Focus();
		 }


private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != ""){
             button2->Enabled = true;
             button3->Enabled = true;
			 button4->Enabled = true;}
            else {button2->Enabled = false;
            button3->Enabled = false;
			button4->Enabled = false;}
		 }



private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			  if (Char::IsDigit(e->KeyChar) == true) return;
			if (e->KeyChar== (char)Keys::Back) return;
			e->Handled = true;
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show ("4.3 Построить равнобедренную трапецию, высота которой равна h, а основания - a и b");
		 }
};
}

