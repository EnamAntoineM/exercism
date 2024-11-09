#include "leap.h"

bool leap_year(int year)
{

    int cond1 = year % 4;
    int cond2 = year % 100;
    int cond3 = year % 400;

    if (cond1 == 0)
    {
        if ((cond2 == 0 && cond3 == 0) || (cond2 != 0))
        {
          return true;
        }
        else
        {
        return false;
        }
    }    
    else
    {
        return false;
    }
    
}