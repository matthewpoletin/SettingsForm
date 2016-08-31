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

	private:
		System::Windows::Forms::TabControl^  tabControlSettings;
	private:
		System::Windows::Forms::TabPage^  tabPageMain;
		System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelMainContent;
		System::Windows::Forms::CheckBox^  checkBoxUseRubberPad;



		System::Windows::Forms::Button^  buttonDefault;
	private:
		System::Windows::Forms::TabPage^  tabPageAdditional;
		System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelAdditionalContent;
		System::Windows::Forms::TextBox^  textBoxPerformer;
		System::Windows::Forms::Label^  labelPerformer;

	private:
		System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelButtons;
		System::Windows::Forms::Button^  buttonSave;
		System::Windows::Forms::Button^  buttonCancel;

	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelRubberSize;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanelRubberSize;
	private: System::Windows::Forms::TextBox^  textBoxRubberPadSize;
	private: System::Windows::Forms::Label^  labelRubberPadSize;
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

#pragma region Windows Form Designer generated code
			 void InitializeComponent(void)
			 {
				 this->tableLayoutPanelButtons = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->buttonSave = (gcnew System::Windows::Forms::Button());
				 this->buttonCancel = (gcnew System::Windows::Forms::Button());
				 this->tabControlSettings = (gcnew System::Windows::Forms::TabControl());
				 this->tabPageMain = (gcnew System::Windows::Forms::TabPage());
				 this->tableLayoutPanelMainContent = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->buttonDefault = (gcnew System::Windows::Forms::Button());
				 this->checkBoxUseRubberPad = (gcnew System::Windows::Forms::CheckBox());
				 this->tableLayoutPanelRubberSize = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->flowLayoutPanelRubberSize = (gcnew System::Windows::Forms::FlowLayoutPanel());
				 this->textBoxRubberPadSize = (gcnew System::Windows::Forms::TextBox());
				 this->labelRubberPadSize = (gcnew System::Windows::Forms::Label());
				 this->tabPageAdditional = (gcnew System::Windows::Forms::TabPage());
				 this->tableLayoutPanelAdditionalContent = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->textBoxPerformer = (gcnew System::Windows::Forms::TextBox());
				 this->labelPerformer = (gcnew System::Windows::Forms::Label());
				 this->tableLayoutPanelButtons->SuspendLayout();
				 this->tabControlSettings->SuspendLayout();
				 this->tabPageMain->SuspendLayout();
				 this->tableLayoutPanelMainContent->SuspendLayout();
				 this->tableLayoutPanelRubberSize->SuspendLayout();
				 this->flowLayoutPanelRubberSize->SuspendLayout();
				 this->tabPageAdditional->SuspendLayout();
				 this->tableLayoutPanelAdditionalContent->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // tableLayoutPanelButtons
				 // 
				 this->tableLayoutPanelButtons->ColumnCount = 2;
				 this->tableLayoutPanelButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 50)));
				 this->tableLayoutPanelButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 50)));
				 this->tableLayoutPanelButtons->Controls->Add(this->buttonSave, 0, 0);
				 this->tableLayoutPanelButtons->Controls->Add(this->buttonCancel, 1, 0);
				 this->tableLayoutPanelButtons->Dock = System::Windows::Forms::DockStyle::Bottom;
				 this->tableLayoutPanelButtons->Location = System::Drawing::Point(0, 183);
				 this->tableLayoutPanelButtons->Name = L"tableLayoutPanelButtons";
				 this->tableLayoutPanelButtons->RowCount = 1;
				 this->tableLayoutPanelButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
					 50)));
				 this->tableLayoutPanelButtons->Size = System::Drawing::Size(443, 42);
				 this->tableLayoutPanelButtons->TabIndex = 7;
				 // 
				 // buttonSave
				 // 
				 this->buttonSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->buttonSave->Location = System::Drawing::Point(3, 3);
				 this->buttonSave->Name = L"buttonSave";
				 this->buttonSave->Size = System::Drawing::Size(215, 36);
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
				 this->buttonCancel->Location = System::Drawing::Point(224, 3);
				 this->buttonCancel->Name = L"buttonCancel";
				 this->buttonCancel->Size = System::Drawing::Size(216, 36);
				 this->buttonCancel->TabIndex = 1;
				 this->buttonCancel->Text = L"Отмена";
				 this->buttonCancel->UseVisualStyleBackColor = true;
				 this->buttonCancel->Click += gcnew System::EventHandler(this, &SettingsForm::buttonCancel_Click);
				 // 
				 // tabControlSettings
				 // 
				 this->tabControlSettings->Controls->Add(this->tabPageMain);
				 this->tabControlSettings->Controls->Add(this->tabPageAdditional);
				 this->tabControlSettings->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tabControlSettings->Location = System::Drawing::Point(0, 0);
				 this->tabControlSettings->Name = L"tabControlSettings";
				 this->tabControlSettings->SelectedIndex = 0;
				 this->tabControlSettings->Size = System::Drawing::Size(443, 183);
				 this->tabControlSettings->TabIndex = 0;
				 // 
				 // tabPageMain
				 // 
				 this->tabPageMain->Controls->Add(this->tableLayoutPanelMainContent);
				 this->tabPageMain->Location = System::Drawing::Point(4, 22);
				 this->tabPageMain->Name = L"tabPageMain";
				 this->tabPageMain->Size = System::Drawing::Size(435, 157);
				 this->tabPageMain->TabIndex = 2;
				 this->tabPageMain->Text = L"Основные";
				 this->tabPageMain->UseVisualStyleBackColor = true;
				 // 
				 // tableLayoutPanelMainContent
				 // 
				 this->tableLayoutPanelMainContent->ColumnCount = 1;
				 this->tableLayoutPanelMainContent->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 50)));
				 this->tableLayoutPanelMainContent->Controls->Add(this->buttonDefault, 0, 2);
				 this->tableLayoutPanelMainContent->Controls->Add(this->checkBoxUseRubberPad, 0, 0);
				 this->tableLayoutPanelMainContent->Controls->Add(this->tableLayoutPanelRubberSize, 0, 1);
				 this->tableLayoutPanelMainContent->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tableLayoutPanelMainContent->Location = System::Drawing::Point(0, 0);
				 this->tableLayoutPanelMainContent->Name = L"tableLayoutPanelMainContent";
				 this->tableLayoutPanelMainContent->RowCount = 3;
				 this->tableLayoutPanelMainContent->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
					 19.37984F)));
				 this->tableLayoutPanelMainContent->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
					 80.62016F)));
				 this->tableLayoutPanelMainContent->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
					 37)));
				 this->tableLayoutPanelMainContent->Size = System::Drawing::Size(435, 157);
				 this->tableLayoutPanelMainContent->TabIndex = 8;
				 // 
				 // buttonDefault
				 // 
				 this->buttonDefault->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->buttonDefault->Location = System::Drawing::Point(329, 122);
				 this->buttonDefault->Name = L"buttonDefault";
				 this->buttonDefault->Size = System::Drawing::Size(103, 32);
				 this->buttonDefault->TabIndex = 7;
				 this->buttonDefault->Text = L"По умолчанию";
				 this->buttonDefault->UseVisualStyleBackColor = true;
				 this->buttonDefault->Click += gcnew System::EventHandler(this, &SettingsForm::buttonDefault_Click);
				 // 
				 // checkBoxUseRubberPad
				 // 
				 this->checkBoxUseRubberPad->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->checkBoxUseRubberPad->Location = System::Drawing::Point(3, 3);
				 this->checkBoxUseRubberPad->Name = L"checkBoxUseRubberPad";
				 this->checkBoxUseRubberPad->Size = System::Drawing::Size(429, 17);
				 this->checkBoxUseRubberPad->TabIndex = 4;
				 this->checkBoxUseRubberPad->Text = L"Резиновая прокладка ";
				 this->checkBoxUseRubberPad->UseVisualStyleBackColor = true;
				 this->checkBoxUseRubberPad->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::checkBoxUseRubberPad_CheckedChanged);
				 // 
				 // tableLayoutPanelRubberSize
				 // 
				 this->tableLayoutPanelRubberSize->ColumnCount = 2;
				 this->tableLayoutPanelRubberSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					 20)));
				 this->tableLayoutPanelRubberSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 100)));
				 this->tableLayoutPanelRubberSize->Controls->Add(this->flowLayoutPanelRubberSize, 1, 0);
				 this->tableLayoutPanelRubberSize->Dock = System::Windows::Forms::DockStyle::Top;
				 this->tableLayoutPanelRubberSize->Location = System::Drawing::Point(3, 26);
				 this->tableLayoutPanelRubberSize->Name = L"tableLayoutPanelRubberSize";
				 this->tableLayoutPanelRubberSize->RowCount = 1;
				 this->tableLayoutPanelRubberSize->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
					 100)));
				 this->tableLayoutPanelRubberSize->Size = System::Drawing::Size(429, 34);
				 this->tableLayoutPanelRubberSize->TabIndex = 8;
				 // 
				 // flowLayoutPanelRubberSize
				 // 
				 this->flowLayoutPanelRubberSize->Controls->Add(this->textBoxRubberPadSize);
				 this->flowLayoutPanelRubberSize->Controls->Add(this->labelRubberPadSize);
				 this->flowLayoutPanelRubberSize->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->flowLayoutPanelRubberSize->Location = System::Drawing::Point(23, 3);
				 this->flowLayoutPanelRubberSize->Name = L"flowLayoutPanelRubberSize";
				 this->flowLayoutPanelRubberSize->Size = System::Drawing::Size(403, 28);
				 this->flowLayoutPanelRubberSize->TabIndex = 9;
				 // 
				 // textBoxRubberPadSize
				 // 
				 this->textBoxRubberPadSize->Anchor = System::Windows::Forms::AnchorStyles::Left;
				 this->textBoxRubberPadSize->Location = System::Drawing::Point(3, 3);
				 this->textBoxRubberPadSize->Name = L"textBoxRubberPadSize";
				 this->textBoxRubberPadSize->Size = System::Drawing::Size(27, 20);
				 this->textBoxRubberPadSize->TabIndex = 7;
				 // 
				 // labelRubberPadSize
				 // 
				 this->labelRubberPadSize->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->labelRubberPadSize->Location = System::Drawing::Point(36, 0);
				 this->labelRubberPadSize->Name = L"labelRubberPadSize";
				 this->labelRubberPadSize->Size = System::Drawing::Size(280, 26);
				 this->labelRubberPadSize->TabIndex = 5;
				 this->labelRubberPadSize->Text = L"Толщина прокладки";
				 this->labelRubberPadSize->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 // 
				 // tabPageAdditional
				 // 
				 this->tabPageAdditional->Controls->Add(this->tableLayoutPanelAdditionalContent);
				 this->tabPageAdditional->Location = System::Drawing::Point(4, 22);
				 this->tabPageAdditional->Name = L"tabPageAdditional";
				 this->tabPageAdditional->Size = System::Drawing::Size(435, 157);
				 this->tabPageAdditional->TabIndex = 1;
				 this->tabPageAdditional->Text = L"Дополнительные";
				 this->tabPageAdditional->UseVisualStyleBackColor = true;
				 // 
				 // tableLayoutPanelAdditionalContent
				 // 
				 this->tableLayoutPanelAdditionalContent->ColumnCount = 1;
				 this->tableLayoutPanelAdditionalContent->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 50)));
				 this->tableLayoutPanelAdditionalContent->Controls->Add(this->textBoxPerformer, 0, 1);
				 this->tableLayoutPanelAdditionalContent->Controls->Add(this->labelPerformer, 0, 0);
				 this->tableLayoutPanelAdditionalContent->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tableLayoutPanelAdditionalContent->Location = System::Drawing::Point(0, 0);
				 this->tableLayoutPanelAdditionalContent->Name = L"tableLayoutPanelAdditionalContent";
				 this->tableLayoutPanelAdditionalContent->RowCount = 2;
				 this->tableLayoutPanelAdditionalContent->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
					 18.11024F)));
				 this->tableLayoutPanelAdditionalContent->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
					 81.88976F)));
				 this->tableLayoutPanelAdditionalContent->Size = System::Drawing::Size(435, 157);
				 this->tableLayoutPanelAdditionalContent->TabIndex = 0;
				 // 
				 // textBoxPerformer
				 // 
				 this->textBoxPerformer->Dock = System::Windows::Forms::DockStyle::Top;
				 this->textBoxPerformer->Location = System::Drawing::Point(3, 31);
				 this->textBoxPerformer->Name = L"textBoxPerformer";
				 this->textBoxPerformer->Size = System::Drawing::Size(429, 20);
				 this->textBoxPerformer->TabIndex = 4;
				 // 
				 // labelPerformer
				 // 
				 this->labelPerformer->AutoSize = true;
				 this->labelPerformer->Dock = System::Windows::Forms::DockStyle::Bottom;
				 this->labelPerformer->Location = System::Drawing::Point(3, 15);
				 this->labelPerformer->Name = L"labelPerformer";
				 this->labelPerformer->Size = System::Drawing::Size(429, 13);
				 this->labelPerformer->TabIndex = 2;
				 this->labelPerformer->Text = L"Исполнитель";
				 // 
				 // SettingsForm
				 // 
				 this->AcceptButton = this->buttonSave;
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::Control;
				 this->CancelButton = this->buttonCancel;
				 this->ClientSize = System::Drawing::Size(443, 225);
				 this->Controls->Add(this->tabControlSettings);
				 this->Controls->Add(this->tableLayoutPanelButtons);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->MaximizeBox = false;
				 this->MinimizeBox = false;
				 this->Name = L"SettingsForm";
				 this->ShowIcon = false;
				 this->ShowInTaskbar = false;
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Настройки";
				 this->Load += gcnew System::EventHandler(this, &SettingsForm::SettingsForm_Load);
				 this->tableLayoutPanelButtons->ResumeLayout(false);
				 this->tabControlSettings->ResumeLayout(false);
				 this->tabPageMain->ResumeLayout(false);
				 this->tableLayoutPanelMainContent->ResumeLayout(false);
				 this->tableLayoutPanelRubberSize->ResumeLayout(false);
				 this->flowLayoutPanelRubberSize->ResumeLayout(false);
				 this->flowLayoutPanelRubberSize->PerformLayout();
				 this->tabPageAdditional->ResumeLayout(false);
				 this->tableLayoutPanelAdditionalContent->ResumeLayout(false);
				 this->tableLayoutPanelAdditionalContent->PerformLayout();
				 this->ResumeLayout(false);

			 }
