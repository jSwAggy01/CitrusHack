#include "Exercise.h"
#include "fstream"

class Calisthenics : public Exercise 
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

            while (fin >> workout >> level >> description) 
            {
                if (level == lvl && ) 
                {
                    PrintWorkout();
                    return;
                }
            }
        }
    private:
        string eq;
        int lvl;
        string musc;
};