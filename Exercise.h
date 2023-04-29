#include <string>

using namespace std;

class Exercise 
{
    public:
        Exercise() : equipment("none"), muscle("none")
        {
        }

        Exercise(string eq, string mu) : equipment(eq), muscle(mu)
        {
        }

        //output workout name, level, desc
        void printWorkout() const {
            cout << "Workout: " << workout << endl;
            cout << "Level of Difficulty: " << level << endl;
            cout << "Workout description: " << description << endl;
        }

        //Goes to NonEq.h or Eq.h?
        void option() 
        {
            //if user prompted for none prompt them again for calisthenics or cardio
            if (equipment == "None") {
                string nonEq;
                cout << "Calisthenics | Cardio" << endl;
                cin >> nonEq;
            }

            //goes into Eq.h to respective cate
            else
            {

            }
        }
    private:
        string equipment;
        string muscle;
        string workout;
        int level;
        string description;
};