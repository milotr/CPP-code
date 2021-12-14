// 6.3
// maximum function with a function prototype.
// Function prototype: user-defined function.

#include <iostream>
#include <iomanip>
using namespace std;

int maximum(int x, int y, int z); //function prototype

int main()
{
    cout << "Enter 3 integers: ";
    int int1, int2, int3;
    cin >> int1 >> int2 >> int3;

    //invoke maximum
    cout << "The maximum teger value is: " << maximum(int1, int2, int3) << endl;
}

// return the largest of 3 int
int maximum(int x, int y, int z)
{
    int maximumValue{x};

    if (y > maximumValue)
    {
        maximumValue = y;
    }

    if (z > maximumValue)
    {
        maximumValue = z;
    }

    return maximumValue;
}