#include <iostream>
#include "maximum.h"
#include "minimum.h"
#include "average.h"
using namespace std;
//string, boolean is not accpeted
int main()
{
    cout << "Input three integer values: ";
    int int1, int2, int3;
    cin >> int1 >> int2 >> int3;

    cout << "\n\nThe maximum integer value is: "
         << maximum(int1, int2, int3);

    cout << "\n\nThe minimum integer value is: "
         << minimum(int1, int2, int3);

    cout << "\n\nThe average integer value is: "
         << average(int1, int2, int3);

    cout << "\n\nInput three double values: ";
    double double1, double2, double3;
    cin >> double1 >> double2 >> double3;

    cout << "\n\nThe maximum double value is: \n"
         << maximum(double1, double2, double3);

    cout << "\n\nThe minimum double value is: \n"
         << minimum(double1, double2, double3);

    cout << "\n\nThe average double value is: \n"
         << average(double1, double2, double3);

    cout << "\n\nInput three characters: ";
    char char1, char2, char3;
    cin >> char1 >> char2 >> char3;

    cout << "\n\nThe maximum character value is: \n"
         << maximum(char1, char2, char3);

    cout << "\n\nThe minimum character value is: \n"
         << minimum(char1, char2, char3);

    cout << "\n\nThe average character value is: \n"
         << average(char1, char2, char3) << endl;
}