#pragma once

#include "SettingsForm.h"

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

	private: System::Windows::Forms::MenuStrip^  menuStripTop;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;

	private:
		System::ComponentModel::Container ^components;

	private:
		Settings^ settings;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStripTop = (gcnew System::Windows::Forms::MenuStrip());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStripTop->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStripTop
			// 
			this->menuStripTop->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->settingsToolStripMenuItem });
			this->menuStripTop->Location = System::Drawing::Point(0, 0);
			this->menuStripTop->Name = L"menuStripTop";
			this->menuStripTop->Size = System::Drawing::Size(284, 24);
			this->menuStripTop->TabIndex = 0;
			this->menuStripTop->Text = L"menuStrip1";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Oemtilde));
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->settingsToolStripMenuItem->Text = L"Настройки";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::settingsToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->menuStripTop);
			this->HelpButton = true;
			this->MainMenuStrip = this->menuStripTop;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->menuStripTop->ResumeLayout(false);
			this->menuStripTop->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::Void settingsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			SettingsForm^ sf = gcnew SettingsForm();
			if (sf)
			{
				sf->Init(this->settings);
				sf->Show();
			}
		}

		// TODO: Перенести в выход из настроек без сохранения
	private:
		System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
		{
			if (System::Windows::Forms::DialogResult::No == System::Windows::Forms::MessageBox::Show("Exit without saving changes?", "Data Not Saved", MessageBoxButtons::YesNo))
				e->Cancel = true;
		}

	private:
		System::Void MyForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
		{
			settings->SaveSettings();
			Application::Exit();
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

	};
}
