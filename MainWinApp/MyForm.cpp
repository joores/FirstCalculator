#include "MyForm.h"
#include <iostream>
#include <cstring>
#include <cmath>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MainWinApp::MyForm form;
	Application::Run(% form);

}