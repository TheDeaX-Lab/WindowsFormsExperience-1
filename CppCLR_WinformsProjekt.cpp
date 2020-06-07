#include "pch.h"

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}
#include "MyForm1.h"
#include "Form1.h"

using namespace System::Windows::Forms;

[System::STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLR_WinformsProjekt1::MyForm1());
	Application::Run(gcnew CppCLRWinformsProjekt::Form1());
	return 0;
}