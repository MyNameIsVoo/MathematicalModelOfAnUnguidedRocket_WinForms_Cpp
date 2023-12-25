#include "stdafx.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] //
void main(cli::array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MathematicalModelOfAnUnguidedRocket::MyForm form;
	Application::Run(%form);
}
