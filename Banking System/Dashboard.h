#pragma once
#include "BankingServices.h"
#include "Transaction.h"
#include "Customer.h"
#include "Account.h"



namespace BankingSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

    enum Front_Account_panel
    {
        withdraw,
        deposite,
        view,
        transfer,
        addAccount,
        mainAccPnl
    };
	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{

	public:
        
		Dashboard(Customer^ cstmr,BankingServices^ bank)
		{
			InitializeComponent();
            FrntAccPanel = mainAccPnl;

            customer = cstmr;
            bankManager = bank;
            customerLabel->Text = cstmr->GetName();
            totalBalanceLabel->Text = (cstmr->GetBalance()).ToString();
            stNameTextBox->Text = cstmr->GetName();
            stPasswordTextBox->Text = cstmr->GetPassword();
            GenerateBriefTransactions(hmTransactionFlowPanel);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
           
		}
    private:BankingServices^ bankManager;
    private:Customer^ customer;
    private:Account^ currentAccount;
    private: Front_Account_panel FrntAccPanel;
	private: System::Windows::Forms::Panel^ dashboard_tb_bar;
	private: System::Windows::Forms::Panel^ dashboard_btm_bar;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ dashboard_sd_bar;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ title;





	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ hm_button;
	private: System::Windows::Forms::Button^ acc_button;
	private: System::Windows::Forms::Button^ tr_button;
	private: System::Windows::Forms::Button^ set_button;





	private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ logoutButton;


    private: System::Windows::Forms::Label^ notificationLabel;

	private: System::Windows::Forms::Panel^ cont_panel;

	private: System::Windows::Forms::Panel^ hm_panel;
	private: System::Windows::Forms::Panel^ acc_panel;
	private: System::Windows::Forms::Panel^ tr_panel;
	private: System::Windows::Forms::Panel^ set_panel;


























	private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::FlowLayoutPanel^ accountsPanel;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label15;




	private: System::Windows::Forms::Label^ label18;

	private: System::Windows::Forms::Label^ label16;




private: System::Windows::Forms::Button^ addAcc_button;









private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::FlowLayoutPanel^ TrFlowpanel;

























private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::FlowLayoutPanel^ hmTransactionFlowPanel;













private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ totalBalanceLabel;

private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::CheckBox^ notificationCheckbox;

private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::Button^ save_btn;

private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::TextBox^ stPasswordTextBox;

private: System::Windows::Forms::Label^ label43;




private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::TextBox^ stNameTextBox;

private: System::Windows::Forms::Label^ label41;










private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Label^ customerLabel;

private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Button^ cncl_button;

private: System::Windows::Forms::Panel^ newAcc_panel;





private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::TextBox^ addAccountInitialDeposit;




private: System::Windows::Forms::Label^ label43_login;
private: System::Windows::Forms::Button^ withdraw_button;

private: System::Windows::Forms::Panel^ withdraw_panel;
private: System::Windows::Forms::Label^ withdrawAccNumberlbl;
private: System::Windows::Forms::TextBox^ withdrawAmounttextBox;



private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Panel^ deposit_panel;
private: System::Windows::Forms::Label^ depositAccNumberlbl;
private: System::Windows::Forms::TextBox^ depositAmount;



private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Button^ deposit_button;
private: System::Windows::Forms::Panel^ view_panel;
private: System::Windows::Forms::Label^ viewAccBalancelbl;


private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ viewAccNumberlbl;



private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ view_label;
private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::FlowLayoutPanel^ accountTransactionPanel;







private: System::Windows::Forms::Button^ back_button;
private: System::Windows::Forms::Panel^ transfer_panel;
private: System::Windows::Forms::TextBox^ trnsfrAmount;


private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::TextBox^ trnsfrFromAcc;

private: System::Windows::Forms::TextBox^ trnsfrtoAcc;

private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Button^ transfer_button;











private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ toCustomerTextBox;

private: System::Windows::Forms::Label^ label5;










































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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
            this->dashboard_tb_bar = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->title = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->dashboard_btm_bar = (gcnew System::Windows::Forms::Panel());
            this->notificationLabel = (gcnew System::Windows::Forms::Label());
            this->logoutButton = (gcnew System::Windows::Forms::Button());
            this->dashboard_sd_bar = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->hm_button = (gcnew System::Windows::Forms::Button());
            this->acc_button = (gcnew System::Windows::Forms::Button());
            this->tr_button = (gcnew System::Windows::Forms::Button());
            this->set_button = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel23 = (gcnew System::Windows::Forms::Panel());
            this->customerLabel = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->cont_panel = (gcnew System::Windows::Forms::Panel());
            this->acc_panel = (gcnew System::Windows::Forms::Panel());
            this->accountsPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->deposit_button = (gcnew System::Windows::Forms::Button());
            this->back_button = (gcnew System::Windows::Forms::Button());
            this->transfer_button = (gcnew System::Windows::Forms::Button());
            this->withdraw_button = (gcnew System::Windows::Forms::Button());
            this->addAcc_button = (gcnew System::Windows::Forms::Button());
            this->cncl_button = (gcnew System::Windows::Forms::Button());
            this->newAcc_panel = (gcnew System::Windows::Forms::Panel());
            this->addAccountInitialDeposit = (gcnew System::Windows::Forms::TextBox());
            this->label43_login = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->withdraw_panel = (gcnew System::Windows::Forms::Panel());
            this->withdrawAccNumberlbl = (gcnew System::Windows::Forms::Label());
            this->withdrawAmounttextBox = (gcnew System::Windows::Forms::TextBox());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->deposit_panel = (gcnew System::Windows::Forms::Panel());
            this->depositAccNumberlbl = (gcnew System::Windows::Forms::Label());
            this->depositAmount = (gcnew System::Windows::Forms::TextBox());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->view_panel = (gcnew System::Windows::Forms::Panel());
            this->panel27 = (gcnew System::Windows::Forms::Panel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->label63 = (gcnew System::Windows::Forms::Label());
            this->accountTransactionPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->viewAccBalancelbl = (gcnew System::Windows::Forms::Label());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->viewAccNumberlbl = (gcnew System::Windows::Forms::Label());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->view_label = (gcnew System::Windows::Forms::Label());
            this->transfer_panel = (gcnew System::Windows::Forms::Panel());
            this->toCustomerTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->trnsfrAmount = (gcnew System::Windows::Forms::TextBox());
            this->label64 = (gcnew System::Windows::Forms::Label());
            this->trnsfrFromAcc = (gcnew System::Windows::Forms::TextBox());
            this->trnsfrtoAcc = (gcnew System::Windows::Forms::TextBox());
            this->label65 = (gcnew System::Windows::Forms::Label());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->hm_panel = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->hmTransactionFlowPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->totalBalanceLabel = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->tr_panel = (gcnew System::Windows::Forms::Panel());
            this->TrFlowpanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->set_panel = (gcnew System::Windows::Forms::Panel());
            this->panel22 = (gcnew System::Windows::Forms::Panel());
            this->notificationCheckbox = (gcnew System::Windows::Forms::CheckBox());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->panel21 = (gcnew System::Windows::Forms::Panel());
            this->save_btn = (gcnew System::Windows::Forms::Button());
            this->panel17 = (gcnew System::Windows::Forms::Panel());
            this->panel20 = (gcnew System::Windows::Forms::Panel());
            this->stPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->panel18 = (gcnew System::Windows::Forms::Panel());
            this->stNameTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->dashboard_tb_bar->SuspendLayout();
            this->dashboard_btm_bar->SuspendLayout();
            this->dashboard_sd_bar->SuspendLayout();
            this->flowLayoutPanel1->SuspendLayout();
            this->panel1->SuspendLayout();
            this->panel23->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->cont_panel->SuspendLayout();
            this->acc_panel->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel10->SuspendLayout();
            this->newAcc_panel->SuspendLayout();
            this->withdraw_panel->SuspendLayout();
            this->deposit_panel->SuspendLayout();
            this->view_panel->SuspendLayout();
            this->panel27->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->transfer_panel->SuspendLayout();
            this->hm_panel->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->tr_panel->SuspendLayout();
            this->panel12->SuspendLayout();
            this->set_panel->SuspendLayout();
            this->panel22->SuspendLayout();
            this->panel21->SuspendLayout();
            this->panel17->SuspendLayout();
            this->panel20->SuspendLayout();
            this->panel18->SuspendLayout();
            this->SuspendLayout();
            // 
            // dashboard_tb_bar
            // 
            this->dashboard_tb_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->dashboard_tb_bar->Controls->Add(this->button1);
            this->dashboard_tb_bar->Controls->Add(this->title);
            this->dashboard_tb_bar->Controls->Add(this->button3);
            this->dashboard_tb_bar->Controls->Add(this->button2);
            this->dashboard_tb_bar->Dock = System::Windows::Forms::DockStyle::Top;
            this->dashboard_tb_bar->Location = System::Drawing::Point(0, 0);
            this->dashboard_tb_bar->Name = L"dashboard_tb_bar";
            this->dashboard_tb_bar->Size = System::Drawing::Size(1120, 87);
            this->dashboard_tb_bar->TabIndex = 0;
            // 
            // button1
            // 
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Location = System::Drawing::Point(1028, 12);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(80, 69);
            this->button1->TabIndex = 0;
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
            // 
            // title
            // 
            this->title->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->title->AutoSize = true;
            this->title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->title->Location = System::Drawing::Point(483, 17);
            this->title->Name = L"title";
            this->title->Size = System::Drawing::Size(163, 67);
            this->title->TabIndex = 7;
            this->title->Text = L"Home";
            // 
            // button3
            // 
            this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
            this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Location = System::Drawing::Point(858, 12);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(80, 69);
            this->button3->TabIndex = 2;
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &Dashboard::button3_Click);
            // 
            // button2
            // 
            this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
            this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Location = System::Drawing::Point(944, 12);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(80, 69);
            this->button2->TabIndex = 1;
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
            // 
            // dashboard_btm_bar
            // 
            this->dashboard_btm_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->dashboard_btm_bar->Controls->Add(this->notificationLabel);
            this->dashboard_btm_bar->Controls->Add(this->logoutButton);
            this->dashboard_btm_bar->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->dashboard_btm_bar->Location = System::Drawing::Point(0, 628);
            this->dashboard_btm_bar->Name = L"dashboard_btm_bar";
            this->dashboard_btm_bar->Size = System::Drawing::Size(1120, 77);
            this->dashboard_btm_bar->TabIndex = 2;
            // 
            // notificationLabel
            // 
            this->notificationLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->notificationLabel->AutoSize = true;
            this->notificationLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->notificationLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->notificationLabel->Location = System::Drawing::Point(10, 15);
            this->notificationLabel->Name = L"notificationLabel";
            this->notificationLabel->Size = System::Drawing::Size(373, 46);
            this->notificationLabel->TabIndex = 8;
            this->notificationLabel->Text = L"Notes and Notifications";
            // 
            // logoutButton
            // 
            this->logoutButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->logoutButton->FlatAppearance->BorderSize = 0;
            this->logoutButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->logoutButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->logoutButton->ForeColor = System::Drawing::Color::Red;
            this->logoutButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoutButton.Image")));
            this->logoutButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->logoutButton->Location = System::Drawing::Point(956, 6);
            this->logoutButton->Name = L"logoutButton";
            this->logoutButton->Size = System::Drawing::Size(161, 68);
            this->logoutButton->TabIndex = 0;
            this->logoutButton->Text = L"Logout";
            this->logoutButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->logoutButton->UseVisualStyleBackColor = true;
            this->logoutButton->Click += gcnew System::EventHandler(this, &Dashboard::button9_Click);
            // 
            // dashboard_sd_bar
            // 
            this->dashboard_sd_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->dashboard_sd_bar->Controls->Add(this->flowLayoutPanel1);
            this->dashboard_sd_bar->Controls->Add(this->panel1);
            this->dashboard_sd_bar->Dock = System::Windows::Forms::DockStyle::Left;
            this->dashboard_sd_bar->Location = System::Drawing::Point(0, 87);
            this->dashboard_sd_bar->Name = L"dashboard_sd_bar";
            this->dashboard_sd_bar->Size = System::Drawing::Size(271, 541);
            this->dashboard_sd_bar->TabIndex = 3;
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->Controls->Add(this->hm_button);
            this->flowLayoutPanel1->Controls->Add(this->acc_button);
            this->flowLayoutPanel1->Controls->Add(this->tr_button);
            this->flowLayoutPanel1->Controls->Add(this->set_button);
            this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->flowLayoutPanel1->Location = System::Drawing::Point(0, 198);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(271, 343);
            this->flowLayoutPanel1->TabIndex = 1;
            // 
            // hm_button
            // 
            this->hm_button->FlatAppearance->BorderSize = 0;
            this->hm_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->hm_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->hm_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->hm_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hm_button.Image")));
            this->hm_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->hm_button->Location = System::Drawing::Point(3, 10);
            this->hm_button->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->hm_button->Name = L"hm_button";
            this->hm_button->Padding = System::Windows::Forms::Padding(1);
            this->hm_button->Size = System::Drawing::Size(271, 70);
            this->hm_button->TabIndex = 0;
            this->hm_button->Text = L"Home";
            this->hm_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->hm_button->UseVisualStyleBackColor = true;
            this->hm_button->Click += gcnew System::EventHandler(this, &Dashboard::hm_button_Click);
            // 
            // acc_button
            // 
            this->acc_button->FlatAppearance->BorderSize = 0;
            this->acc_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->acc_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->acc_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->acc_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"acc_button.Image")));
            this->acc_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->acc_button->Location = System::Drawing::Point(3, 93);
            this->acc_button->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->acc_button->Name = L"acc_button";
            this->acc_button->Padding = System::Windows::Forms::Padding(1);
            this->acc_button->Size = System::Drawing::Size(274, 70);
            this->acc_button->TabIndex = 1;
            this->acc_button->Text = L"Accounts";
            this->acc_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->acc_button->UseVisualStyleBackColor = true;
            this->acc_button->Click += gcnew System::EventHandler(this, &Dashboard::acc_button_Click);
            // 
            // tr_button
            // 
            this->tr_button->FlatAppearance->BorderSize = 0;
            this->tr_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->tr_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tr_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->tr_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tr_button.Image")));
            this->tr_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->tr_button->Location = System::Drawing::Point(3, 176);
            this->tr_button->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->tr_button->Name = L"tr_button";
            this->tr_button->Padding = System::Windows::Forms::Padding(1);
            this->tr_button->Size = System::Drawing::Size(271, 70);
            this->tr_button->TabIndex = 2;
            this->tr_button->Text = L"Transactions";
            this->tr_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->tr_button->UseVisualStyleBackColor = true;
            this->tr_button->Click += gcnew System::EventHandler(this, &Dashboard::tr_button_Click);
            // 
            // set_button
            // 
            this->set_button->FlatAppearance->BorderSize = 0;
            this->set_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->set_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->set_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->set_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"set_button.Image")));
            this->set_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->set_button->Location = System::Drawing::Point(3, 259);
            this->set_button->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->set_button->Name = L"set_button";
            this->set_button->Padding = System::Windows::Forms::Padding(1);
            this->set_button->Size = System::Drawing::Size(271, 70);
            this->set_button->TabIndex = 3;
            this->set_button->Text = L"Settings";
            this->set_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->set_button->UseVisualStyleBackColor = true;
            this->set_button->Click += gcnew System::EventHandler(this, &Dashboard::set_button_Click);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->panel23);
            this->panel1->Controls->Add(this->button8);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(271, 198);
            this->panel1->TabIndex = 0;
            // 
            // panel23
            // 
            this->panel23->Controls->Add(this->customerLabel);
            this->panel23->Controls->Add(this->pictureBox1);
            this->panel23->Dock = System::Windows::Forms::DockStyle::Right;
            this->panel23->Location = System::Drawing::Point(68, 0);
            this->panel23->Name = L"panel23";
            this->panel23->Size = System::Drawing::Size(203, 198);
            this->panel23->TabIndex = 9;
            // 
            // customerLabel
            // 
            this->customerLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->customerLabel->AutoSize = true;
            this->customerLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->customerLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->customerLabel->Location = System::Drawing::Point(30, 138);
            this->customerLabel->Name = L"customerLabel";
            this->customerLabel->Size = System::Drawing::Size(143, 32);
            this->customerLabel->TabIndex = 10;
            this->customerLabel->Text = L"Client name";
            this->customerLabel->Click += gcnew System::EventHandler(this, &Dashboard::label2_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(6, 6);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(191, 117);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 11;
            this->pictureBox1->TabStop = false;
            // 
            // button8
            // 
            this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
            this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Location = System::Drawing::Point(6, 6);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(56, 45);
            this->button8->TabIndex = 8;
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &Dashboard::button8_Click);
            // 
            // cont_panel
            // 
            this->cont_panel->Controls->Add(this->hm_panel);
            this->cont_panel->Controls->Add(this->acc_panel);
            this->cont_panel->Controls->Add(this->tr_panel);
            this->cont_panel->Controls->Add(this->set_panel);
            this->cont_panel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->cont_panel->Location = System::Drawing::Point(271, 87);
            this->cont_panel->Name = L"cont_panel";
            this->cont_panel->Size = System::Drawing::Size(849, 541);
            this->cont_panel->TabIndex = 4;
            // 
            // acc_panel
            // 
            this->acc_panel->Controls->Add(this->accountsPanel);
            this->acc_panel->Controls->Add(this->panel8);
            this->acc_panel->Controls->Add(this->panel10);
            this->acc_panel->Controls->Add(this->newAcc_panel);
            this->acc_panel->Controls->Add(this->withdraw_panel);
            this->acc_panel->Controls->Add(this->deposit_panel);
            this->acc_panel->Controls->Add(this->view_panel);
            this->acc_panel->Controls->Add(this->transfer_panel);
            this->acc_panel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->acc_panel->Location = System::Drawing::Point(0, 0);
            this->acc_panel->Name = L"acc_panel";
            this->acc_panel->Size = System::Drawing::Size(849, 541);
            this->acc_panel->TabIndex = 7;
            // 
            // accountsPanel
            // 
            this->accountsPanel->AutoScroll = true;
            this->accountsPanel->AutoScrollMinSize = System::Drawing::Size(20, 20);
            this->accountsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->accountsPanel->Location = System::Drawing::Point(0, 100);
            this->accountsPanel->Name = L"accountsPanel";
            this->accountsPanel->Size = System::Drawing::Size(849, 341);
            this->accountsPanel->TabIndex = 2;
            // 
            // panel8
            // 
            this->panel8->Controls->Add(this->label18);
            this->panel8->Controls->Add(this->label16);
            this->panel8->Controls->Add(this->label15);
            this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel8->Location = System::Drawing::Point(0, 0);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(849, 100);
            this->panel8->TabIndex = 0;
            // 
            // label18
            // 
            this->label18->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label18->Location = System::Drawing::Point(601, 27);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(131, 46);
            this->label18->TabIndex = 12;
            this->label18->Text = L"Actions";
            // 
            // label16
            // 
            this->label16->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label16->Location = System::Drawing::Point(192, 27);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(134, 46);
            this->label16->TabIndex = 10;
            this->label16->Text = L"Balance";
            // 
            // label15
            // 
            this->label15->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label15->Location = System::Drawing::Point(22, 28);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(144, 46);
            this->label15->TabIndex = 9;
            this->label15->Text = L"Account";
            // 
            // panel10
            // 
            this->panel10->Controls->Add(this->deposit_button);
            this->panel10->Controls->Add(this->back_button);
            this->panel10->Controls->Add(this->transfer_button);
            this->panel10->Controls->Add(this->withdraw_button);
            this->panel10->Controls->Add(this->addAcc_button);
            this->panel10->Controls->Add(this->cncl_button);
            this->panel10->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel10->Location = System::Drawing::Point(0, 441);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(849, 100);
            this->panel10->TabIndex = 3;
            // 
            // deposit_button
            // 
            this->deposit_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->deposit_button->FlatAppearance->BorderSize = 0;
            this->deposit_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->deposit_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->deposit_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->deposit_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deposit_button.Image")));
            this->deposit_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->deposit_button->Location = System::Drawing::Point(593, 13);
            this->deposit_button->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->deposit_button->Name = L"deposit_button";
            this->deposit_button->Padding = System::Windows::Forms::Padding(1);
            this->deposit_button->Size = System::Drawing::Size(244, 70);
            this->deposit_button->TabIndex = 7;
            this->deposit_button->Text = L"Deposit";
            this->deposit_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->deposit_button->UseVisualStyleBackColor = true;
            this->deposit_button->Visible = false;
            this->deposit_button->Click += gcnew System::EventHandler(this, &Dashboard::deposit_button_Click);
            // 
            // back_button
            // 
            this->back_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->back_button->FlatAppearance->BorderSize = 0;
            this->back_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->back_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->back_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->back_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_button.Image")));
            this->back_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->back_button->Location = System::Drawing::Point(21, 13);
            this->back_button->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->back_button->Name = L"back_button";
            this->back_button->Padding = System::Windows::Forms::Padding(1);
            this->back_button->Size = System::Drawing::Size(171, 70);
            this->back_button->TabIndex = 8;
            this->back_button->Text = L"Back";
            this->back_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->back_button->UseVisualStyleBackColor = true;
            this->back_button->Visible = false;
            this->back_button->Click += gcnew System::EventHandler(this, &Dashboard::back_button_Click);
            // 
            // transfer_button
            // 
            this->transfer_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->transfer_button->FlatAppearance->BorderSize = 0;
            this->transfer_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->transfer_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->transfer_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->transfer_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"transfer_button.Image")));
            this->transfer_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->transfer_button->Location = System::Drawing::Point(598, 10);
            this->transfer_button->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->transfer_button->Name = L"transfer_button";
            this->transfer_button->Padding = System::Windows::Forms::Padding(1);
            this->transfer_button->Size = System::Drawing::Size(225, 70);
            this->transfer_button->TabIndex = 9;
            this->transfer_button->Text = L"Transfer";
            this->transfer_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->transfer_button->UseVisualStyleBackColor = true;
            this->transfer_button->Visible = false;
            this->transfer_button->Click += gcnew System::EventHandler(this, &Dashboard::transfer_button_Click);
            // 
            // withdraw_button
            // 
            this->withdraw_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->withdraw_button->FlatAppearance->BorderSize = 0;
            this->withdraw_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->withdraw_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->withdraw_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->withdraw_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"withdraw_button.Image")));
            this->withdraw_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->withdraw_button->Location = System::Drawing::Point(579, 13);
            this->withdraw_button->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->withdraw_button->Name = L"withdraw_button";
            this->withdraw_button->Padding = System::Windows::Forms::Padding(1);
            this->withdraw_button->Size = System::Drawing::Size(244, 70);
            this->withdraw_button->TabIndex = 6;
            this->withdraw_button->Text = L"Withdraw";
            this->withdraw_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->withdraw_button->UseVisualStyleBackColor = true;
            this->withdraw_button->Visible = false;
            this->withdraw_button->Click += gcnew System::EventHandler(this, &Dashboard::withdraw_button_Click);
            // 
            // addAcc_button
            // 
            this->addAcc_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->addAcc_button->FlatAppearance->BorderSize = 0;
            this->addAcc_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->addAcc_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->addAcc_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->addAcc_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addAcc_button.Image")));
            this->addAcc_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->addAcc_button->Location = System::Drawing::Point(460, 16);
            this->addAcc_button->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->addAcc_button->Name = L"addAcc_button";
            this->addAcc_button->Padding = System::Windows::Forms::Padding(1);
            this->addAcc_button->Size = System::Drawing::Size(385, 70);
            this->addAcc_button->TabIndex = 4;
            this->addAcc_button->Text = L"Add New Account";
            this->addAcc_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->addAcc_button->UseVisualStyleBackColor = true;
            this->addAcc_button->Click += gcnew System::EventHandler(this, &Dashboard::button14_Click);
            // 
            // cncl_button
            // 
            this->cncl_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->cncl_button->FlatAppearance->BorderSize = 0;
            this->cncl_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cncl_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cncl_button->ForeColor = System::Drawing::Color::Red;
            this->cncl_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cncl_button.Image")));
            this->cncl_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->cncl_button->Location = System::Drawing::Point(27, 16);
            this->cncl_button->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->cncl_button->Name = L"cncl_button";
            this->cncl_button->Padding = System::Windows::Forms::Padding(1);
            this->cncl_button->Size = System::Drawing::Size(215, 70);
            this->cncl_button->TabIndex = 5;
            this->cncl_button->Text = L"Cancle";
            this->cncl_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->cncl_button->UseVisualStyleBackColor = true;
            this->cncl_button->Visible = false;
            this->cncl_button->Click += gcnew System::EventHandler(this, &Dashboard::cncl_button_Click);
            // 
            // newAcc_panel
            // 
            this->newAcc_panel->Controls->Add(this->addAccountInitialDeposit);
            this->newAcc_panel->Controls->Add(this->label43_login);
            this->newAcc_panel->Controls->Add(this->label47);
            this->newAcc_panel->Location = System::Drawing::Point(0, 0);
            this->newAcc_panel->Name = L"newAcc_panel";
            this->newAcc_panel->Size = System::Drawing::Size(849, 441);
            this->newAcc_panel->TabIndex = 4;
            // 
            // addAccountInitialDeposit
            // 
            this->addAccountInitialDeposit->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->addAccountInitialDeposit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->addAccountInitialDeposit->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->addAccountInitialDeposit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->addAccountInitialDeposit->Location = System::Drawing::Point(276, 178);
            this->addAccountInitialDeposit->Name = L"addAccountInitialDeposit";
            this->addAccountInitialDeposit->Size = System::Drawing::Size(254, 45);
            this->addAccountInitialDeposit->TabIndex = 34;
            // 
            // label43_login
            // 
            this->label43_login->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label43_login->AutoSize = true;
            this->label43_login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43_login->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label43_login->Location = System::Drawing::Point(22, 180);
            this->label43_login->Name = L"label43_login";
            this->label43_login->Size = System::Drawing::Size(199, 40);
            this->label43_login->TabIndex = 35;
            this->label43_login->Text = L"Initial Deposit:";
            this->label43_login->Click += gcnew System::EventHandler(this, &Dashboard::label43_login_Click);
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label47->Location = System::Drawing::Point(21, 18);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(313, 46);
            this->label47->TabIndex = 9;
            this->label47->Text = L"Open New Account";
            // 
            // withdraw_panel
            // 
            this->withdraw_panel->Controls->Add(this->withdrawAccNumberlbl);
            this->withdraw_panel->Controls->Add(this->withdrawAmounttextBox);
            this->withdraw_panel->Controls->Add(this->label40);
            this->withdraw_panel->Controls->Add(this->label45);
            this->withdraw_panel->Controls->Add(this->label46);
            this->withdraw_panel->Location = System::Drawing::Point(0, 0);
            this->withdraw_panel->Name = L"withdraw_panel";
            this->withdraw_panel->Size = System::Drawing::Size(849, 441);
            this->withdraw_panel->TabIndex = 5;
            // 
            // withdrawAccNumberlbl
            // 
            this->withdrawAccNumberlbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->withdrawAccNumberlbl->AutoSize = true;
            this->withdrawAccNumberlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->withdrawAccNumberlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->withdrawAccNumberlbl->Location = System::Drawing::Point(326, 133);
            this->withdrawAccNumberlbl->Name = L"withdrawAccNumberlbl";
            this->withdrawAccNumberlbl->Size = System::Drawing::Size(212, 40);
            this->withdrawAccNumberlbl->TabIndex = 36;
            this->withdrawAccNumberlbl->Text = L"Account Name:";
            // 
            // withdrawAmounttextBox
            // 
            this->withdrawAmounttextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->withdrawAmounttextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->withdrawAmounttextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->withdrawAmounttextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->withdrawAmounttextBox->Location = System::Drawing::Point(328, 238);
            this->withdrawAmounttextBox->Name = L"withdrawAmounttextBox";
            this->withdrawAmounttextBox->Size = System::Drawing::Size(254, 45);
            this->withdrawAmounttextBox->TabIndex = 34;
            // 
            // label40
            // 
            this->label40->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label40->Location = System::Drawing::Point(30, 134);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(240, 40);
            this->label40->TabIndex = 33;
            this->label40->Text = L"Account Number:";
            // 
            // label45
            // 
            this->label45->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label45->Location = System::Drawing::Point(30, 240);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(279, 40);
            this->label45->TabIndex = 35;
            this->label45->Text = L"Withdrawal Amount:";
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label46->Location = System::Drawing::Point(21, 18);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(263, 46);
            this->label46->TabIndex = 9;
            this->label46->Text = L"Withdraw Funds";
            // 
            // deposit_panel
            // 
            this->deposit_panel->Controls->Add(this->depositAccNumberlbl);
            this->deposit_panel->Controls->Add(this->depositAmount);
            this->deposit_panel->Controls->Add(this->label50);
            this->deposit_panel->Controls->Add(this->label51);
            this->deposit_panel->Controls->Add(this->label52);
            this->deposit_panel->Location = System::Drawing::Point(0, 0);
            this->deposit_panel->Name = L"deposit_panel";
            this->deposit_panel->Size = System::Drawing::Size(849, 441);
            this->deposit_panel->TabIndex = 6;
            // 
            // depositAccNumberlbl
            // 
            this->depositAccNumberlbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->depositAccNumberlbl->AutoSize = true;
            this->depositAccNumberlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->depositAccNumberlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->depositAccNumberlbl->Location = System::Drawing::Point(326, 133);
            this->depositAccNumberlbl->Name = L"depositAccNumberlbl";
            this->depositAccNumberlbl->Size = System::Drawing::Size(212, 40);
            this->depositAccNumberlbl->TabIndex = 36;
            this->depositAccNumberlbl->Text = L"Account Name:";
            // 
            // depositAmount
            // 
            this->depositAmount->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->depositAmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->depositAmount->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->depositAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->depositAmount->Location = System::Drawing::Point(328, 238);
            this->depositAmount->Name = L"depositAmount";
            this->depositAmount->Size = System::Drawing::Size(254, 45);
            this->depositAmount->TabIndex = 34;
            // 
            // label50
            // 
            this->label50->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label50->AutoSize = true;
            this->label50->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label50->Location = System::Drawing::Point(30, 134);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(240, 40);
            this->label50->TabIndex = 33;
            this->label50->Text = L"Account Number:";
            // 
            // label51
            // 
            this->label51->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label51->AutoSize = true;
            this->label51->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label51->Location = System::Drawing::Point(30, 240);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(232, 40);
            this->label51->TabIndex = 35;
            this->label51->Text = L"Deposit Amount:";
            // 
            // label52
            // 
            this->label52->AutoSize = true;
            this->label52->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label52->Location = System::Drawing::Point(21, 18);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(234, 46);
            this->label52->TabIndex = 9;
            this->label52->Text = L"Deposit Funds";
            // 
            // view_panel
            // 
            this->view_panel->Controls->Add(this->panel27);
            this->view_panel->Controls->Add(this->accountTransactionPanel);
            this->view_panel->Controls->Add(this->viewAccBalancelbl);
            this->view_panel->Controls->Add(this->label57);
            this->view_panel->Controls->Add(this->viewAccNumberlbl);
            this->view_panel->Controls->Add(this->label55);
            this->view_panel->Controls->Add(this->view_label);
            this->view_panel->Location = System::Drawing::Point(0, 0);
            this->view_panel->Name = L"view_panel";
            this->view_panel->Size = System::Drawing::Size(849, 444);
            this->view_panel->TabIndex = 7;
            // 
            // panel27
            // 
            this->panel27->Controls->Add(this->label4);
            this->panel27->Controls->Add(this->label3);
            this->panel27->Controls->Add(this->pictureBox4);
            this->panel27->Controls->Add(this->label63);
            this->panel27->Location = System::Drawing::Point(0, 228);
            this->panel27->Name = L"panel27";
            this->panel27->Size = System::Drawing::Size(849, 83);
            this->panel27->TabIndex = 41;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::Silver;
            this->label4->Location = System::Drawing::Point(241, 53);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(83, 28);
            this->label4->TabIndex = 13;
            this->label4->Text = L"Amount";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::Silver;
            this->label3->Location = System::Drawing::Point(10, 53);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(53, 28);
            this->label3->TabIndex = 12;
            this->label3->Text = L"Type";
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(15, 7);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(67, 41);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 10;
            this->pictureBox4->TabStop = false;
            // 
            // label63
            // 
            this->label63->AutoSize = true;
            this->label63->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label63->ForeColor = System::Drawing::Color::Silver;
            this->label63->Location = System::Drawing::Point(96, 5);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(265, 40);
            this->label63->TabIndex = 11;
            this->label63->Text = L"Recent Transactions";
            // 
            // accountTransactionPanel
            // 
            this->accountTransactionPanel->AutoScroll = true;
            this->accountTransactionPanel->AutoScrollMinSize = System::Drawing::Size(20, 20);
            this->accountTransactionPanel->Location = System::Drawing::Point(3, 312);
            this->accountTransactionPanel->Name = L"accountTransactionPanel";
            this->accountTransactionPanel->Size = System::Drawing::Size(846, 129);
            this->accountTransactionPanel->TabIndex = 40;
            // 
            // viewAccBalancelbl
            // 
            this->viewAccBalancelbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->viewAccBalancelbl->AutoSize = true;
            this->viewAccBalancelbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->viewAccBalancelbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->viewAccBalancelbl->Location = System::Drawing::Point(321, 157);
            this->viewAccBalancelbl->Name = L"viewAccBalancelbl";
            this->viewAccBalancelbl->Size = System::Drawing::Size(212, 40);
            this->viewAccBalancelbl->TabIndex = 39;
            this->viewAccBalancelbl->Text = L"Account Name:";
            // 
            // label57
            // 
            this->label57->AutoSize = true;
            this->label57->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label57->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label57->Location = System::Drawing::Point(28, 157);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(224, 40);
            this->label57->TabIndex = 38;
            this->label57->Text = L"Current Balance:";
            // 
            // viewAccNumberlbl
            // 
            this->viewAccNumberlbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->viewAccNumberlbl->AutoSize = true;
            this->viewAccNumberlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->viewAccNumberlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->viewAccNumberlbl->Location = System::Drawing::Point(321, 89);
            this->viewAccNumberlbl->Name = L"viewAccNumberlbl";
            this->viewAccNumberlbl->Size = System::Drawing::Size(212, 40);
            this->viewAccNumberlbl->TabIndex = 37;
            this->viewAccNumberlbl->Text = L"Account Name:";
            // 
            // label55
            // 
            this->label55->AutoSize = true;
            this->label55->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label55->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label55->Location = System::Drawing::Point(28, 89);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(240, 40);
            this->label55->TabIndex = 35;
            this->label55->Text = L"Account Number:";
            // 
            // view_label
            // 
            this->view_label->AutoSize = true;
            this->view_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->view_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->view_label->Location = System::Drawing::Point(21, 18);
            this->view_label->Name = L"view_label";
            this->view_label->Size = System::Drawing::Size(254, 46);
            this->view_label->TabIndex = 9;
            this->view_label->Text = L"Account Details";
            // 
            // transfer_panel
            // 
            this->transfer_panel->Controls->Add(this->toCustomerTextBox);
            this->transfer_panel->Controls->Add(this->label5);
            this->transfer_panel->Controls->Add(this->trnsfrAmount);
            this->transfer_panel->Controls->Add(this->label64);
            this->transfer_panel->Controls->Add(this->trnsfrFromAcc);
            this->transfer_panel->Controls->Add(this->trnsfrtoAcc);
            this->transfer_panel->Controls->Add(this->label65);
            this->transfer_panel->Controls->Add(this->label66);
            this->transfer_panel->Controls->Add(this->label67);
            this->transfer_panel->Location = System::Drawing::Point(0, 0);
            this->transfer_panel->Name = L"transfer_panel";
            this->transfer_panel->Size = System::Drawing::Size(849, 438);
            this->transfer_panel->TabIndex = 8;
            // 
            // toCustomerTextBox
            // 
            this->toCustomerTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->toCustomerTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->toCustomerTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->toCustomerTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->toCustomerTextBox->Location = System::Drawing::Point(328, 171);
            this->toCustomerTextBox->Name = L"toCustomerTextBox";
            this->toCustomerTextBox->Size = System::Drawing::Size(254, 45);
            this->toCustomerTextBox->TabIndex = 39;
            // 
            // label5
            // 
            this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label5->Location = System::Drawing::Point(30, 173);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(183, 40);
            this->label5->TabIndex = 40;
            this->label5->Text = L"To Customer:";
            // 
            // trnsfrAmount
            // 
            this->trnsfrAmount->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->trnsfrAmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->trnsfrAmount->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->trnsfrAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->trnsfrAmount->Location = System::Drawing::Point(333, 332);
            this->trnsfrAmount->Name = L"trnsfrAmount";
            this->trnsfrAmount->Size = System::Drawing::Size(254, 45);
            this->trnsfrAmount->TabIndex = 37;
            // 
            // label64
            // 
            this->label64->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label64->AutoSize = true;
            this->label64->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label64->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label64->Location = System::Drawing::Point(35, 334);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(233, 40);
            this->label64->TabIndex = 38;
            this->label64->Text = L"Transfer Amount:";
            // 
            // trnsfrFromAcc
            // 
            this->trnsfrFromAcc->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->trnsfrFromAcc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->trnsfrFromAcc->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->trnsfrFromAcc->Enabled = false;
            this->trnsfrFromAcc->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->trnsfrFromAcc->Location = System::Drawing::Point(328, 89);
            this->trnsfrFromAcc->Name = L"trnsfrFromAcc";
            this->trnsfrFromAcc->Size = System::Drawing::Size(254, 45);
            this->trnsfrFromAcc->TabIndex = 36;
            // 
            // trnsfrtoAcc
            // 
            this->trnsfrtoAcc->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->trnsfrtoAcc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->trnsfrtoAcc->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->trnsfrtoAcc->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->trnsfrtoAcc->Location = System::Drawing::Point(328, 251);
            this->trnsfrtoAcc->Name = L"trnsfrtoAcc";
            this->trnsfrtoAcc->Size = System::Drawing::Size(254, 45);
            this->trnsfrtoAcc->TabIndex = 34;
            // 
            // label65
            // 
            this->label65->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label65->AutoSize = true;
            this->label65->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label65->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label65->Location = System::Drawing::Point(30, 93);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(201, 40);
            this->label65->TabIndex = 33;
            this->label65->Text = L"From Account:";
            // 
            // label66
            // 
            this->label66->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label66->AutoSize = true;
            this->label66->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label66->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label66->Location = System::Drawing::Point(30, 253);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(164, 40);
            this->label66->TabIndex = 35;
            this->label66->Text = L"To Account:";
            // 
            // label67
            // 
            this->label67->AutoSize = true;
            this->label67->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label67->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label67->Location = System::Drawing::Point(21, 18);
            this->label67->Name = L"label67";
            this->label67->Size = System::Drawing::Size(245, 46);
            this->label67->TabIndex = 9;
            this->label67->Text = L" Transfer Funds";
            // 
            // hm_panel
            // 
            this->hm_panel->Controls->Add(this->panel3);
            this->hm_panel->Controls->Add(this->panel2);
            this->hm_panel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->hm_panel->Location = System::Drawing::Point(0, 0);
            this->hm_panel->Name = L"hm_panel";
            this->hm_panel->Size = System::Drawing::Size(849, 541);
            this->hm_panel->TabIndex = 8;
            // 
            // panel3
            // 
            this->panel3->Controls->Add(this->hmTransactionFlowPanel);
            this->panel3->Controls->Add(this->panel4);
            this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel3->Location = System::Drawing::Point(0, 129);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(849, 412);
            this->panel3->TabIndex = 1;
            // 
            // hmTransactionFlowPanel
            // 
            this->hmTransactionFlowPanel->AutoScroll = true;
            this->hmTransactionFlowPanel->AutoScrollMinSize = System::Drawing::Size(20, 20);
            this->hmTransactionFlowPanel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->hmTransactionFlowPanel->Location = System::Drawing::Point(0, 146);
            this->hmTransactionFlowPanel->Name = L"hmTransactionFlowPanel";
            this->hmTransactionFlowPanel->Size = System::Drawing::Size(849, 266);
            this->hmTransactionFlowPanel->TabIndex = 1;
            // 
            // panel4
            // 
            this->panel4->Controls->Add(this->label2);
            this->panel4->Controls->Add(this->label1);
            this->panel4->Controls->Add(this->pictureBox3);
            this->panel4->Controls->Add(this->label9);
            this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel4->Location = System::Drawing::Point(0, 0);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(849, 146);
            this->panel4->TabIndex = 0;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Silver;
            this->label2->Location = System::Drawing::Point(265, 92);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(141, 46);
            this->label2->TabIndex = 13;
            this->label2->Text = L"Amount";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Silver;
            this->label1->Location = System::Drawing::Point(13, 94);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(90, 46);
            this->label1->TabIndex = 12;
            this->label1->Text = L"Type";
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(10, 16);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(95, 71);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 10;
            this->pictureBox3->TabStop = false;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::Silver;
            this->label9->Location = System::Drawing::Point(122, 28);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(314, 46);
            this->label9->TabIndex = 11;
            this->label9->Text = L"Recent Transactions";
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->totalBalanceLabel);
            this->panel2->Controls->Add(this->pictureBox2);
            this->panel2->Controls->Add(this->label12);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(849, 129);
            this->panel2->TabIndex = 0;
            // 
            // totalBalanceLabel
            // 
            this->totalBalanceLabel->AutoSize = true;
            this->totalBalanceLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->totalBalanceLabel->ForeColor = System::Drawing::Color::RoyalBlue;
            this->totalBalanceLabel->Location = System::Drawing::Point(349, 47);
            this->totalBalanceLabel->Name = L"totalBalanceLabel";
            this->totalBalanceLabel->Size = System::Drawing::Size(115, 40);
            this->totalBalanceLabel->TabIndex = 14;
            this->totalBalanceLabel->Text = L"Balance";
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(10, 27);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(95, 71);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 12;
            this->pictureBox2->TabStop = false;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::Silver;
            this->label12->Location = System::Drawing::Point(118, 39);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(231, 46);
            this->label12->TabIndex = 13;
            this->label12->Text = L"Total Balance: ";
            // 
            // tr_panel
            // 
            this->tr_panel->Controls->Add(this->TrFlowpanel);
            this->tr_panel->Controls->Add(this->panel12);
            this->tr_panel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tr_panel->Location = System::Drawing::Point(0, 0);
            this->tr_panel->Name = L"tr_panel";
            this->tr_panel->Size = System::Drawing::Size(849, 541);
            this->tr_panel->TabIndex = 6;
            // 
            // TrFlowpanel
            // 
            this->TrFlowpanel->AutoScroll = true;
            this->TrFlowpanel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->TrFlowpanel->Location = System::Drawing::Point(0, 110);
            this->TrFlowpanel->Name = L"TrFlowpanel";
            this->TrFlowpanel->Size = System::Drawing::Size(849, 431);
            this->TrFlowpanel->TabIndex = 1;
            // 
            // panel12
            // 
            this->panel12->Controls->Add(this->label28);
            this->panel12->Controls->Add(this->label27);
            this->panel12->Controls->Add(this->label26);
            this->panel12->Controls->Add(this->label25);
            this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel12->Location = System::Drawing::Point(0, 0);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(849, 110);
            this->panel12->TabIndex = 0;
            // 
            // label28
            // 
            this->label28->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label28->Location = System::Drawing::Point(666, 32);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(144, 46);
            this->label28->TabIndex = 12;
            this->label28->Text = L"Account";
            // 
            // label27
            // 
            this->label27->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label27->Location = System::Drawing::Point(236, 33);
            this->label27->Margin = System::Windows::Forms::Padding(50, 0, 3, 0);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(90, 46);
            this->label27->TabIndex = 11;
            this->label27->Text = L"Type";
            // 
            // label26
            // 
            this->label26->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label26->Location = System::Drawing::Point(441, 33);
            this->label26->Margin = System::Windows::Forms::Padding(50, 0, 3, 0);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(141, 46);
            this->label26->TabIndex = 10;
            this->label26->Text = L"Amount";
            // 
            // label25
            // 
            this->label25->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label25->Location = System::Drawing::Point(19, 33);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(91, 46);
            this->label25->TabIndex = 9;
            this->label25->Text = L"Date";
            // 
            // set_panel
            // 
            this->set_panel->Controls->Add(this->panel22);
            this->set_panel->Controls->Add(this->panel21);
            this->set_panel->Controls->Add(this->panel17);
            this->set_panel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->set_panel->Location = System::Drawing::Point(0, 0);
            this->set_panel->Name = L"set_panel";
            this->set_panel->Size = System::Drawing::Size(849, 541);
            this->set_panel->TabIndex = 5;
            // 
            // panel22
            // 
            this->panel22->Controls->Add(this->notificationCheckbox);
            this->panel22->Controls->Add(this->label44);
            this->panel22->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel22->Location = System::Drawing::Point(0, 314);
            this->panel22->Name = L"panel22";
            this->panel22->Size = System::Drawing::Size(849, 127);
            this->panel22->TabIndex = 63;
            // 
            // notificationCheckbox
            // 
            this->notificationCheckbox->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->notificationCheckbox->AutoSize = true;
            this->notificationCheckbox->Checked = true;
            this->notificationCheckbox->CheckState = System::Windows::Forms::CheckState::Checked;
            this->notificationCheckbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->notificationCheckbox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->notificationCheckbox->Location = System::Drawing::Point(276, 36);
            this->notificationCheckbox->Name = L"notificationCheckbox";
            this->notificationCheckbox->Size = System::Drawing::Size(141, 50);
            this->notificationCheckbox->TabIndex = 62;
            this->notificationCheckbox->Text = L"Enable";
            this->notificationCheckbox->UseVisualStyleBackColor = true;
            this->notificationCheckbox->CheckedChanged += gcnew System::EventHandler(this, &Dashboard::notificationCheckbox_CheckedChanged);
            // 
            // label44
            // 
            this->label44->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label44->Location = System::Drawing::Point(19, 38);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(217, 46);
            this->label44->TabIndex = 61;
            this->label44->Text = L"Notifications:";
            // 
            // panel21
            // 
            this->panel21->Controls->Add(this->save_btn);
            this->panel21->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel21->Location = System::Drawing::Point(0, 441);
            this->panel21->Name = L"panel21";
            this->panel21->Size = System::Drawing::Size(849, 100);
            this->panel21->TabIndex = 62;
            // 
            // save_btn
            // 
            this->save_btn->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->save_btn->FlatAppearance->BorderSize = 0;
            this->save_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->save_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->save_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->save_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"save_btn.Image")));
            this->save_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->save_btn->Location = System::Drawing::Point(518, 16);
            this->save_btn->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->save_btn->Name = L"save_btn";
            this->save_btn->Padding = System::Windows::Forms::Padding(1);
            this->save_btn->Size = System::Drawing::Size(322, 70);
            this->save_btn->TabIndex = 14;
            this->save_btn->Text = L"Save Changes";
            this->save_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->save_btn->UseVisualStyleBackColor = true;
            this->save_btn->Click += gcnew System::EventHandler(this, &Dashboard::save_btn_Click);
            // 
            // panel17
            // 
            this->panel17->Controls->Add(this->panel20);
            this->panel17->Controls->Add(this->panel18);
            this->panel17->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel17->Location = System::Drawing::Point(0, 0);
            this->panel17->Name = L"panel17";
            this->panel17->Size = System::Drawing::Size(849, 314);
            this->panel17->TabIndex = 61;
            // 
            // panel20
            // 
            this->panel20->Controls->Add(this->stPasswordTextBox);
            this->panel20->Controls->Add(this->label43);
            this->panel20->Location = System::Drawing::Point(0, 150);
            this->panel20->Name = L"panel20";
            this->panel20->Size = System::Drawing::Size(849, 114);
            this->panel20->TabIndex = 2;
            // 
            // stPasswordTextBox
            // 
            this->stPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->stPasswordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->stPasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->stPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->stPasswordTextBox->Location = System::Drawing::Point(263, 25);
            this->stPasswordTextBox->Name = L"stPasswordTextBox";
            this->stPasswordTextBox->Size = System::Drawing::Size(349, 45);
            this->stPasswordTextBox->TabIndex = 28;
            // 
            // label43
            // 
            this->label43->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label43->Location = System::Drawing::Point(6, 28);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(176, 46);
            this->label43->TabIndex = 27;
            this->label43->Text = L" Password:";
            // 
            // panel18
            // 
            this->panel18->Controls->Add(this->stNameTextBox);
            this->panel18->Controls->Add(this->label41);
            this->panel18->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel18->Location = System::Drawing::Point(0, 0);
            this->panel18->Name = L"panel18";
            this->panel18->Size = System::Drawing::Size(849, 100);
            this->panel18->TabIndex = 0;
            // 
            // stNameTextBox
            // 
            this->stNameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->stNameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->stNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->stNameTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->stNameTextBox->Location = System::Drawing::Point(263, 30);
            this->stNameTextBox->Name = L"stNameTextBox";
            this->stNameTextBox->Size = System::Drawing::Size(349, 45);
            this->stNameTextBox->TabIndex = 24;
            // 
            // label41
            // 
            this->label41->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label41->Location = System::Drawing::Point(22, 30);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(116, 46);
            this->label41->TabIndex = 21;
            this->label41->Text = L"Name:";
            // 
            // Dashboard
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->ClientSize = System::Drawing::Size(1120, 705);
            this->Controls->Add(this->cont_panel);
            this->Controls->Add(this->dashboard_sd_bar);
            this->Controls->Add(this->dashboard_btm_bar);
            this->Controls->Add(this->dashboard_tb_bar);
            this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"Dashboard";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Dashboard";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->dashboard_tb_bar->ResumeLayout(false);
            this->dashboard_tb_bar->PerformLayout();
            this->dashboard_btm_bar->ResumeLayout(false);
            this->dashboard_btm_bar->PerformLayout();
            this->dashboard_sd_bar->ResumeLayout(false);
            this->flowLayoutPanel1->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel23->ResumeLayout(false);
            this->panel23->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->cont_panel->ResumeLayout(false);
            this->acc_panel->ResumeLayout(false);
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            this->panel10->ResumeLayout(false);
            this->newAcc_panel->ResumeLayout(false);
            this->newAcc_panel->PerformLayout();
            this->withdraw_panel->ResumeLayout(false);
            this->withdraw_panel->PerformLayout();
            this->deposit_panel->ResumeLayout(false);
            this->deposit_panel->PerformLayout();
            this->view_panel->ResumeLayout(false);
            this->view_panel->PerformLayout();
            this->panel27->ResumeLayout(false);
            this->panel27->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->transfer_panel->ResumeLayout(false);
            this->transfer_panel->PerformLayout();
            this->hm_panel->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->tr_panel->ResumeLayout(false);
            this->panel12->ResumeLayout(false);
            this->panel12->PerformLayout();
            this->set_panel->ResumeLayout(false);
            this->panel22->ResumeLayout(false);
            this->panel22->PerformLayout();
            this->panel21->ResumeLayout(false);
            this->panel17->ResumeLayout(false);
            this->panel20->ResumeLayout(false);
            this->panel20->PerformLayout();
            this->panel18->ResumeLayout(false);
            this->panel18->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

