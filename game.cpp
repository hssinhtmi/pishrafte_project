#include "game.h"
#include <iostream>
#include <stdlib.h>

/*******************
function for welcome
*******************/

void game::welcome()
{
    std::cout << "\n\n\n\t\t\033[1;32mWELCOME TO HOSPITAL GAME\033[1;31m\n\n\n"
              << "The hospital has 8 departments and one additional\n"
              << "departments. 8 sections are:"
              << "\n\n1)\"Nose Throat Specialist\""
              << "\n2)\"heart Specialist\""
              << "\n3)\"Dentist\""
              << "\n4)\"Eye Specialist\""
              << "\n5)\"ICU\""
              << "\n6)\"Emergency\""
              << "\n7)\"Pharmacy\""
              << "\n8)\"Surgery room\""
              << "\n9)\"Extraw window\""
              << "\n\none additional parts so\n"
              << "that if the capacity of a part is completed,one of\n"
              << "these one parts is divided into 2 parts and one of them\n"
              << "is allocated for the part whose capacity is completed.\n"
              << "Patients enter and tell their illness and go to the desired department.\n\n\n"
              << "The capacity of each department is 13 people\n"
              << "Get the most points with proper management\n"
              << std::endl;
    std::cout << "\033[1;0m";
    Patient.play();
}