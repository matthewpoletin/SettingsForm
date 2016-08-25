#pragma once

#include "Settings.h"

//#include "ComponentsValidation.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
		{
			InitializeComponent();
		}

		bool Init(Settings^ settings)
		{
			this->settings = settings;

			this->LoadSettings();

			return true;
		}

	protected:
		Settings^ settings;

	protected:
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^  tabControlSettings;
	private: System::Windows::Forms::TabPage^  tabPageSettings;
	private:
		System::Windows::Forms::CheckBox^  checkBoxUseRubberPad;
		System::Windows::Forms::TextBox^  textBoxRubberPadSize;
		System::Windows::Forms::Label^  labelRubberPadSize;

	private:
		System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
		System::Windows::Forms::Button^  buttonSave;
		System::Windows::Forms::Button^  buttonCancel;

	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
				 this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->buttonSave = (gcnew System::Windows::Forms::Button());
				 this->buttonCancel = (gcnew System::Windows::Forms::Button());
				 this->tabPageSettings = (gcnew System::Windows::Forms::TabPage());
				 this->textBoxRubberPadSize = (gcnew System::Windows::Forms::TextBox());
				 this->checkBoxUseRubberPad = (gcnew System::Windows::Forms::CheckBox());
				 this->labelRubberPadSize = (gcnew System::Windows::Forms::Label());
				 this->tabControlSettings = (gcnew System::Windows::Forms::TabControl());
				 this->tableLayoutPanel1->SuspendLayout();
				 this->tabPageSettings->SuspendLayout();
				 this->tabControlSettings->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // tableLayoutPanel1
				 // 
				 this->tableLayoutPanel1->ColumnCount = 2;
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 50)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 50)));
				 this->tableLayoutPanel1->Controls->Add(this->buttonSave, 0, 0);
				 this->tableLayoutPanel1->Controls->Add(this->buttonCancel, 1, 0);
				 this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
				 this->tableLayoutPanel1->Location = System::Drawing::Point(0, 153);
				 this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
				 this->tableLayoutPanel1->RowCount = 1;
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
				 this->tableLayoutPanel1->Size = System::Drawing::Size(357, 42);
				 this->tableLayoutPanel1->TabIndex = 7;
				 // 
				 // buttonSave
				 // 
				 this->buttonSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->buttonSave->Location = System::Drawing::Point(3, 3);
				 this->buttonSave->Name = L"buttonSave";
				 this->buttonSave->Size = System::Drawing::Size(172, 36);
				 this->buttonSave->TabIndex = 4;
				 this->buttonSave->Text = L"Сохранить";
				 this->buttonSave->UseVisualStyleBackColor = true;
				 this->buttonSave->Click += gcnew System::EventHandler(this, &SettingsForm::buttonSave_Click);
				 // 
				 // buttonCancel
				 // 
				 this->buttonCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
				 this->buttonCancel->Location = System::Drawing::Point(181, 3);
				 this->buttonCancel->Name = L"buttonCancel";
				 this->buttonCancel->Size = System::Drawing::Size(173, 36);
				 this->buttonCancel->TabIndex = 5;
				 this->buttonCancel->Text = L"Отмена";
				 this->buttonCancel->UseVisualStyleBackColor = true;
				 this->buttonCancel->Click += gcnew System::EventHandler(this, &SettingsForm::buttonCancel_Click);
				 // 
				 // tabPageSettings
				 // 
				 this->tabPageSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
					 static_cast<System::Int32>(static_cast<System::Byte>(189)));
				 this->tabPageSettings->Controls->Add(this->textBoxRubberPadSize);
				 this->tabPageSettings->Controls->Add(this->checkBoxUseRubberPad);
				 this->tabPageSettings->Controls->Add(this->labelRubberPadSize);
				 this->tabPageSettings->Location = System::Drawing::Point(4, 22);
				 this->tabPageSettings->Name = L"tabPageSettings";
				 this->tabPageSettings->Padding = System::Windows::Forms::Padding(3);
				 this->tabPageSettings->Size = System::Drawing::Size(349, 127);
				 this->tabPageSettings->TabIndex = 0;
				 this->tabPageSettings->Text = L"Параметры";
				 // 
				 // textBoxRubberPadSize
				 // 
				 this->textBoxRubberPadSize->Location = System::Drawing::Point(25, 29);
				 this->textBoxRubberPadSize->Name = L"textBoxRubberPadSize";
				 this->textBoxRubberPadSize->Size = System::Drawing::Size(40, 20);
				 this->textBoxRubberPadSize->TabIndex = 7;
				 this->textBoxRubberPadSize->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SettingsForm::textBoxRubberPadSize_KeyPress);
				 // 
				 // checkBoxUseRubberPad
				 // 
				 this->checkBoxUseRubberPad->Location = System::Drawing::Point(8, 6);
				 this->checkBoxUseRubberPad->Name = L"checkBoxUseRubberPad";
				 this->checkBoxUseRubberPad->Size = System::Drawing::Size(138, 17);
				 this->checkBoxUseRubberPad->TabIndex = 0;
				 this->checkBoxUseRubberPad->Text = L"Резиновая прокладка";
				 this->checkBoxUseRubberPad->UseVisualStyleBackColor = true;
				 this->checkBoxUseRubberPad->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::checkBoxUseRubberPad_CheckedChanged);
				 // 
				 // labelRubberPadSize
				 // 
				 this->labelRubberPadSize->Location = System::Drawing::Point(71, 32);
				 this->labelRubberPadSize->Name = L"labelRubberPadSize";
				 this->labelRubberPadSize->Size = System::Drawing::Size(99, 13);
				 this->labelRubberPadSize->TabIndex = 6;
				 this->labelRubberPadSize->Text = L"Толщина прокладки";
				 // 
				 // tabControlSettings
				 // 
				 this->tabControlSettings->Controls->Add(this->tabPageSettings);
				 this->tabControlSettings->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tabControlSettings->Location = System::Drawing::Point(0, 0);
				 this->tabControlSettings->Name = L"tabControlSettings";
				 this->tabControlSettings->SelectedIndex = 0;
				 this->tabControlSettings->Size = System::Drawing::Size(357, 153);
				 this->tabControlSettings->TabIndex = 8;
				 // 
				 // SettingsForm
				 // 
				 this->AcceptButton = this->buttonSave;
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
					 static_cast<System::Int32>(static_cast<System::Byte>(189)));
				 this->CancelButton = this->buttonCancel;
				 this->ClientSize = System::Drawing::Size(357, 195);
				 this->Controls->Add(this->tabControlSettings);
				 this->Controls->Add(this->tableLayoutPanel1);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				 this->MaximizeBox = false;
				 this->MinimizeBox = false;
				 this->Name = L"SettingsForm";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Настройки";
				 this->Load += gcnew System::EventHandler(this, &SettingsForm::SettingsForm_Load);
				 this->tableLayoutPanel1->ResumeLayout(false);
				 this->tabPageSettings->ResumeLayout(false);
				 this->tabPageSettings->PerformLayout();
				 this->tabControlSettings->ResumeLayout(false);
				 this->ResumeLayout(false);

			 }
