#include <Windows.h>
#include "MyForm.h"

using namespace Project1;

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MyForm());

	return 0;
}