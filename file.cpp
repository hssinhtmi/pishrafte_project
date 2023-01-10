#include "file.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void file::write_score(int score)
{
    myfile.open("hospital.txt", ios::app);

    myfile << score << endl;

    myfile.close();
}

void file::load_game(std::vector<int> *departman, int *patient_number, int *patients_count, int *score)
{
    myfile.open("hospital.txt", ios::in);
    
    char c;

    if (myfile.peek() == fstream::traits_type::eof())
    {
        cout << "no load game" << endl;
    }
    else
    {
        cout << "do you want play Previous game ? (y = YES/ n = NO) --> ";
        cin >> c;
        if (c == 'y')
        {
            while (!myfile.eof())
            {
                myfile >> *patients_count;
                myfile >> *patient_number;
                myfile >> (*departman)[0];
                myfile >> (*departman)[1];
                myfile >> (*departman)[2];
                myfile >> (*departman)[3];
                myfile >> (*departman)[4];
                myfile >> (*departman)[5];
                myfile >> (*departman)[6];
                myfile >> (*departman)[7];
                myfile >> (*departman)[8];
                myfile >> *score;
            }
        }
    }
    myfile.close();
}

void file::write_record(std::vector<int> departman, int patient_number, int patients_count)
{
    // opening file
    myfile.open("hospital.txt", ios::app);

    // patinets count
    myfile << patients_count << endl;

    // write patient record
    myfile << patient_number << endl;

    // write dapatrman record
    myfile << departman[0] << endl;
    myfile << departman[1] << endl;
    myfile << departman[2] << endl;
    myfile << departman[3] << endl;
    myfile << departman[4] << endl;
    myfile << departman[5] << endl;
    myfile << departman[6] << endl;
    myfile << departman[7] << endl;
    myfile << departman[8] << endl;

    myfile.close();
}