#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FormsSQLServer::LoginForm loginForm;
	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		MessageBox::Show("Autenticazione effettuata da parte di " + user->name,
			"Program.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Autenticazione fallita",
			"Program.cpp", MessageBoxButtons::OK);
	}
}