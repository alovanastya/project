#define _E
#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Prac2::MyForm form;
	Application::Run(% form);
}
