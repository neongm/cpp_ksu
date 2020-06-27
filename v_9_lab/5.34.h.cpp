 /*5.34 Опишите, используя структуру, время (часы, минуты, секунды). 
Определите, какое время t1 или t2 меньше. Вычислите интервал времени, прошедший от меньшего до большего времени.
*/
#pragma once
namespace My534 {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    value struct time{
        int hour;
        int min;
        int sec;};
        time t1;
        time t2;
        int des;
        int des2;
        int res;
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
    protected: 
    private: System::Windows::Forms::TextBox^  Hours;
    private: System::Windows::Forms::TextBox^  Mins;
    private: System::Windows::Forms::TextBox^  Secs;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::Button^  compare;
    private: System::Windows::Forms::TextBox^  textBox2;
    private: System::Windows::Forms::Button^  button2;
    private: System::Windows::Forms::Button^  button3;
    private: System::Windows::Forms::Button^  button1;
    private: System::Windows::Forms::ListBox^  listBox1;
    private: System::Windows::Forms::Button^  button4;
    private: System::Windows::Forms::Button^  HeapClear;
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
            this->Hours = (gcnew System::Windows::Forms::TextBox());
            this->Mins = (gcnew System::Windows::Forms::TextBox());
            this->Secs = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->compare = (gcnew System::Windows::Forms::Button());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->HeapClear = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // Hours
            // 
            this->Hours->Location = System::Drawing::Point(23, 56);
            this->Hours->Name = L"Hours";
            this->Hours->Size = System::Drawing::Size(100, 20);
            this->Hours->TabIndex = 4;
            this->Hours->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Hours_KeyPress);
            // 
            // Mins
            // 
            this->Mins->Location = System::Drawing::Point(23, 96);
            this->Mins->Name = L"Mins";
            this->Mins->Size = System::Drawing::Size(100, 20);
            this->Mins->TabIndex = 5;
            this->Mins->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Mins_KeyPress);
            // 
            // Secs
            // 
            this->Secs->Location = System::Drawing::Point(23, 137);
            this->Secs->Name = L"Secs";
            this->Secs->Size = System::Drawing::Size(100, 20);
            this->Secs->TabIndex = 6;
            this->Secs->TextChanged += gcnew System::EventHandler(this, &Form1::Secs_TextChanged);
            this->Secs->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Secs_KeyPress);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(129, 63);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(35, 13);
            this->label1->TabIndex = 7;
            this->label1->Text = L"Часы";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(129, 103);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(46, 13);
            this->label2->TabIndex = 8;
            this->label2->Text = L"Минуты";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(129, 144);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(51, 13);
            this->label3->TabIndex = 9;
            this->label3->Text = L"Секунды";
            // 
            // compare
            // 
            this->compare->Enabled = false;
            this->compare->Location = System::Drawing::Point(176, 256);
            this->compare->Name = L"compare";
            this->compare->Size = System::Drawing::Size(75, 23);
            this->compare->TabIndex = 10;
            this->compare->Text = L"сравнить";
            this->compare->UseVisualStyleBackColor = true;
            this->compare->Click += gcnew System::EventHandler(this, &Form1::compare_Click);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(33, 256);
            this->textBox2->Name = L"textBox2";
            this->textBox2->ReadOnly = true;
            this->textBox2->Size = System::Drawing::Size(100, 20);
            this->textBox2->TabIndex = 11;
            // 
            // button2
            // 
            this->button2->Enabled = false;
            this->button2->Location = System::Drawing::Point(33, 197);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 23);
            this->button2->TabIndex = 12;
            this->button2->Text = L"t1";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Visible = false;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // button3
            // 
            this->button3->Enabled = false;
            this->button3->Location = System::Drawing::Point(176, 197);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(75, 23);
            this->button3->TabIndex = 13;
            this->button3->Text = L"t2";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Visible = false;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(23, 12);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(244, 23);
            this->button1->TabIndex = 14;
            this->button1->Text = L"Выделение памяти";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(304, 103);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(186, 147);
            this->listBox1->TabIndex = 15;
            // 
            // button4
            // 
            this->button4->Enabled = false;
            this->button4->Location = System::Drawing::Point(365, 256);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(75, 23);
            this->button4->TabIndex = 16;
            this->button4->Text = L"Обновить";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
            // 
            // HeapClear
            // 
            this->HeapClear->Location = System::Drawing::Point(291, 12);
            this->HeapClear->Name = L"HeapClear";
            this->HeapClear->Size = System::Drawing::Size(75, 23);
            this->HeapClear->TabIndex = 17;
            this->HeapClear->Text = L"-куча";
            this->HeapClear->UseVisualStyleBackColor = true;
            this->HeapClear->Click += gcnew System::EventHandler(this, &Form1::HeapClear_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(511, 330);
            this->Controls->Add(this->HeapClear);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->compare);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->Secs);
            this->Controls->Add(this->Mins);
            this->Controls->Add(this->Hours);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion
        array <time>^ mas;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
                 mas = gcnew array< time > (5);
                 Hours->Text = "";
                Mins->Text = "";
                Secs->Text = "";
                textBox2->Text = "";
                button4->Enabled = true;
                button3->Visible = true;
                button2->Visible = true;
                compare->Enabled = true;
         }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
                t1.hour = Convert::ToInt32(Hours->Text);
                t1.min = Convert::ToInt32(Mins->Text);
                t1.sec = Convert::ToInt32(Secs->Text);
                mas[0] = t1;
                Hours->Text = "";
                Mins->Text = "";
                Secs->Text = "";
                  }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
            t2.hour = Convert::ToInt32(Hours->Text);
            t2.min = Convert::ToInt32(Mins->Text);
            t2.sec = Convert::ToInt32(Secs->Text);
            mas[1]=t2;
            Hours->Text = "";
            Mins->Text = "";
            Secs->Text = "";
         }
