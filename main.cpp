#include <iostream>
#include <string>
#include "Calisthenics.h"
#include "Cardio.h"
#include "Weight.h"
#include "Machine.h"
<<<<<<< HEAD

using namespace std;

=======
using namespace std;
>>>>>>> d356b6f443f2aa2ec1cd17060b6e5613c5d64be1

void Prompt() 
{
    string eq;
    int lv;
    string musc;

    cout << "What equipments u got cuh?" << endl;
    cout << "Calisthenics | Cardio | Weight | Machine" << endl;
    cin >> eq;
    cout << "What level u at?" << endl;
    cout << "Level: 1 | 2 | 3" << endl;
    cin >> lv;
    cout << "What muscle u trynna work on?" << endl;
    cin >> musc;

    //Exercise workOut1 = new Exercise(eq, lvl, musc);
    if (eq == "Calisthenics") 
    {
        Calisthenics workout = new Calisthenics(lv, musc);
    }

    else if (eq == "Cardio") 
    {
        Cardio workout = new Workout(lv, musc);
    }

    else if (eq == "Weight") 
    {
        Weight workout = new Workout(lv, musc);
    }

    else if (eq == "Machine") {
        Machine workout = new Machine(lv, musc);
    }
}

int main()
{
    prompt();

    return 0;
}

