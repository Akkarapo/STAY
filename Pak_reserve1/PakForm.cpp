#include "PakForm.h"
#include "Login.h"
#include "MPBar.h"
#include "Profile.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Pakreserve1::PakForm form;
    Pakreserve1::Login form2;
    Pakreserve1::MPBar mpform;
    Pakreserve1::Profile profileform;
    ///Application::Run(% mpform);

    profileform.switchToBook = true;

    while (true) {
        if (profileform.switchToBook) {
            mpform.ShowDialog();
            profileform.switchToBook = false;
        }
        else if (mpform.switchToProfile) {
            profileform.ShowDialog();
            mpform.switchToProfile = false;
        }
        else {
            break;
        }

    }

}