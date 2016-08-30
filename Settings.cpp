#include "Settings.h"

Settings::Settings()
{
	performer = gcnew System::String("");
}

void Settings::SetDefault()
{
	bUseRubberPad = true;
	rubberPadSize = 0.92f;
	performer = "";
}

void Settings::LoadSettings()
{
	configFile = ConfigurationManager::OpenExeConfiguration(ConfigurationUserLevel::None);
	auto appSettings = ConfigurationManager::AppSettings;
	if (IsSettingsSet())
	{
		bUseRubberPad = Convert::ToBoolean(appSettings[L"useRubberPad"]);
		rubberPadSize = Convert::ToSingle(appSettings[L"rubberPadSize"]);
		performer = appSettings[L"performer"];
	}
	else
	{
		SetDefault();
	}
}

void Settings::SaveSettings()
{
	auto settings = configFile->AppSettings->Settings;
	if (IsSettingsSet())
	{
		settings[L"useRubberPad"]->Value = bUseRubberPad.ToString();
		settings[L"rubberPadSize"]->Value = rubberPadSize.ToString();
		settings[L"performer"]->Value = performer;
	}
	else
	{
		settings->Add(L"useRubberPad", bUseRubberPad.ToString());
		settings->Add(L"rubberPadSize", rubberPadSize.ToString());
		settings->Add(L"performer", performer);
	}
	configFile->Save(ConfigurationSaveMode::Modified);
	ConfigurationManager::RefreshSection(configFile->AppSettings->SectionInformation->Name);
}

bool Settings::IsSettingsSet()
{
	auto appSettings = ConfigurationManager::AppSettings;
	return	appSettings[L"useRubberPad"] != nullptr &&
			appSettings[L"rubberPadSize"] != nullptr &&
			appSettings[L"performer"] != nullptr;

}
