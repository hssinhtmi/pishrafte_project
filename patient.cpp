#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "../header/patient.h"
#include "../header/set_patient.h"
#include "../header/file.h"

using namespace std;

patient::patient() : Numberـofـpatientsـinـtheـdepartment(10), patient_count(1)
{
}

void patient::play()
{
    int count = 0;

    int score = 0;

    int hold = patients_counter();

    myfile.load_game(&Numberـofـpatientsـinـtheـdepartment, &patient_count, &hold, &score);

    Set_patient.set_score(score);

    cout << hold << endl;

    while (count < hold)
    {
        //\033[1;35m = magenta 33 = yellow
        cout << "\n\033[1;35mpatient number(" << patient_count << ") :\033[1;33m" << endl;

        switch (random_number())
        {
        case 0:
            cout << "\n\nI have a sore nose\n"
                 << endl;
            Guidance.speak_with_patient(0);
            // patinet count++
            if (Set_patient.check(0, "I have a sore nose"))
            {
                if (Numberـofـpatientsـinـtheـdepartment[0] > 12)
                {
                    cout << "Oops...The capacity is complete but extra house is being completed\n";
                    Numberـofـpatientsـinـtheـdepartment[8]++;
                    break;
                }
                Numberـofـpatientsـinـtheـdepartment[0]++;
            }
            break;
        case 1:
            cout << "\n\nI have a heartache\n"
                 << endl;
            Guidance.speak_with_patient(1);
            if (Set_patient.check(1, "I have a heartache"))
            {
                if (Numberـofـpatientsـinـtheـdepartment[1] > 12)
                {
                    cout << "\n\033[1;4;37mOops...The capacity is complete but extra house is being completed\n";
                    Numberـofـpatientsـinـtheـdepartment[8]++;
                    break;
                }
                Numberـofـpatientsـinـtheـdepartment[1]++;
            }
            break;
        case 2:
            cout << "\n\nI have toothache\n"
                 << endl;
            Guidance.speak_with_patient(2);
            if (Set_patient.check(2, "I have toothache"))
            {
                if (Numberـofـpatientsـinـtheـdepartment[2] > 12)
                {
                    cout << "\n\033[1;4;37mOops...The capacity is complete but extra house is being completed\n";
                    Numberـofـpatientsـinـtheـdepartment[8]++;
                    break;
                }
                Numberـofـpatientsـinـtheـdepartment[2]++;
            }
            break;
        case 3:
            cout << "\n\nI have a sore eye\n"
                 << endl;
            Guidance.speak_with_patient(3);
            if (Set_patient.check(3, "I have a sore eye"))
            {
                if (Numberـofـpatientsـinـtheـdepartment[3] > 12)
                {
                    cout << "\n\033[1;4;37mOops...The capacity is complete but extra house is being completed\n";
                    Numberـofـpatientsـinـtheـdepartment[8]++;
                    break;
                }
                Numberـofـpatientsـinـtheـdepartment[3]++;
            }
            break;
        case 4:
            cout << "\n\nThe general condition of the patient is very bad\n"
                 << endl;
            Guidance.speak_with_patient(4);
            if (Set_patient.check(4, "The general condition of the patient is very bad"))
            {
                if (Numberـofـpatientsـinـtheـdepartment[4] > 12)
                {
                    cout << "\n\033[1;4;37mOops...The capacity is complete but extra house is being completed\n";
                    Numberـofـpatientsـinـtheـdepartment[8]++;
                    break;
                }
                Numberـofـpatientsـinـtheـdepartment[4]++;
            }
            break;
        case 5:
            cout << "\n\nThe patient is injured\n"
                 << endl;
            Guidance.speak_with_patient(5);
            if (Set_patient.check(5, "The patient is injured"))
            {
                if (Numberـofـpatientsـinـtheـdepartment[5] > 12)
                {
                    cout << "\n\033[1;4;37mOops...The capacity is complete but extra house is being completed\n";
                    Numberـofـpatientsـinـtheـdepartment[8]++;
                    break;
                }
                Numberـofـpatientsـinـtheـdepartment[5]++;
            }
            break;
        case 6:
            cout << "\n\nI want medicine\n"
                 << endl;
            Guidance.speak_with_patient(6);
            if (Set_patient.check(6, "I want medicine"))
            {
                if (Numberـofـpatientsـinـtheـdepartment[6] > 12)
                {
                    cout << "\n\033[1;4;37mOops...The capacity is complete but extra house is being completed\n";
                    Numberـofـpatientsـinـtheـdepartment[8]++;
                    break;
                }
                Numberـofـpatientsـinـtheـdepartment[6]++;
            }
            break;
        case 7:
            cout << "\n\nThe patient has a very deep wound\n"
                 << endl;
            Guidance.speak_with_patient(7);
            if (Set_patient.check(7, "he patient has a very deep wound"))
            {
                if (Numberـofـpatientsـinـtheـdepartment[7] > 12)
                {
                    cout << "\n\033[1;4;37mOops...The capacity is complete but extra house is being completed\n";
                    Numberـofـpatientsـinـtheـdepartment[8]++;
                    break;
                }
                Numberـofـpatientsـinـtheـdepartment[7]++;
            }
            break;
        }

        count++; // countin patinet

        patient_count++;

        show_departman();
    }
    // calling class file for writing records
    myfile.write_record(Numberـofـpatientsـinـtheـdepartment, patient_count, patients_counter());
    myfile.write_score(Set_patient.get_score());
}

void patient::show_departman()
{
    //\033[1;31m = red(bold)
    cout << "\n\n\033[1;31mThe capacity of the departments -->\033[1;0m" << endl;
    cout << "\nnumber of {\033[1;31mNose Throat Specialis\033[1;0m} = " << Numberـofـpatientsـinـtheـdepartment[0] << endl;
    cout << "number of {\033[1;31mheart Specialist\033[1;0m} = " << Numberـofـpatientsـinـtheـdepartment[1] << endl;
    cout << "number of {\033[1;31mDentist\033[1;0m} = " << Numberـofـpatientsـinـtheـdepartment[2] << endl;
    cout << "number of {\033[1;31mEye Specialist\033[1;0m} = " << Numberـofـpatientsـinـtheـdepartment[3] << endl;
    cout << "number of {\033[1;31mICU\033[1;0m} = " << Numberـofـpatientsـinـtheـdepartment[4] << endl;
    cout << "number of {\033[1;31mEmergency\033[1;0m} = " << Numberـofـpatientsـinـtheـdepartment[5] << endl;
    cout << "number of {\033[1;31mPharmacy\033[1;0m} = " << Numberـofـpatientsـinـtheـdepartment[6] << endl;
    cout << "number of {\033[1;31mSurgery room\033[1;0m} = " << Numberـofـpatientsـinـtheـdepartment[7] << endl;
    cout << "number of {\033[1;31mExtra house\033[1;0m} = " << Numberـofـpatientsـinـtheـdepartment[8] << endl;
}

int patient::patients_counter()
{
    // random number for patient count
    srand((unsigned)time(NULL));

    int number = (rand() % 50);

    if (number < 20)
    {
        number += 12;
    }
    return number;
}

int patient::random_number()
{
    // random number for Sickness
    srand((unsigned)time(NULL));

    return (rand() % 8);
}