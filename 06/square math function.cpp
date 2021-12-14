// square function used to demonstrate the function
// call stack and activition records.

#include <iostream>
using namespace std;

int square(int); //prototype function square

int main()
{
    int a{10};

    cout << a << " squared: " << square(a) << endl;
}

int square(int x)
{
    return x * x;
}