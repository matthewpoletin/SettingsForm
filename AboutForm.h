#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		AboutForm(void)
		{
			InitializeComponent();
		}

	protected:
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelMain;
		System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelContent;
		System::Windows::Forms::Label^  labelVersionName;
		System::Windows::Forms::Label^  labelVerisonNumber;
		System::Windows::Forms::LinkLabel^  linkLabelSite;
		System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::LinkLabel^  linkLabelManual;


		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->tableLayoutPanelMain = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanelContent = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelVerisonNumber = (gcnew System::Windows::Forms::Label());
			this->labelVersionName = (gcnew System::Windows::Forms::Label());
			this->linkLabelSite = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabelManual = (gcnew System::Windows::Forms::LinkLabel());
			this->tableLayoutPanelMain->SuspendLayout();
			this->tableLayoutPanelContent->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanelMain
			// 
			this->tableLayoutPanelMain->ColumnCount = 1;
			this->tableLayoutPanelMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanelMain->Controls->Add(this->buttonOK, 0, 1);
			this->tableLayoutPanelMain->Controls->Add(this->tableLayoutPanelContent, 0, 0);
			this->tableLayoutPanelMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanelMain->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanelMain->Name = L"tableLayoutPanelMain";
			this->tableLayoutPanelMain->RowCount = 2;
			this->tableLayoutPanelMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				84.0604F)));
			this->tableLayoutPanelMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				15.9396F)));
			this->tableLayoutPanelMain->Size = System::Drawing::Size(224, 207);
			this->tableLayoutPanelMain->TabIndex = 1;
			// 
			// buttonOK
			// 
			this->buttonOK->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonOK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonOK->Location = System::Drawing::Point(3, 177);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(218, 27);
			this->buttonOK->TabIndex = 0;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &AboutForm::buttonOK_Click);
			// 
			// tableLayoutPanelContent
			// 
			this->tableLayoutPanelContent->ColumnCount = 2;
			this->tableLayoutPanelContent->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanelContent->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanelContent->Controls->Add(this->labelVerisonNumber, 1, 0);
			this->tableLayoutPanelContent->Controls->Add(this->labelVersionName, 0, 0);
			this->tableLayoutPanelContent->Controls->Add(this->linkLabelSite, 1, 1);
			this->tableLayoutPanelContent->Controls->Add(this->linkLabelManual, 0, 1);
			this->tableLayoutPanelContent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanelContent->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanelContent->Name = L"tableLayoutPanelContent";
			this->tableLayoutPanelContent->RowCount = 2;
			this->tableLayoutPanelContent->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelContent->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelContent->Size = System::Drawing::Size(218, 168);
			this->tableLayoutPanelContent->TabIndex = 1;
			// 
			// labelVerisonNumber
			// 
			this->labelVerisonNumber->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelVerisonNumber->AutoSize = true;
			this->labelVerisonNumber->Location = System::Drawing::Point(117, 35);
			this->labelVerisonNumber->Name = L"labelVerisonNumber";
			this->labelVerisonNumber->Size = System::Drawing::Size(68, 13);
			this->labelVerisonNumber->TabIndex = 2;
			this->labelVerisonNumber->Text = L"1.4.0-release";
			// 
			// labelVersionName
			// 
			this->labelVersionName->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->labelVersionName->AutoSize = true;
			this->labelVersionName->Location = System::Drawing::Point(64, 35);
			this->labelVersionName->Name = L"labelVersionName";
			this->labelVersionName->Size = System::Drawing::Size(47, 13);
			this->labelVersionName->TabIndex = 0;
			this->labelVersionName->Text = L"Версия:";
			// 
			// linkLabelSite
			// 
			this->linkLabelSite->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->linkLabelSite->AutoSize = true;
			this->linkLabelSite->Location = System::Drawing::Point(117, 119);
			this->linkLabelSite->Name = L"linkLabelSite";
			this->linkLabelSite->Size = System::Drawing::Size(98, 13);
			this->linkLabelSite->TabIndex = 3;
			this->linkLabelSite->TabStop = true;
			this->linkLabelSite->Text = L"Преобразователи";
			this->linkLabelSite->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabelSite->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AboutForm::linkLabelSite_LinkClicked);
			// 
			// linkLabelManual
			// 
			this->linkLabelManual->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->linkLabelManual->AutoSize = true;
			this->linkLabelManual->Location = System::Drawing::Point(18, 113);
			this->linkLabelManual->Name = L"linkLabelManual";
			this->linkLabelManual->Size = System::Drawing::Size(78, 26);
			this->linkLabelManual->TabIndex = 4;
			this->linkLabelManual->TabStop = true;
			this->linkLabelManual->Text = L"Руководство пользователя";
			this->linkLabelManual->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabelManual->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AboutForm::linkLabelManual_LinkClicked);
			// 
			// AboutForm
			// 
			this->AcceptButton = this->buttonOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(224, 207);
			this->Controls->Add(this->tableLayoutPanelMain);
			this->Name = L"AboutForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"О программе";
			this->Load += gcnew System::EventHandler(this, &AboutForm::AboutForm_Load);
			this->tableLayoutPanelMain->ResumeLayout(false);
			this->tableLayoutPanelContent->ResumeLayout(false);
			this->tableLayoutPanelContent->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		System::Void AboutForm_Load(System::Object^  sender, System::EventArgs^  e)
		{
			String^ versionNumber = "1.4.0";
			String^ versionConfigurationType;
			String^ versionConfigurationNumber;

		#ifdef NDEBUG
			versionConfigurationType = "release";
		#else
			versionConfigurationType = "beta";
			versionConfigurationNumber = "1";
		#endif
			this->labelVerisonNumber->Text = versionNumber + "-" + versionConfigurationType + "." + versionConfigurationNumber;
		}

	private:
		System::Void linkLabelSite_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
		{
			System::Diagnostics::Process^ myProcess = gcnew System::Diagnostics::Process();
			myProcess->StartInfo->UseShellExecute = true;
			myProcess->StartInfo->FileName = "http://www.acsys.ru/production/preobrazovateli/";
			myProcess->Start();
		}

	private:
		System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e)
		{
			this->Close();
		}

	private:
		System::Void linkLabelManual_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
		{
			String^ manualName = System::IO::Directory::GetCurrentDirectory() + "/Руководство пользователя.pdf";
			if(System::IO::File::Exists(manualName))
			{
				System::Diagnostics::Process^ myProcess = gcnew System::Diagnostics::Process();
				myProcess->StartInfo->UseShellExecute = true;
				myProcess->StartInfo->FileName = manualName;
				myProcess->Start();
			}
			else
			{
				if (System::Windows::Forms::DialogResult::Yes == System::Windows::Forms::MessageBox::Show("Файл руководства пользователя не найден! Открыть файл в интернете?", "Ошибка", MessageBoxButtons::YesNo))
				{
					System::Diagnostics::Process^ myProcess = gcnew System::Diagnostics::Process();
					myProcess->StartInfo->UseShellExecute = true;
					myProcess->StartInfo->FileName = "https://drive.google.com/file/d/0B2D5NaenPPCFaTMtNXNkd0pWeTg/view?usp=sharing";
					//myProcess->StartInfo->WindowStyle = System::Diagnostics::ProcessWindowStyle::Maximized;
					myProcess->Start();
				}
			}
		}

	};
}
