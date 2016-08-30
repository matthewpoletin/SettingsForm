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
	private: System::Windows::Forms::TextBox^  textBoxPerformer;
	public:
	private: System::Windows::Forms::Label^  labelPerformer;

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

	private:
		System::Windows::Forms::TabControl^  tabControlSettings;
		System::Windows::Forms::TabPage^  tabPageSettings;
		System::Windows::Forms::TabPage^  tabPagePerformer;

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
				 this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->buttonSave = (gcnew System::Windows::Forms::Button());
				 this->buttonCancel = (gcnew System::Windows::Forms::Button());
				 this->tabPageSettings = (gcnew System::Windows::Forms::TabPage());
				 this->textBoxRubberPadSize = (gcnew System::Windows::Forms::TextBox());
				 this->checkBoxUseRubberPad = (gcnew System::Windows::Forms::CheckBox());
				 this->labelRubberPadSize = (gcnew System::Windows::Forms::Label());
				 this->tabControlSettings = (gcnew System::Windows::Forms::TabControl());
				 this->tabPagePerformer = (gcnew System::Windows::Forms::TabPage());
				 this->textBoxPerformer = (gcnew System::Windows::Forms::TextBox());
				 this->labelPerformer = (gcnew System::Windows::Forms::Label());
				 this->tableLayoutPanel1->SuspendLayout();
				 this->tabPageSettings->SuspendLayout();
				 this->tabControlSettings->SuspendLayout();
				 this->tabPagePerformer->SuspendLayout();
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
				 this->buttonSave->TabIndex = 0;
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
				 this->buttonCancel->TabIndex = 1;
				 this->buttonCancel->Text = L"Отмена";
				 this->buttonCancel->UseVisualStyleBackColor = true;
				 this->buttonCancel->Click += gcnew System::EventHandler(this, &SettingsForm::buttonCancel_Click);
				 // 
				 // tabPageSettings
				 // 
				 this->tabPageSettings->BackColor = System::Drawing::Color::Transparent;
				 this->tabPageSettings->Controls->Add(this->textBoxRubberPadSize);
				 this->tabPageSettings->Controls->Add(this->checkBoxUseRubberPad);
				 this->tabPageSettings->Controls->Add(this->labelRubberPadSize);
				 this->tabPageSettings->Location = System::Drawing::Point(4, 22);
				 this->tabPageSettings->Name = L"tabPageSettings";
				 this->tabPageSettings->Size = System::Drawing::Size(349, 127);
				 this->tabPageSettings->TabIndex = 0;
				 this->tabPageSettings->Text = L"Параметры";
				 // 
				 // textBoxRubberPadSize
				 // 
				 this->textBoxRubberPadSize->Location = System::Drawing::Point(25, 29);
				 this->textBoxRubberPadSize->Name = L"textBoxRubberPadSize";
				 this->textBoxRubberPadSize->Size = System::Drawing::Size(27, 20);
				 this->textBoxRubberPadSize->TabIndex = 2;
				 this->textBoxRubberPadSize->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SettingsForm::textBoxRubberPadSize_KeyPress);
				 // 
				 // checkBoxUseRubberPad
				 // 
				 this->checkBoxUseRubberPad->Location = System::Drawing::Point(8, 6);
				 this->checkBoxUseRubberPad->Name = L"checkBoxUseRubberPad";
				 this->checkBoxUseRubberPad->Size = System::Drawing::Size(138, 17);
				 this->checkBoxUseRubberPad->TabIndex = 1;
				 this->checkBoxUseRubberPad->Text = L"Резиновая прокладка";
				 this->checkBoxUseRubberPad->UseVisualStyleBackColor = true;
				 this->checkBoxUseRubberPad->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::checkBoxUseRubberPad_CheckedChanged);
				 // 
				 // labelRubberPadSize
				 // 
				 this->labelRubberPadSize->Location = System::Drawing::Point(58, 32);
				 this->labelRubberPadSize->Name = L"labelRubberPadSize";
				 this->labelRubberPadSize->Size = System::Drawing::Size(99, 13);
				 this->labelRubberPadSize->TabIndex = 1;
				 this->labelRubberPadSize->Text = L"Толщина прокладки";
				 // 
				 // tabControlSettings
				 // 
				 this->tabControlSettings->Controls->Add(this->tabPageSettings);
				 this->tabControlSettings->Controls->Add(this->tabPagePerformer);
				 this->tabControlSettings->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tabControlSettings->Location = System::Drawing::Point(0, 0);
				 this->tabControlSettings->Name = L"tabControlSettings";
				 this->tabControlSettings->SelectedIndex = 0;
				 this->tabControlSettings->Size = System::Drawing::Size(357, 153);
				 this->tabControlSettings->TabIndex = 0;
				 // 
				 // tabPagePerformer
				 // 
				 this->tabPagePerformer->Controls->Add(this->textBoxPerformer);
				 this->tabPagePerformer->Controls->Add(this->labelPerformer);
				 this->tabPagePerformer->Location = System::Drawing::Point(4, 22);
				 this->tabPagePerformer->Name = L"tabPagePerformer";
				 this->tabPagePerformer->Size = System::Drawing::Size(349, 127);
				 this->tabPagePerformer->TabIndex = 1;
				 this->tabPagePerformer->Text = L"Исполнитель";
				 this->tabPagePerformer->UseVisualStyleBackColor = true;
				 // 
				 // textBoxPerformer
				 // 
				 this->textBoxPerformer->Location = System::Drawing::Point(8, 22);
				 this->textBoxPerformer->Name = L"textBoxPerformer";
				 this->textBoxPerformer->Size = System::Drawing::Size(333, 20);
				 this->textBoxPerformer->TabIndex = 1;
				 // 
				 // labelPerformer
				 // 
				 this->labelPerformer->AutoSize = true;
				 this->labelPerformer->Location = System::Drawing::Point(8, 6);
				 this->labelPerformer->Name = L"labelPerformer";
				 this->labelPerformer->Size = System::Drawing::Size(74, 13);
				 this->labelPerformer->TabIndex = 0;
				 this->labelPerformer->Text = L"Исполнитель";
				 // 
				 // SettingsForm
				 // 
				 this->AcceptButton = this->buttonSave;
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::Control;
				 this->CancelButton = this->buttonCancel;
				 this->ClientSize = System::Drawing::Size(357, 195);
				 this->Controls->Add(this->tabControlSettings);
				 this->Controls->Add(this->tableLayoutPanel1);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->MaximizeBox = false;
				 this->MinimizeBox = false;
				 this->Name = L"SettingsForm";
				 this->ShowIcon = false;
				 this->ShowInTaskbar = false;
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Настройки";
				 this->Load += gcnew System::EventHandler(this, &SettingsForm::SettingsForm_Load);
				 this->tableLayoutPanel1->ResumeLayout(false);
				 this->tabPageSettings->ResumeLayout(false);
				 this->tabPageSettings->PerformLayout();
				 this->tabControlSettings->ResumeLayout(false);
				 this->tabPagePerformer->ResumeLayout(false);
				 this->tabPagePerformer->PerformLayout();
				 this->ResumeLayout(false);

			 }
#pragma endregion

	private:
		void LoadSettings()
		{
			this->checkBoxUseRubberPad->Checked = settings->bUseRubberPad;
			textBoxRubberPadSize->Text = System::Convert::ToString(settings->rubberPadSize);
			textBoxPerformer->Text = settings->performer;
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

			settings->performer = textBoxPerformer->Text;

			this->DialogResult == System::Windows::Forms::DialogResult::OK;
			this->Close();
		}

		System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e)
		{
			this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Close();
		}

	private:
		System::Void checkBoxUseRubberPad_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		{
			UpdateTextBoxUseRubberPad();
			//UpdateFromSettings();
		}

	private:
		System::Void textBoxRubberPadSize_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
		{
			//CheckFloatInKeyPress(e);
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

	};
}