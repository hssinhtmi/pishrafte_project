#include "../header/guidance.h"
#include <iostream>

using namespace std;

void guidance::speak_with_patient(int patient_number)
{
    cout <<"\033[1;4;34m";
    switch (patient_number)
    {
    case 0:
        cout << "Don't worry sir. We are here to help you."
             << "The part that concerns you is the Nose part" << endl;
        break;
    case 1:
        cout << "Don't worry sir. We are here to help you."
             << "The part that concerns you is the heart part" << endl;
        break;
    case 2:
        cout << "Don't worry sir. We are here to help you."
             << "The part that concerns you is the dental part" << endl;
        break;
    case 3:
        cout << "Don't worry sir. We are here to help you."
             << "The part that concerns you is the eye part" << endl;
        break;
    case 4:
        cout << "Don't worry sir. We are here to help you."
             << "The part that concerns you is the ICU part" << endl;
        break;
    case 5:
        cout << "Don't worry sir. We are here to help you."
             << "The part that concerns you is the Emergency part" << endl;
        break;
    case 6:
        cout << "Don't worry sir. We are here to help you."
             << "You should go to the pharmacy" << endl;
        break;
    case 7:
        cout << "Don't worry sir. We are here to help you."
             << "You should go to the Surgery room" << endl;
        break;
    }
    cout << "\033[0m";
}