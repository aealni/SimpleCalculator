#pragma once

namespace calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ back;
	protected:

	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ cleare;
	private: System::Windows::Forms::Button^ neg;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	protected:









	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ times;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ equals;
	private: System::Windows::Forms::Button^ period;



	private: System::Windows::Forms::Button^ button0;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->back = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->cleare = (gcnew System::Windows::Forms::Button());
			this->neg = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->times = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->equals = (gcnew System::Windows::Forms::Button());
			this->period = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// back
			// 
			this->back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back->Location = System::Drawing::Point(12, 136);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(125, 100);
			this->back->TabIndex = 0;
			this->back->Text = L"⌫";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &MyForm::back_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->AccessibleName = L"";
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(518, 103);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->Location = System::Drawing::Point(143, 136);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(125, 100);
			this->clear->TabIndex = 2;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// cleare
			// 
			this->cleare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cleare->Location = System::Drawing::Point(274, 136);
			this->cleare->Name = L"cleare";
			this->cleare->Size = System::Drawing::Size(125, 100);
			this->cleare->TabIndex = 3;
			this->cleare->Text = L"CE";
			this->cleare->UseVisualStyleBackColor = true;
			this->cleare->Click += gcnew System::EventHandler(this, &MyForm::cleare_Click);
			// 
			// neg
			// 
			this->neg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->neg->Location = System::Drawing::Point(405, 136);
			this->neg->Name = L"neg";
			this->neg->Size = System::Drawing::Size(125, 100);
			this->neg->TabIndex = 4;
			this->neg->Text = L"±";
			this->neg->UseVisualStyleBackColor = true;
			this->neg->Click += gcnew System::EventHandler(this, &MyForm::neg_Click);
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->Location = System::Drawing::Point(405, 242);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(125, 100);
			this->plus->TabIndex = 8;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(274, 242);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(125, 100);
			this->button9->TabIndex = 7;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(143, 242);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(125, 100);
			this->button8->TabIndex = 6;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(12, 242);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(125, 100);
			this->button7->TabIndex = 5;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// minus
			// 
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minus->Location = System::Drawing::Point(405, 348);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(125, 100);
			this->minus->TabIndex = 12;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(274, 348);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 100);
			this->button6->TabIndex = 11;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(143, 348);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 100);
			this->button5->TabIndex = 10;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 348);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 100);
			this->button4->TabIndex = 9;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// times
			// 
			this->times->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->times->Location = System::Drawing::Point(406, 454);
			this->times->Name = L"times";
			this->times->Size = System::Drawing::Size(125, 100);
			this->times->TabIndex = 16;
			this->times->Text = L"*";
			this->times->UseVisualStyleBackColor = true;
			this->times->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(275, 454);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 100);
			this->button3->TabIndex = 15;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(144, 454);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 100);
			this->button2->TabIndex = 14;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(13, 454);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 100);
			this->button1->TabIndex = 13;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// divide
			// 
			this->divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide->Location = System::Drawing::Point(406, 560);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(125, 100);
			this->divide->TabIndex = 20;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = true;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// equals
			// 
			this->equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equals->Location = System::Drawing::Point(275, 560);
			this->equals->Name = L"equals";
			this->equals->Size = System::Drawing::Size(125, 100);
			this->equals->TabIndex = 19;
			this->equals->Text = L"=";
			this->equals->UseVisualStyleBackColor = true;
			this->equals->Click += gcnew System::EventHandler(this, &MyForm::equals_Click);
			// 
			// period
			// 
			this->period->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->period->Location = System::Drawing::Point(144, 560);
			this->period->Name = L"period";
			this->period->Size = System::Drawing::Size(125, 100);
			this->period->TabIndex = 18;
			this->period->Text = L".";
			this->period->UseVisualStyleBackColor = true;
			this->period->Click += gcnew System::EventHandler(this, &MyForm::period_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(13, 560);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(125, 100);
			this->button0->TabIndex = 17;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(543, 667);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->equals);
			this->Controls->Add(this->period);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->times);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->neg);
			this->Controls->Add(this->cleare);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->back);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators = "+";


private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	if (txtDisplay->Text == "0") {
		txtDisplay->Text = Numbers->Text;
	}
	else {
		txtDisplay->Text += Numbers->Text;
	}
}



private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "0";
	operators = NumbersOp->Text;

}
private: System::Void period_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains(".")) {
		txtDisplay->Text = txtDisplay->Text + ".";
	}

}
private: System::Void equals_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(txtDisplay->Text);

	if (operators == "+") {
		result = firstDigit + secondDigit;
	}
	else if (operators == "-") {
		result = firstDigit - secondDigit;
	}
	else if (operators == "/") {
		result = firstDigit / secondDigit;
	}
	else if (operators == "*") {
		result = firstDigit * secondDigit;
	}
	txtDisplay->Text = System::Convert::ToString(result);
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void cleare_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void neg_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-")) {
		txtDisplay->Text = txtDisplay->Text->Substring(1);
	}
	else if (txtDisplay->Text->Length<=1 && (txtDisplay->Text=="0" || txtDisplay->Text == "")) {
		txtDisplay->Text = "-";
	}
	else {
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0) {
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
	if (txtDisplay->Text == "") {
		txtDisplay->Text = "0";
	}
}
};
}
