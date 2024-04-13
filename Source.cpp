#include <Windows.h>
#include "RegForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace WPA;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles;
	WPA::RegForm form1;
	Application::Run(% form1);
}