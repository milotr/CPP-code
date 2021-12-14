// Craps simulation //not finished

#include <iostream>
#include <cstdlib> // srand() and rand()
#include <ctime>   //for function time
using namespace std;

int main()
{
    // scoped enumeration with constants that represent the game status
    enum class Status
    {
        CONTINUE,
        WON,
        LOST
    }; // all caps in constants

    // randomize random number generator using current time
    srand(static_cast<unsigned int>(time(0)));

    unsigned int myPoint{0};
}