#pragma endregion

	private:
		// Загрузка значений в форму из настроек
		void LoadSettings()
		{
			LoadSettingsMain();
			LoadSettingsPerformer();
		}
	
		// Загрузка основных настроек
		void LoadSettingsMain()
		{
			this->checkBoxUseRubberPad->Checked = settings->bUseRubberPad;
			textBoxRubberPadSize->Text = System::Convert::ToString(settings->rubberPadSize);
		}
		
		// Загрузка настроек исполнителя
		void LoadSettingsPerformer()
		{
			textBoxPerformer->Text = settings->performer;
		}

	private:
		// Загрузка формы, обновление вида согласно настройкам
		System::Void SettingsForm_Load(System::Object^  sender, System::EventArgs^  e)
		{
			UpdateTextBoxUseRubberPad();
		}

	private:
		// Нажатие кнопки сохранения
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

		// Нажатие кнопки отмены
		System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e)
		{
			this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Close();
		}

	private:
		// Обновление формы по нажатию checkbox
		System::Void checkBoxUseRubberPad_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		{
			UpdateTextBoxUseRubberPad();
		}

	private:
		// Проверка на ввод размеров
		System::Void textBoxRubberPadSize_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
		{
			//CheckFloatInKeyPress(e);
		}

	private:
		// Обновление формы по нажатию checkbox
		void UpdateTextBoxUseRubberPad()
		{
			textBoxRubberPadSize->Enabled = checkBoxUseRubberPad->Checked;
		}

	private:
		// Установка основных настроек по умолчанию
		System::Void buttonDefault_Click(System::Object^  sender, System::EventArgs^  e)
		{
			settings->SetDefault();
			LoadSettingsMain();
		}

	};
}