//Using a C++11 random-number generation engine and distribution to roll a six-sided die.

#include <iostream>
#include <iomanip>
#include <random> // including C++11 features
#include <ctime>
using namespace std;

int main()
{
    // using the default random-number generation engine to produce uniformly distributed int values from 1 to 6
    default_random_engine engine{static_cast<unsigned int>(time(0))};
    uniform_int_distribution<unsigned int> randomInt{1, 6};

    //loop 10 times
    for (unsigned int counter{1}; counter <= 10; ++counter)
    {
        cout << setw(10) << randomInt(engine); // pick a random number from 1 to 6 and output it.

        if (counter % 5 == 0)
        {
            cout << endl;
        }
    }
}