#pragma once

#using <System.Configuration.dll>

using namespace System;
using namespace System::Configuration;
using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class Settings
{
public:
	Settings();

private:
	System::Configuration::Configuration^ configFile;

public:
	bool bUseRubberPad;
	float rubberPadSize;
	String^ performer;

public:
	// ��������� �������� �� ���������
	void SetDefault();

	// �������� �������� �� �����
	void LoadSettings();

	// ���������� �������� � ����
	void SaveSettings();

	// �������� �������� ����� ��������
	bool IsSettingsSet();

};
