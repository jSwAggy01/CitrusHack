#include <iostream>
#include "Exercise.h"
class Equipment: public Exercise
{
    public:
        int getlist()
        {
            return list;
        }
    protected
        int list[];
    
    
}