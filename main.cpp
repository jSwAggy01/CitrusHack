#include <iostream>
#include <string>
<<<<<<< HEAD

using namespace std;

=======
using namespace std;
>>>>>>> d356b6f443f2aa2ec1cd17060b6e5613c5d64be1

void Prompt() 
{
    string eq;
    string musc;

    cout << "What equipments u got cuh?" << endl;
    cout << "Calisthenics | Cardio | Weight | Machine" << endl;
    cin >> eq;
    cout << "What muscle u trynna work on?" << endl;
    cin >> musc;

    Exercise workOut1 = new Exercise(eq, musc);
}

int main()
{
    prompt();

    return 0;
}

