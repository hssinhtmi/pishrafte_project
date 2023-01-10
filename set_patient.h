#ifndef SET_PATIENT
#define SET_PATIENT
#include <iostream>

class set_patient
{
    public:
        // constructor
        set_patient();

        //member dunctions
        bool check(int, std::string);

        void set_score(int);
        int get_score() const;

    private:
        int Score;
};
#endif