// Randomizing the die-rolling program

#include <iostream>
#include <iomanip>
#include <cstdlib> // rand and srand
using namespace std;

int main()
{
    unsigned int seed{0}; //stores the seed entered by the user

    cout << "Enter seed: ";
    cin >> seed;
    srand(seed); // seed random number generator

    //loop 10 times
    for (unsigned int counter{1}; counter <= 10; ++counter)
    {
        cout << setw(13) << (1 + rand() % 6);

        if (counter % 5 == 0)
        { // if divisble 5 times then makes new line
            cout << endl;
        }
    }
}