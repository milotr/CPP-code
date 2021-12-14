#include <iostream>
using namespace std;

int square(int x)
{
    cout << "square of int: " << x << " is ";
    return x * x;
}

double square(double y)
{
    cout << "square of double: " << y << " is ";
    return y * y;
}

int main()
{
    cout << square(7); // calls int function
    cout << endl;
    cout << square(10.5); // calls double function
    cout << endl;
}