#pragma once
#include "Dashboard.h"
#include "Customer.h"
#include "BankingServices.h"


using namespace System;
using namespace System::IO;

namespace BankingSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			bankManager = gcnew BankingServices();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title_login;
	private: System::Windows::Forms::TextBox^ usernameTextBox;


	private: System::Windows::Forms::Label^ UserNameLabel;
	private: System::Windows::Forms::TextBox^ passwordTextBox;





	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Button^ loginButton;


	private: System::Windows::Forms::Button^ createUserButton;
	private: System::Windows::Forms::Label^ message;
	private: System::Windows::Forms::Button^ close;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		BankingServices^ bankManager;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->title_login = (gcnew System::Windows::Forms::Label());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->UserNameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->createUserButton = (gcnew System::Windows::Forms::Button());
			this->message = (gcnew System::Windows::Forms::Label());
			this->close = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// title_login
			// 
			this->title_login->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->title_login->AutoSize = true;
			this->title_login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_login->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->title_login->Location = System::Drawing::Point(194, 20);
			this->title_login->Name = L"title_login";
			this->title_login->Size = System::Drawing::Size(151, 67);
			this->title_login->TabIndex = 8;
			this->title_login->Text = L"Login";
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->usernameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->usernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameTextBox->Location = System::Drawing::Point(176, 146);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(333, 45);
			this->usernameTextBox->TabIndex = 30;
			// 
			// UserNameLabel
			// 
			this->UserNameLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->UserNameLabel->AutoSize = true;
			this->UserNameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserNameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->UserNameLabel->Location = System::Drawing::Point(12, 151);
			this->UserNameLabel->Name = L"UserNameLabel";
			this->UserNameLabel->Size = System::Drawing::Size(151, 40);
			this->UserNameLabel->TabIndex = 29;
			this->UserNameLabel->Text = L"Username:";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->passwordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->passwordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordTextBox->Location = System::Drawing::Point(176, 232);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->PasswordChar = '*';
			this->passwordTextBox->Size = System::Drawing::Size(333, 45);
			this->passwordTextBox->TabIndex = 32;
			// 
			// passwordLabel
			// 
			this->passwordLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->passwordLabel->Location = System::Drawing::Point(12, 237);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(142, 40);
			this->passwordLabel->TabIndex = 31;
			this->passwordLabel->Text = L"Password:";
			// 
			// loginButton
			// 
			this->loginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->loginButton->FlatAppearance->BorderSize = 0;
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->loginButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginButton.Image")));
			this->loginButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->loginButton->Location = System::Drawing::Point(409, 423);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(129, 68);
			this->loginButton->TabIndex = 33;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &Login::loginButton_Click);
			// 
			// createUserButton
			// 
			this->createUserButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->createUserButton->FlatAppearance->BorderSize = 0;
			this->createUserButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->createUserButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createUserButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->createUserButton->Location = System::Drawing::Point(12, 423);
			this->createUserButton->Name = L"createUserButton";
			this->createUserButton->Size = System::Drawing::Size(242, 68);
			this->createUserButton->TabIndex = 34;
			this->createUserButton->Text = L"Create New User";
			this->createUserButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->createUserButton->UseVisualStyleBackColor = true;
			this->createUserButton->Click += gcnew System::EventHandler(this, &Login::createUserButton_Click);
			// 
			// message
			// 
			this->message->AutoSize = true;
			this->message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->message->ForeColor = System::Drawing::Color::Gray;
			this->message->Location = System::Drawing::Point(14, 342);
			this->message->Name = L"message";
			this->message->Size = System::Drawing::Size(12, 26);
			this->message->TabIndex = 35;
			this->message->Text = L"\r\n";
			// 
			// close
			// 
			this->close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->close->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close.BackgroundImage")));
			this->close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->close->FlatAppearance->BorderSize = 0;
			this->close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close->Location = System::Drawing::Point(479, 9);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(61, 49);
			this->close->TabIndex = 36;
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &Login::close_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(550, 503);
			this->Controls->Add(this->close);
			this->Controls->Add(this->message);
			this->Controls->Add(this->createUserButton);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->UserNameLabel);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->title_login);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void createUserButton_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ username = usernameTextBox->Text;
		String^ password = passwordTextBox->Text;

		if (username == "" || password == "")
		{
			message->Text = "Please enter username and password.";
			return;
		}
		if (bankManager->GetCustomer(username) != nullptr)
		{
					message->Text = "Username already exists. Try a different one.";

					return;
				
		}

		

		Customer^ newCustomer = gcnew Customer(username, password);
		Dashboard^ dashboard = gcnew Dashboard(newCustomer,bankManager);
		usernameTextBox->Text = "";
		passwordTextBox->Text = "";
		this->Hide();
		dashboard->ShowDialog();
		bankManager->addCustomer(newCustomer);
		message->Text = "";
		this->Show();
		

	}
private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ username = usernameTextBox->Text;
	String^ password = passwordTextBox->Text;
	Customer^ cstmr = bankManager->GetCustomer(username);
	if (cstmr != nullptr)
	{
		
			if (cstmr->GetPassword() == password)
			{
				

				Dashboard^ dashboard = gcnew Dashboard(cstmr,bankManager);
				usernameTextBox->Text = "";
				passwordTextBox->Text = "";
				this->Hide();
				dashboard->ShowDialog();
				this->Show();
				message->Text = "";
				return;

			}
		
	}
	message->Text = "Invalid username or password.";

}
private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
