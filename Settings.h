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
	// Установка значений по умолчанию
	void SetDefault();

	// Загрузка настроек из файла
	void LoadSettings();

	// Сохранение настроек в файл
	void SaveSettings();

	// Проверка создания полей настроек
	bool IsSettingsSet();

};
