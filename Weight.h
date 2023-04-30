#include <fstream>
#pragma once
#include "Exercise.h"

class Weight : public Exercise
{
    public:
       void GetWorkOut()
        {
            string fileName;
            cin >> fileName;

            ifstream fin;
            fin.open(fileName);
            if (!fin.is_open) 
            {
                cout << "Error opening " << fileName;
                return 1;
            }

            while (fin >> workout >> lvl >> description) 
            {
                if (level == lvl && muscle == description) 
                {
                    PrintWorkout();
                    return;
                }
            }

            fin.close();
        }
};