#pragma endregion

	private:
		void LoadSettings()
		{
			this->checkBoxUseRubberPad->Checked = settings->bUseRubberPad;
			textBoxRubberPadSize->Text = System::Convert::ToString(settings->rubberPadSize);
		}

		// Загрузка формы, обновление вида согласно настройкам
	private:
		System::Void SettingsForm_Load(System::Object^  sender, System::EventArgs^  e)
		{
			UpdateTextBoxUseRubberPad();
		}

	private:
		System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e)
		{
			settings->bUseRubberPad = checkBoxUseRubberPad->Checked;
			float rubberPadSize = float::Parse(textBoxRubberPadSize->Text);

			if (!(rubberPadSize < 5 && rubberPadSize > 0) || !float::TryParse(textBoxRubberPadSize->Text, settings->rubberPadSize))
			{
				return;
			}
			this->DialogResult == System::Windows::Forms::DialogResult::OK;
			this->Close();
		}

		System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e)
		{
			this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Close();
		}

	private:
		void UpdateTextBoxUseRubberPad()
		{
			if (checkBoxUseRubberPad->Checked)
			{
				textBoxRubberPadSize->Enabled = true;
			}
			else
			{
				textBoxRubberPadSize->Enabled = false;
			}
		}

	private:
		System::Void checkBoxUseRubberPad_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		{
			UpdateTextBoxUseRubberPad();
		}

	private:
		System::Void textBoxRubberPadSize_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
		{
			//CheckFloatInKeyPress(e);
		}

	};
}