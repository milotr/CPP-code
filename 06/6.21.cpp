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

void nothing1(int a, int b, int c, int &d)
{
}

void nothing2(char a, int b, float &c, double &d)
{
    return 0;
}

int main()
{
}