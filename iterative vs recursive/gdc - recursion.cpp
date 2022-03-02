//GDC - Recursion

#include <iostream>
using namespace std;
// Function
int gcd(int a, int b)
{

    // Comparing
    if (a > b)
    {
        return gcd(a - b, b);
    }
    return gcd(a, b - a);

    // For result
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    if (a == b)
    {
        return a;
    }
}

int main()
{
    int a, b;
    cout << "Type in 2 integers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
}