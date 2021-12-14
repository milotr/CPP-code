//GDC - Iterative

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int c;
    while (c == 0)
    {
        if (a > b)
        {
            c = a - b;
            if (c > b)
            {
                c = c - b;
                return c;
            }
            else if (c < b)
            {
                c = c - a;
                return c;
            }
        }
        if (a < b)
        {
            c = b - a;
            if (c > a)
            {
                c = c - b;
                return c;
            }
            else if (c < a)
            {
                c = c - a;
                return c;
            }
        }
    }
}
int main()
{
    int a, b;
    cout << "Type in 2 integers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
    return 0;
}