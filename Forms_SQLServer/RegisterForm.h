#pragma once
#include "User.h"

namespace FormsSQLServer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbAddress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbConfirmPw;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPw = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1059, 71);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registrati";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nome";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(329, 105);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(743, 44);
			this->tbName->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 171);
			this->label3->Name = L"tbEmail";
			this->label3->Size = System::Drawing::Size(97, 37);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Email";
			this->label3->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(329, 171);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(743, 44);
			this->tbEmail->TabIndex = 2;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 37);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Phone";
			this->label4->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(329, 241);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(743, 44);
			this->tbPhone->TabIndex = 2;
			this->tbPhone->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox2_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 307);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 37);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Address";
			this->label5->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(329, 307);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(743, 44);
			this->tbAddress->TabIndex = 2;
			this->tbAddress->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox2_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 373);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 37);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Password";
			this->label6->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(329, 373);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(743, 44);
			this->tbPassword->TabIndex = 2;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox2_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(24, 435);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(308, 37);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Conferma Password";
			this->label7->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			// 
			// tbConfirmPw
			// 
			this->tbConfirmPw->Location = System::Drawing::Point(329, 435);
			this->tbConfirmPw->Name = L"tbConfirmPw";
			this->tbConfirmPw->PasswordChar = '*';
			this->tbConfirmPw->Size = System::Drawing::Size(743, 44);
			this->tbConfirmPw->TabIndex = 2;
			this->tbConfirmPw->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox2_TextChanged);
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(329, 513);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(346, 61);
			this->btnOk->TabIndex = 3;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &RegisterForm::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(726, 513);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(346, 61);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(976, 598);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(96, 37);
			this->llLogin->TabIndex = 4;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1404, 644);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->tbConfirmPw);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"Form Registrazione";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool swithcToLogin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->swithcToLogin = true;
		this->Close();
	}

	public: User^ user = nullptr;

	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ email = tbEmail->Text;
		String^ phone = tbPhone->Text;
		String^ address = tbAddress->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPw->Text;

		if (name->Length == 0 || email->Length == 0
			|| phone->Length == 0 || address->Length == 0
			|| password->Length == 0) {
			MessageBox::Show("Non lasciare nessun campo vuoto", "Errore campo vuoto",
				MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Le password non coincidono", "Errore password", 
				MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=DESKTOP-OTMM446;Initial Catalog=Forms_SQLServer;Integrated Security=True;Encrypt=True;Trust Server Certificate=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " +
				"(name, email, phone, address, password) Values " +
				"(@name, @email, @phone, @address, @password);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->password = password;

			this->Close();
			
		}
		catch (Exception^ ex) {
			MessageBox::Show("Errore nella registrazione", "Errore registrazione", 
				MessageBoxButtons::OK);
		}

	}
};
}
