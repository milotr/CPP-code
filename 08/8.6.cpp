#include <iostream>
using namespace std;

// int cubeByValue(int); // prototype
void cubeByReference(int *);

int main()
{
    int number{5};

    cout << "The original value of number is " << number;
    cubeByReference(&number); // pass number address to function
    cout << "\nThe new value of number is " << number << endl;
}

// int cubeByValue(int n)
// {
//     return n * n * n;
// }

void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}