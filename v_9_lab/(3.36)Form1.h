/*3.36.cpp
// "3.36 Дан текст. Найдите наибольшее количество подряд идущих пробелов в нем."

#include "stdafx.h"
#include "Form1.h"
#include <vector>
#include <string>
#include <iostream>

using namespace My336;




[STAThreadAttribute]



int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
*/



#pragma once

namespace My336 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	int max_spaces;
	int spacer(String^ s){
    int i,j,max=0;
    for(i=0;i<s->Length;i++){
        if(s[i]==' '){
            for(j=1;((i+j)<s->Length) && (s[i+j]==' ');j++);
            max=(max<j)?j:max;
        }
    }
    return max;
}

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
	private: System::Windows::Forms::TextBox^  EnterWords;

	protected: 

	protected: 


	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  AddSent;
	private: System::Windows::Forms::Button^  ClearAll;
	private: System::Windows::Forms::TextBox^  AllText;




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  SpaceAm;
	private: System::Windows::Forms::Label^  label4;


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
			this->EnterWords = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AddSent = (gcnew System::Windows::Forms::Button());
			this->ClearAll = (gcnew System::Windows::Forms::Button());
			this->AllText = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SpaceAm = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// EnterWords
			// 
			this->EnterWords->AcceptsReturn = true;
			this->EnterWords->Location = System::Drawing::Point(12, 25);
			this->EnterWords->Name = L"EnterWords";
			this->EnterWords->Size = System::Drawing::Size(399, 20);
			this->EnterWords->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ввод предложения";
			// 
			// AddSent
			// 
			this->AddSent->Location = System::Drawing::Point(12, 243);
			this->AddSent->Name = L"AddSent";
			this->AddSent->Size = System::Drawing::Size(188, 77);
			this->AddSent->TabIndex = 5;
			this->AddSent->Text = L"добавить предложение";
			this->AddSent->UseVisualStyleBackColor = true;
			this->AddSent->Click += gcnew System::EventHandler(this, &Form1::AddSent_Click);
			// 
			// ClearAll
			// 
			this->ClearAll->Location = System::Drawing::Point(206, 243);
			this->ClearAll->Name = L"ClearAll";
			this->ClearAll->Size = System::Drawing::Size(205, 77);
			this->ClearAll->TabIndex = 6;
			this->ClearAll->Text = L"очистка полей";
			this->ClearAll->UseVisualStyleBackColor = true;
			this->ClearAll->Click += gcnew System::EventHandler(this, &Form1::ClearAll_Click);
			// 
			// AllText
			// 
			this->AllText->AcceptsReturn = true;
			this->AllText->Location = System::Drawing::Point(12, 64);
			this->AllText->Multiline = true;
			this->AllText->Name = L"AllText";
			this->AllText->ReadOnly = true;
			this->AllText->Size = System::Drawing::Size(399, 173);
			this->AllText->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Весь текст";
			// 
			// SpaceAm
			// 
			this->SpaceAm->Location = System::Drawing::Point(223, 357);
			this->SpaceAm->Name = L"SpaceAm";
			this->SpaceAm->ReadOnly = true;
			this->SpaceAm->Size = System::Drawing::Size(36, 20);
			this->SpaceAm->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 360);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Максимальное количество пробелов";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 389);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->SpaceAm);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->AllText);
			this->Controls->Add(this->ClearAll);
			this->Controls->Add(this->AddSent);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->EnterWords);
			this->Name = L"Form1";
			this->Text = L"Задача 3.36";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void ClearAll_Click(System::Object^  sender, System::EventArgs^  e) {

				 
				 EnterWords->Text = "";
				 AllText->Text = "";
				 SpaceAm->Text = "";

			 }
private: System::Void AddSent_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ Amount;
			 String^ conv;
			 
			 Amount = Convert::ToString(EnterWords->Text);
			 this->AllText->AppendText(Amount);
			 while (spacer(Amount) > max_spaces){
				 max_spaces = spacer(Amount);}
			 
			 conv=Convert::ToString(max_spaces);
			 SpaceAm ->Text = conv;

		 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			  MessageBox::Show ("3.36 Дан текст. Найдите наибольшее количество подряд идущих пробелов в нем.", "Задача");
		 }
};
}

