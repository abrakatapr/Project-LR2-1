#include "Form1.h"
#include "RootX.cpp"
#include "GP.cpp"
#include "Root.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ПроектЛР12::Form1 form;
	Application::Run(% form);
}
