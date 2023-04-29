#include <string>

using namespace std;

class Exercise 
{
    public:
        //output workout name, level, desc
        Exercise() : equipment("none"), muscle("none") {}
        Exercise(string eq, string musc) : equipment(eq), muscle(musc) {}

        void PrintWorkout() const {
            cout << "Workout: " << workout << endl;
            cout << "Level of Difficulty: " << level << endl;
            cout << "Workout description: " << description << endl;
        }

    private:
        string equipment;
        string muscle;

        string workout;
        int level;
        string description;
};