private: Void GenerateBriefTransactions(FlowLayoutPanel^ flowPanel)
{
    flowPanel->Controls->Clear();
    List<Transaction^>^ allTransactions = customer->GetAllTransactions();
    int i = 0;
    for each (Transaction ^ transaction in allTransactions)
    {
        Panel^ transactionPanel = gcnew Panel();
        transactionPanel->Size = System::Drawing::Size(822, 63);
        transactionPanel->Location = System::Drawing::Point(0, 0);
        transactionPanel->Margin = System::Windows::Forms::Padding(0);
        transactionPanel->Padding = System::Windows::Forms::Padding(6);
        transactionPanel->TabIndex = 16;

        //Add Labels

        // type Label
        Label^ lblDetails = gcnew Label();
        lblDetails->AutoSize = true;
        lblDetails->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        lblDetails->ForeColor = System::Drawing::Color::Silver;
        lblDetails->Location = System::Drawing::Point(9, 14);
        lblDetails->Size = System::Drawing::Size(233, 35);
        lblDetails->TabIndex = 11;
        String^ type = transaction->GetType();
        lblDetails->Text = type;

        

        // Amount Label
        Label^ lblAmount = gcnew Label();
        lblAmount->AutoSize = true;
        lblAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        lblAmount->ForeColor = System::Drawing::Color::Silver;
        lblAmount->Location = System::Drawing::Point(270, 14);
        lblAmount->Size = System::Drawing::Size(233, 35);
        String^ amount = (transaction->GetAmount()).ToString();
        lblAmount->Text = amount;

        // Add the label to the panel
        transactionPanel->Controls->Add(lblAmount);
        transactionPanel->Controls->Add(lblDetails);





        flowPanel->Controls->Add(transactionPanel);
        i++;
        if (i >= 5)
        {
            return;
        }
    }


}

    private: Void GenerateAllTransactions(FlowLayoutPanel^ flowPanel)
    {
        flowPanel->Controls->Clear();
        List<Transaction^>^ allTransactions = customer->GetAllTransactions();
        for each (Transaction ^ transaction in allTransactions)
        {
            Panel^ transactionPanel = gcnew Panel();
            transactionPanel->Dock = System::Windows::Forms::DockStyle::Top;
            transactionPanel->Location = System::Drawing::Point(3, 3);
            transactionPanel->Size = System::Drawing::Size(822, 110);
           

            //Add Labels

            // Date Label
            Label^ lblDate = gcnew Label();
            lblDate->Anchor = System::Windows::Forms::AnchorStyles::Left;
            lblDate->AutoSize = true;
            lblDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            lblDate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            lblDate->Location = System::Drawing::Point(19, 33);
            lblDate->Size = System::Drawing::Size(80, 41);
            DateTime date = transaction->GetDate();
            lblDate->Text = date.ToString("MM/dd/yyyy");

    
           

            // type Label
            Label^ lblType = gcnew Label();
            lblType->Anchor = System::Windows::Forms::AnchorStyles::Left;
            lblType->AutoSize = true;
            lblType->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            lblType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            lblType->Location = System::Drawing::Point(236, 33);
            lblType->Margin = System::Windows::Forms::Padding(50, 0, 3, 0);
            lblType->Size = System::Drawing::Size(81, 41);
            lblType->Text = transaction->GetType();

            // amount Label
            Label^ lblAmount = gcnew Label();
            lblAmount->Anchor = System::Windows::Forms::AnchorStyles::Left;
            lblAmount->AutoSize = true;
            lblAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            lblAmount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            lblAmount->Location = System::Drawing::Point(441, 33);
            lblAmount->Margin = System::Windows::Forms::Padding(50, 0, 3, 0);
            lblAmount->Size = System::Drawing::Size(125, 41);
            lblAmount->Text = (transaction->GetAmount()).ToString();

            // Account Label
            Label^ accountlbl = gcnew Label();
            accountlbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
            accountlbl->AutoSize = true;
            accountlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            accountlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            accountlbl->Location = System::Drawing::Point(666, 32);
            accountlbl->Size = System::Drawing::Size(127, 41);
            accountlbl->TabIndex = 12;
            accountlbl->Text = (transaction->GetSourceAccount()->GetAccountNumber()).ToString();

            

            // Add the label to the panel
            transactionPanel->Controls->Add(lblType);
            transactionPanel->Controls->Add(lblDate);
            transactionPanel->Controls->Add(lblAmount);
            transactionPanel->Controls->Add(accountlbl);





            flowPanel->Controls->Add(transactionPanel);


        }
    }


     private: Void GenerateAccounts(FlowLayoutPanel^ flowPanel)
     {
         flowPanel->Controls->Clear();
         List<Account^>^ accounts;
         accounts = customer->GetAccounts();

         for each(Account^ account in accounts)
         {
             Panel^ accountPanel = gcnew Panel();
             accountPanel->Dock = System::Windows::Forms::DockStyle::Top;
             accountPanel->Location = System::Drawing::Point(3, 3);
             accountPanel->Size = System::Drawing::Size(822, 156);
            

             // Account Number Label
             Label^ accountNumber = gcnew Label();
             accountNumber->Anchor = System::Windows::Forms::AnchorStyles::None;
             accountNumber->AutoSize = true;
             accountNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                 static_cast<System::Byte>(0)));
             accountNumber->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                 static_cast<System::Int32>(static_cast<System::Byte>(224)));
             accountNumber->Location = System::Drawing::Point(22, 60);
             accountNumber->Size = System::Drawing::Size(127, 41);
             accountNumber->Text = (account->GetAccountNumber()).ToString();

             // Account Balance label
             Label^ accountBalance = gcnew Label();
             accountBalance->Anchor = System::Windows::Forms::AnchorStyles::None;
             accountBalance->AutoSize = true;
             accountBalance->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                 static_cast<System::Byte>(0)));
             accountBalance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                 static_cast<System::Int32>(static_cast<System::Byte>(224)));
             accountBalance->Location = System::Drawing::Point(192, 57);
             accountBalance->Size = System::Drawing::Size(198, 41);
             
             accountBalance->Text = (account->GetBalance()).ToString();

             // Withdraw Button
             Button^ withdrawButton = gcnew Button();
             withdrawButton->FlatAppearance->BorderSize = 0;
             withdrawButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
             withdrawButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                 static_cast<System::Byte>(0)));
             withdrawButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                 static_cast<System::Int32>(static_cast<System::Byte>(224)));
             withdrawButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
             withdrawButton->Location = System::Drawing::Point(607, 10);
             withdrawButton->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
             withdrawButton->Padding = System::Windows::Forms::Padding(1);
             withdrawButton->Size = System::Drawing::Size(93, 67);
             withdrawButton->TabIndex = 4;
             withdrawButton->Text = L"Withdraw";
             withdrawButton->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
             withdrawButton->UseVisualStyleBackColor = true;
             withdrawButton->Click += gcnew System::EventHandler(this, &Dashboard::withdrawButtonOnclick);
             // Load and Set Image (Replace with your image path)
             withdrawButton->Image = Image::FromFile("icons/moneywithdrawal.png");
             withdrawButton->Tag = account;  // Store the panel inside the button for reference

             // Deposit Button
             Button^ depositButton = gcnew Button();
             depositButton->FlatAppearance->BorderSize = 0;
             depositButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
             depositButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                 static_cast<System::Byte>(0)));
             depositButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                 static_cast<System::Int32>(static_cast<System::Byte>(224)));
             depositButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
             depositButton->Location = System::Drawing::Point(706, 10);
             depositButton->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
             depositButton->Padding = System::Windows::Forms::Padding(1);
             depositButton->Size = System::Drawing::Size(93, 67);
             depositButton->Text = L"Deposit";
             depositButton->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
             depositButton->UseVisualStyleBackColor = true;
             depositButton->Click += gcnew System::EventHandler(this, &Dashboard::depositeButtonOnclick);
             // Load and Set Image (Replace with your image path)
             depositButton->Image = Image::FromFile("icons/deposit.png");
             depositButton->Tag = account;  // Store the panel inside the button for reference

             // View Button
             Button^ viewButton = gcnew Button();
             viewButton->FlatAppearance->BorderSize = 0;
             viewButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
             viewButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                 static_cast<System::Byte>(0)));
             viewButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                 static_cast<System::Int32>(static_cast<System::Byte>(224)));
             viewButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
             viewButton->Location = System::Drawing::Point(607, 73);
             viewButton->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
             viewButton->Padding = System::Windows::Forms::Padding(1);
             viewButton->Size = System::Drawing::Size(93, 67);
             viewButton->Text = L"View";
             viewButton->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
             viewButton->UseVisualStyleBackColor = true;
             viewButton->Click += gcnew System::EventHandler(this, &Dashboard::viewButtonOnclick);
             // Load and Set Image (Replace with your image path)
             viewButton->Image = Image::FromFile("icons/analysis.png");
             viewButton->Tag = account;  // Store the panel inside the button for reference

             //Transfer Button
             Button^ transferButton = gcnew Button();
             transferButton->FlatAppearance->BorderSize = 0;
             transferButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
             transferButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                 static_cast<System::Byte>(0)));
             transferButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                 static_cast<System::Int32>(static_cast<System::Byte>(224)));
             transferButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
             transferButton->Location = System::Drawing::Point(706, 73);
             transferButton->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
             transferButton->Padding = System::Windows::Forms::Padding(1);
             transferButton->Size = System::Drawing::Size(93, 67);
             transferButton->Text = L"Transfer";
             transferButton->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
             transferButton->UseVisualStyleBackColor = true;
             transferButton->Click += gcnew System::EventHandler(this, &Dashboard::transferButtonOnclick);
             // Load and Set Image (Replace with your image path)
             transferButton->Image = Image::FromFile("icons/transfer.png");
             transferButton->Tag = account;  // Store the panel inside the button for reference





             accountPanel->Controls->Add(accountNumber);
             accountPanel->Controls->Add(accountBalance);
             accountPanel->Controls->Add(withdrawButton);
             accountPanel->Controls->Add(depositButton);
             accountPanel->Controls->Add(viewButton);
             accountPanel->Controls->Add(transferButton);


             flowPanel->Controls->Add(accountPanel);
         }
     }
	private: System::Void hm_button_Click(System::Object^ sender, System::EventArgs^ e) {
		hm_panel->BringToFront();
        notificationLabel->Text = "Notes and Notifications";
        title->Text = "Home";

        totalBalanceLabel->Text = (customer->GetBalance()).ToString();

        GenerateBriefTransactions(hmTransactionFlowPanel);






	}
