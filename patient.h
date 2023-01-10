#ifndef PATIENT
#define PATIENT
#include <vector>
#include <string>
#include "guidance.h"
#include "set_patient.h"
#include "file.h"

class patient
{
    public :        

        // constructor
        patient();
        
        // member functions
        void play();
        void show_departman();
        int random_number();
        int patients_counter();
        // guidance function
        guidance Guidance;

        // set_patient class
        set_patient Set_patient;

        // file class
        file myfile;
    private :
        std::vector <int> Numberـofـpatientsـinـtheـdepartment;
        int patient_count;
};

#endif