#pragma once

#include "SettingsForm.h"
#include "AboutForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			this->settings = gcnew Settings();
			settings->LoadSettings();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::MenuStrip^  menuStripTop;
	private: System::Windows::Forms::Label^  labelPerformer;




	private:
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBoxPerformer;


	private:
		Settings^ settings;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStripTop = (gcnew System::Windows::Forms::MenuStrip());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->labelPerformer = (gcnew System::Windows::Forms::Label());
			this->textBoxPerformer = (gcnew System::Windows::Forms::TextBox());
			this->menuStripTop->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStripTop
			// 
			this->menuStripTop->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolsToolStripMenuItem });
			this->menuStripTop->Location = System::Drawing::Point(0, 0);
			this->menuStripTop->Name = L"menuStripTop";
			this->menuStripTop->Size = System::Drawing::Size(284, 24);
			this->menuStripTop->TabIndex = 0;
			this->menuStripTop->Text = L"menuStrip1";
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->settingsToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->toolsToolStripMenuItem->Text = L"Сервис";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->settingsToolStripMenuItem->Text = L"Настройки";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::settingsToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->aboutToolStripMenuItem->Text = L"О программе";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// labelPerformer
			// 
			this->labelPerformer->AutoSize = true;
			this->labelPerformer->Location = System::Drawing::Point(10, 24);
			this->labelPerformer->Name = L"labelPerformer";
			this->labelPerformer->Size = System::Drawing::Size(74, 13);
			this->labelPerformer->TabIndex = 1;
			this->labelPerformer->Text = L"Исполнитель";
			// 
			// textBoxPerformer
			// 
			this->textBoxPerformer->Location = System::Drawing::Point(12, 53);
			this->textBoxPerformer->Name = L"textBoxPerformer";
			this->textBoxPerformer->Size = System::Drawing::Size(260, 20);
			this->textBoxPerformer->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBoxPerformer);
			this->Controls->Add(this->labelPerformer);
			this->Controls->Add(this->menuStripTop);
			this->HelpButton = true;
			this->MainMenuStrip = this->menuStripTop;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStripTop->ResumeLayout(false);
			this->menuStripTop->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// TODO: Перенести в выход из настроек без сохранения
	private:
		System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
		{
			//if (System::Windows::Forms::DialogResult::No == System::Windows::Forms::MessageBox::Show("Exit without saving changes?", "Data Not Saved", MessageBoxButtons::YesNo))
			//	e->Cancel = true;
			settings->SaveSettings();
		}

	private:
		System::Void MyForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
		{
			if(System::Windows::Forms::Application::MessageLoop)
			{
				// Use this since we are a WinForms app
				System::Windows::Forms::Application::Exit();
			}
			else
			{
				// Use this since we are a console app
				System::Environment::Exit(1);
			}
		}

	public:
		void UpdateFromSettings()
		{
			this->textBoxPerformer->Text = this->settings->performer;
		}

	private:
		System::Void settingsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			SettingsForm^ sf = gcnew SettingsForm();
			if (sf)
			{
				sf->Init(this->settings);
				sf->ShowDialog();
				this->UpdateFromSettings();
			}
		}

	private:
		System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			AboutForm^ af = gcnew AboutForm();
			af->ShowDialog();
		}

	private:
		System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
		{
			textBoxPerformer->Text = settings->performer;
		}

	};
}
