#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		FormsSQLServer::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			FormsSQLServer::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.swithcToLogin) {

				continue;
			}
			else {
				user = loginForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr) {
		FormsSQLServer::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Autenticazione fallita",
			"Program.cpp", MessageBoxButtons::OK);
	}
}