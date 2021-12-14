// Rolling a six-sided die 60,000,000 times.
#include <iostream>
#include <iomanip>
#include <cstdlib> // rand
using namespace std;

int main()
{
    unsigned int frequency1{0}; //store if 1s rolled
    unsigned int frequency2{0}; //store if 2s rolled
    unsigned int frequency3{0}; //store if 3s rolled
    unsigned int frequency4{0}; //store if 4s rolled
    unsigned int frequency5{0}; //store if 5s rolled
    unsigned int frequency6{0}; //store if 6s rolled
    int face;                   //store each roll of die

    for (unsigned int roll{1}; roll <= 60'000'000; ++roll)
    {
        face = 1 + rand() % 6; // random number from 1 to 6

        switch (face)
        {
        case 1:
            ++frequency1;
            break;
        case 2:
            ++frequency2;
            break;
        case 3:
            ++frequency3;
            break;
        case 4:
            ++frequency4;
            break;
        case 5:
            ++frequency5;
            break;
        case 6:
            ++frequency6;
            break;
        default: //invaid value, makes sure you have no bugs
            cout << "Program should never be here.";
        }
    }

    cout << "Face" << setw(13) << "Frequency" << endl;
    cout << "   1" << setw(13) << frequency1 << "\n 2" << setw(13) << frequency2 << "\n  3" << setw(13) << frequency3 << "\n    4" << setw(13) << frequency4 << "\n    5" << setw(13) << frequency5 << "\n    6" << setw(13) << frequency6;
}