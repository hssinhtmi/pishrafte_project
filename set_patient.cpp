#include "../header/set_patient.h"
#include <iostream>

using namespace std;

set_patient::set_patient() : Score(0)
{
}

void set_patient::set_score(int score)
{
    Score = score;
}

int set_patient::get_score() const
{
    return Score;
}

bool set_patient::check(int number, string Sickness)
{

    int house; // player choose

    cout << "\n\033[1;31mOk sir...patinet has ***\033[1;34m" << Sickness
         << "\033[1;31m *** In your opinion, in which house should the patient be placed?\033[0m" << endl;
    do
    {
        cout << "\n{\033[1;33mNose Throat Specialis\033[1;0m} = 0" << endl;
        cout << "{\033[1;33mheart Specialist\033[1;0m} = 1" << endl;
        cout << "{\033[1;33mDentist\033[1;0m} = 2" << endl;
        cout << "{\033[1;33mEye Specialist\033[1;0m} = 3" << endl;
        cout << "{\033[1;33mICU\033[1;0m} = 4" << endl;
        cout << "{\033[1;33mEmergency\033[1;0m} = 5" << endl;
        cout << "{\033[1;33mPharmacy\033[1;0m} = 6" << endl;
        cout << "{\033[1;33mSurgery room\033[1;0m} = 7" << endl;
        cout << "\n\033[1;37mChoose a house -->"; // choose house
        cin >> house;
        if (house == number)
        {
            cout << "\n\033[1;4;34mExcellent. You made the right choice. 5 positive points\033[1;0m"
                 << endl;
            Score += 5;
            cout << "\033[1;4;37mScore = " << Score << endl;
            return true;
        }
        else
        {
            cout << "\nOops... wrong choice.. 2 negative points.. try again" << endl;
            Score -= 2;
            cout << "\033[1;4;37mScore = " << Score << endl;
            cout << "patient Sickness is = \033[1;34m" << Sickness << "\033[0m" << endl;
        }
    } while (house != number);
    return false;
}