private: System::Void compare_Click(System::Object^  sender, System::EventArgs^  e) {
                if (t1.hour < t2.hour) {textBox2->Text = "t1 < t2";
                }  
                else if (t1.hour == t2.hour && t1.min < t2.min) {textBox2->Text = "t1 < t2"+ res;
                }
                else if (t1.hour == t2.hour && t1.min == t2.min && t1.sec < t2.sec) {
                    textBox2->Text = "t1 < t2"+ res;
                    }
                else {textBox2->Text = "t1 > t2"+ res;
                }
             if (mas[0].hour == mas[1].hour && mas[0].min == mas[1].min && mas[0].sec == mas[1].sec){
                 textBox2->Text = "t1 = t2" + res;}
             des = t1.hour * 3600 + t1.min * 60 + t1.sec * 60;
             des2 = t2.hour * 3600 + t2.min * 60 + t2.sec * 60;
             if (des > des2) res = des-des2;
             else res = des2-des;
             listBox1->Items->Add("Разница " + res+ " Секунд");
         }
private: System::Void Secs_TextChanged(System::Object^  sender, System::EventArgs^  e) {
             if (Hours->Text != "" && Mins->Text !="" && Secs->Text !=""){
             button2->Enabled = true;
             button3->Enabled = true;}
            else {button2->Enabled = false;
            button3->Enabled = false;}
            listBox1->Items->Clear();
            listBox1->Items->Add("Часы t1: " + t1.hour);
            listBox1->Items->Add("Минуты t1: "+ t1.min);
            listBox1->Items->Add("Секунды t1: "+ t1.sec);
            listBox1->Items->Add("Часы t2: " + t2.hour);
            listBox1->Items->Add("Минуты t2: "+ t2.min);
            listBox1->Items->Add("Секунды t2: "+ t2.sec);
            listBox1->Items->Add("Разница " + res+ " Секунд");
         }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
            listBox1->Items->Clear();
            listBox1->Items->Add("Часы t1: " + t1.hour);
            listBox1->Items->Add("Часы t1: " + t1.hour);
            listBox1->Items->Add("Минуты t1: "+ t1.min);
            listBox1->Items->Add("Секунды t1: "+ t1.sec);
            listBox1->Items->Add("Часы t2: " + t2.hour);
            listBox1->Items->Add("Минуты t2: "+ t2.min);
            listBox1->Items->Add("Секунды t2: "+ t2.sec);
            listBox1->Items->Add("Разница " + res+ " Секунд");
         }
private: System::Void HeapClear_Click(System::Object^  sender, System::EventArgs^  e) {
                delete[] mas;
                Hours->Text = "";
                Mins->Text = "";
                Secs->Text = "";
                textBox2->Text = "";
                listBox1->Items->Clear();
                button4->Enabled = false;
                button3->Enabled = false;
                button2->Enabled = false;
                compare->Enabled = false;
         }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
             MessageBox::Show ("5.34 Опишите, используя структуру, время (часы, минуты, секунды). Определите, какое время t1 или t2 меньше. Вычислите интервал времени, прошедший от меньшего до большего времени.", "Задача");
         }
private: System::Void Hours_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
             if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))  
            return; 
            e->Handled = true;
         }
private: System::Void Mins_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
             if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))  
            return; 
            e->Handled = true;
         }
private: System::Void Secs_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
             if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))  
            return; 
            e->Handled = true;
         }
};
}
    
    
  
  