private: System::Void acc_button_Click(System::Object^ sender, System::EventArgs^ e) {
	acc_panel->BringToFront();
    notificationLabel->Text = "Notes and Notifications";
	title->Text = "Accounts";

    GenerateAccounts(accountsPanel);
}
private: System::Void tr_button_Click(System::Object^ sender, System::EventArgs^ e) {
	tr_panel->BringToFront();
    notificationLabel->Text = "Notes and Notifications";
	title->Text = "Transactions";

    GenerateAllTransactions(TrFlowpanel);
}
private: System::Void set_button_Click(System::Object^ sender, System::EventArgs^ e) {
	set_panel->BringToFront();
    notificationLabel->Text = "Notes and Notifications";
    stNameTextBox->Text = customer->GetName();
    stPasswordTextBox->Text = customer->GetPassword();
	title->Text = "Settings";

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    Environment::Exit(0);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->WindowState == FormWindowState::Maximized)
    {
        this->WindowState = FormWindowState::Normal;
    }
    else
    {
        this->WindowState = FormWindowState::Maximized;
    }
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    
    this->WindowState = FormWindowState::Minimized;
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dashboard_sd_bar->Width == 271)
    {
        dashboard_sd_bar->Width = 60;
        panel23->Visible=false;
    }
    else
    {
        dashboard_sd_bar->Width = 271;
        panel23->Visible=true;

    }
}
private: System::Void label43_login_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
    notificationLabel->Text = "Notes and Notifications";
    if (FrntAccPanel == addAccount)
    {
        if ( addAccountInitialDeposit->Text == "")
        {
            notificationLabel->Text = "Enter sufficient data to create the new account!";
            return;
        }
        double initialDeposit;
       
        String^ input = addAccountInitialDeposit->Text;
       
       
        if (!(Double::TryParse(input, initialDeposit)))
        {
            notificationLabel->Text = "Enter valid initial deposit to create the new account!";
            return;
        }
        else
        {
            Account^ newAccount = gcnew Account( initialDeposit);
            customer->AddAccount(newAccount);
            notificationLabel->Text = "New account created successfully!";
        }
        cncl_button->Visible = false;
        accountsPanel->Visible = true;
        newAcc_panel->SendToBack();
        FrntAccPanel = mainAccPnl;
        GenerateAccounts(accountsPanel);
        addAccountInitialDeposit->Text = "";
        return;
    }
    newAcc_panel->BringToFront();
    accountsPanel->Visible = false;
    cncl_button->Visible = true;
    FrntAccPanel = addAccount;
}
private: System::Void cncl_button_Click(System::Object^ sender, System::EventArgs^ e) {
    cncl_button->Visible = false;
    accountsPanel->Visible = true;
    if (FrntAccPanel == addAccount)
    {
        newAcc_panel->SendToBack();
        addAccountInitialDeposit->Text = "";
    }
    else if (FrntAccPanel == withdraw)
    {
        withdraw_panel->SendToBack();
        withdraw_button->Visible = false;
        addAcc_button->Visible = true;
        withdrawAmounttextBox->Text = "";
    }
    else if (FrntAccPanel == deposite)
    {
        deposit_panel->SendToBack();
        deposit_button->Visible = false;
        addAcc_button->Visible = true;
        depositAmount->Text = "";
    }
    else if (FrntAccPanel == transfer)
    {
        trnsfrAmount->Text = "";
        trnsfrtoAcc->Text = "";
        transfer_panel->SendToBack();
        transfer_button->Visible = false;
        addAcc_button->Visible = true;
    }
    FrntAccPanel = mainAccPnl;
    
}
private: Void withdrawButtonOnclick(System::Object^ sender, System::EventArgs^ e) {
    notificationLabel->Text = "Notes and Notifications";
    FrntAccPanel = withdraw;
    withdraw_button->Visible = true;
    withdraw_panel->BringToFront();
    addAcc_button->Visible = false;
    cncl_button->Visible = true;
    accountsPanel->Visible = false;

    Button^ clickedButton = safe_cast<Button^>(sender);
    // Retrieve the account pointer stored in the button's Tag
    Account^ account = safe_cast<Account^>(clickedButton->Tag);
    currentAccount = account;
    withdrawAccNumberlbl->Text = (currentAccount->GetAccountNumber()).ToString();

}
private: System::Void depositeButtonOnclick(System::Object^ sender, System::EventArgs^ e) {
    notificationLabel->Text = "Notes and Notifications";
    FrntAccPanel = deposite;
    deposit_button->Visible = true;
    deposit_panel->BringToFront();
    addAcc_button->Visible = false;
    cncl_button->Visible = true;
    accountsPanel->Visible = false;

    Button^ clickedButton = safe_cast<Button^>(sender);
    // Retrieve the account pointer stored in the button's Tag
    Account^ account = safe_cast<Account^>(clickedButton->Tag);
    currentAccount = account;
    depositAccNumberlbl->Text = (currentAccount->GetAccountNumber()).ToString();

   

}
private: System::Void viewButtonOnclick(System::Object^ sender, System::EventArgs^ e) {
    notificationLabel->Text = "Notes and Notifications";
    FrntAccPanel = view;
    addAcc_button->Visible = false;
    view_panel->BringToFront();
    back_button->Visible = true;
    accountsPanel->Visible = false;

    Button^ clickedButton = safe_cast<Button^>(sender);
    // Retrieve the account pointer stored in the button's Tag
    Account^ account = safe_cast<Account^>(clickedButton->Tag);
    currentAccount = account;

    viewAccNumberlbl->Text = (account->GetAccountNumber()).ToString();
    viewAccBalancelbl->Text = (account->GetBalance()).ToString();

    accountTransactionPanel->Controls->Clear();
    for each (Transaction ^ transaction in account->GetTransactions())
    {
        Panel^ transactionPanel = gcnew Panel();
        transactionPanel->Location = System::Drawing::Point(0, 0);
        transactionPanel->Margin = System::Windows::Forms::Padding(0);
        transactionPanel->Padding = System::Windows::Forms::Padding(6);
        transactionPanel->Size = System::Drawing::Size(822, 63);

        // Labels 
        Label^ typelbl = gcnew Label();
        typelbl->AutoSize = true;
        typelbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        typelbl->ForeColor = System::Drawing::Color::Silver;
        typelbl->Location = System::Drawing::Point(9, 14);
        typelbl->Size = System::Drawing::Size(233, 35);
        typelbl->Text = transaction->GetType();

        Label^ amountlbl = gcnew Label();
        amountlbl->AutoSize = true;
        amountlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        amountlbl->ForeColor = System::Drawing::Color::Silver;
        amountlbl->Location = System::Drawing::Point(270, 14);
        amountlbl->Size = System::Drawing::Size(233, 35);
        amountlbl->Text = (transaction->GetAmount()).ToString();
        
        transactionPanel->Controls->Add(typelbl);
        transactionPanel->Controls->Add(amountlbl);

        accountTransactionPanel->Controls->Add(transactionPanel);
      

    }




}
private: System::Void back_button_Click(System::Object^ sender, System::EventArgs^ e) {
    back_button->Visible = false;
    view_panel->SendToBack();
    addAcc_button->Visible = true;
    accountsPanel->Visible = true;
    FrntAccPanel = mainAccPnl;
}
private: System::Void transferButtonOnclick(System::Object^ sender, System::EventArgs^ e) {
    notificationLabel->Text = "Leave customer empty if transfer is between current customer's accounts";
    FrntAccPanel = transfer;
    addAcc_button->Visible = false;
    cncl_button->Visible = true;
    transfer_button->Visible = true;
    transfer_panel->BringToFront();
    accountsPanel->Visible = false;

    Button^ clickedButton = safe_cast<Button^>(sender);
    // Retrieve the account pointer stored in the button's Tag
    Account^ account = safe_cast<Account^>(clickedButton->Tag);
    currentAccount = account;

    trnsfrFromAcc->Text = (account->GetAccountNumber()).ToString();

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void notificationCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (notificationCheckbox->Checked == true)
    {
        notificationLabel->Visible = true;
    }
    else
        notificationLabel->Visible = false;
}
private: System::Void save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    customer->SetName(stNameTextBox->Text);
    customer->SetPassword(stPasswordTextBox->Text);
    customerLabel->Text = customer->GetName();
    notificationLabel->Text = "changes have been saved successfully!";
}
private: System::Void transfer_button_Click(System::Object^ sender, System::EventArgs^ e) {

    int toAccountNumber;
    Account^ targetAccount = nullptr;
    Customer^ toCustomer;
    double amount;

    if (toCustomerTextBox->Text != "")
    {
        
        toCustomer = bankManager->GetCustomer(toCustomerTextBox->Text);
        if (toCustomer == nullptr)
        {
            notificationLabel->Text = "The customer not found!";
            return;
        }

    }
    else
    {
        toCustomer = customer;
    }
        if (Int32::TryParse(trnsfrtoAcc->Text, toAccountNumber))
        {
            for each (Account ^ account in toCustomer->GetAccounts())
            {
                if (toAccountNumber == account->GetAccountNumber())
                {
                    targetAccount = account;
                    break;
                }
            }
            if (targetAccount != nullptr)
            {
                if (Double::TryParse(trnsfrAmount->Text, amount))
                {
                    if (bankManager->Transfer(toCustomer,currentAccount, targetAccount->GetAccountNumber(), amount))
                    {
                        notificationLabel->Text = "Successful Transfer!";
                        cncl_button->Visible = false;
                        accountsPanel->Visible = true;
                        transfer_panel->SendToBack();
                        transfer_button->Visible = false;
                        addAcc_button->Visible = true;
                        FrntAccPanel = mainAccPnl;
                        trnsfrAmount->Text = "";
                        trnsfrtoAcc->Text = "";
                        toCustomerTextBox->Text = "";
                        GenerateAccounts(accountsPanel);
                    }
                    else
                    {
                        notificationLabel->Text = "Insufficient Balance!";
                    }
                    return;
                }
                else
                {
                    notificationLabel->Text = "Invalid Amount";
                    return;
                }
            }
            else
            {
                notificationLabel->Text = "Target account not found!";
                return;

            }
        }
    

}
private: System::Void deposit_button_Click(System::Object^ sender, System::EventArgs^ e) {

   

    double amount;
    if (Double::TryParse(depositAmount->Text, amount))
    {
        bankManager->Deposit(currentAccount, amount);
        notificationLabel->Text = "Successful Deposit";
        cncl_button->Visible = false;
        accountsPanel->Visible = true;
        deposit_panel->SendToBack();
        deposit_button->Visible = false;
        addAcc_button->Visible = true;
        GenerateAccounts(accountsPanel);
        depositAmount->Text = "";
        FrntAccPanel = mainAccPnl;
       
    }
    else
    {
        notificationLabel->Text = "Invalid Input!";
    }
}
private: System::Void withdraw_button_Click(System::Object^ sender, System::EventArgs^ e) {

   
    double amount;
    if (Double::TryParse(withdrawAmounttextBox->Text, amount))
    {
        if (bankManager->Withdraw(currentAccount, amount))
        {
            notificationLabel->Text = "Successful withdrawal";

            cncl_button->Visible = false;
            accountsPanel->Visible = true;
            withdraw_panel->SendToBack();
            withdraw_button->Visible = false;
            addAcc_button->Visible = true;
            FrntAccPanel = mainAccPnl;
            GenerateAccounts(accountsPanel);
            withdrawAmounttextBox->Text = "";
        }
        else
        {
            notificationLabel->Text = "Insufficient account balance!";
        }

    }
    else
    {
        notificationLabel->Text = "Invalid Input!";
    }

}
};
}
