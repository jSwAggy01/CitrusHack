#include <string>
#pragma once

using namespace std;

class Exercise 
{
    public:
        //output workout name, level, desc
        Exercise() : level(0), muscle("none") {}
        Exercise(int lv, string musc) : level(lv), muscle(musc) {}

        void PrintWorkout() const {
            cout << "Workout: " << workout << endl;
            cout << "Level of Difficulty: " << level << endl;
            cout << "Workout description: " << description << endl;
        }

    protected:
        int level;
        string muscle;

        string workout;
        int lvl;
        string description;
};