#include <string>

using namespace std;

class Exercise 
{
    public:
        //output workout name, level, desc
        Exercise() : equipment("none"), level(0), muscle("none") {}
        Exercise(string eq, int lvl, string musc) : equipment(eq), level(lvl), muscle(musc) {}

        void PrintWorkout() const {
            cout << "Workout: " << workout << endl;
            cout << "Level of Difficulty: " << level << endl;
            cout << "Workout description: " << description << endl;
        }

    private:
        string equipment;
        int lvl;
        string muscle;

    protected:
        string workout;
        int level;
        string description;
};