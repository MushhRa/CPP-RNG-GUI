#pragma once
#include <iostream>
#include <iomanip>
#include <random>
#include <cstdlib>
#include <vector>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	std::vector<int> answerVector;

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

	protected:


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;






	protected:

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::White;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::Black;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"rand()", L"srand()", L"Mersenne Twister" });
			this->comboBox1->Location = System::Drawing::Point(207, 80);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(140, 25);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(10, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Select Generator:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(130, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(346, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"C++ Random Number Generator";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(10, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(229, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Amount of Questions:";
			this->label3->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::White;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::Black;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox2->Location = System::Drawing::Point(247, 116);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(32, 25);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->Visible = false;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(141, 293);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 24);
			this->label4->TabIndex = 9;
			this->label4->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(14, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 46);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Generate Questions";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(268, 160);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 46);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Clear Questions";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(14, 367);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(235, 46);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Get Answers";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(581, 444);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"RNG with C++";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	label3->Visible = true;
	comboBox2->Visible = true;
	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	button1->Visible = true;
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	 // Makes Clear Questions & Answers Button Visibile
	 button2->Visible = true;
	 button3->Visible = true;

	 // MY CODE BELOW
	 int userChoice = (comboBox1->SelectedIndex) + 1;
	 int userAmount = (comboBox2->SelectedIndex) + 1;
	 int randOne = 0;
	 int randTwo = 0;
	 const int MIN_VALUE = 100;
	 const int MAX_VALUE = 9999;
	 const int WIDTH = 6;


	 if (userChoice != 1) {
		 srand(time(NULL));
	 }

	 int i = 0;
	 std::vector<int> topQuestionsVector;
	 std::vector<int> bottomQuestionsVector;

	 while (i < userAmount) {

		 if (userChoice == 1) { // Using rand()
			 randOne = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
			 randTwo = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
		 }
		 else if (userChoice == 2) { // Using srand()
			 randTwo = MIN_VALUE + (rand() % MAX_VALUE);
			 randOne = MIN_VALUE + (rand() % MAX_VALUE);

		 }
		 else if (userChoice == 3) { // Using Mersenne Twister
			 std::random_device device;
			 std::mt19937 generator(device());
			 std::uniform_int_distribution<int> distribution(MIN_VALUE, MAX_VALUE);
			 randOne = distribution(generator);
			 randTwo = distribution(generator);
		 }

		 int answer = randOne + randTwo;

		 // ADDS VALUES TO VECTORS
		 answerVector.push_back(answer);
		 topQuestionsVector.push_back(randOne);
		 bottomQuestionsVector.push_back(randTwo);

		 i++;

	 }

	 // Label Variables
	 int loc1 = 12;
	 int loc2 = 229;

	 // Creates Panel

	 for (int i = 0; i < topQuestionsVector.size(); i++) {
		 // Gets question
		 System::String^ top = (topQuestionsVector.at(i)).ToString();
		 System::String^ bottom = (bottomQuestionsVector.at(i)).ToString();
		 System::String^ question = top + "\n" + "+ " + bottom + "\n" + "----------";

		 // CREATES LABEL
		 Label^ eh;
		 eh = gcnew Label;
		 
		 // Label Formatting
		 eh->AutoSize = true;
		 eh->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F));
		 eh->ForeColor = System::Drawing::Color::White;
		 eh->Location = System::Drawing::Point(loc1, loc2);
		 eh->Name = L"eh";
		 eh->Size = System::Drawing::Size(75, 48);
		 eh->Text = question;
		 eh->TextAlign = System::Drawing::ContentAlignment::TopRight;
		 eh->Visible = true;
		 this->Controls->Add(eh);

		 // Increment label variables
		 loc1 += 81;

		 //System::Diagnostics::Trace::WriteLine("tab: " + eh->TabIndex);
		 //System::Diagnostics::Trace::WriteLine("loc: " + loc1);
	 }


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ key = "eh";
	

	while (this->Controls->ContainsKey(key)) {
		this->Controls->RemoveByKey(key);

	 }

	button3->Visible = false;
	answerVector.clear();



	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Label Variables
	int loc1 = 20;
	int loc2 = 300;

	for (int i = 0; i < answerVector.size(); i++) {
		System::String^ answer = (answerVector.at(i)).ToString();

		// CREATES LABEL
		Label^ eh;
		eh = gcnew Label;

		// Label Formatting
		eh->AutoSize = true;
		eh->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F));
		eh->ForeColor = System::Drawing::Color::White;
		eh->Location = System::Drawing::Point(loc1, loc2);
		eh->Name = L"eh";
		eh->Size = System::Drawing::Size(75, 48);
		eh->Text = answer;
		eh->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
		eh->Visible = true;
		this->Controls->Add(eh);

		// Increment label variables
		loc1 += 81;

	}

	answerVector.clear();


}
};
}
