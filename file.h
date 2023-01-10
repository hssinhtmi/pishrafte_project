#ifndef FILe
#define FILe
#include <fstream>
#include <iostream>
#include <vector>

class file
{
    public :
        void load_game(std::vector<int> *, int *, int *, int *);
        void write_score(int);
        void write_record(std::vector<int>, int, int);

    private:
        std::fstream myfile;
};

#endif