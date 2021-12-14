// Recursive function factorial.
// Recursion terminates when a base case is recognized

#include <iostream>
#include <iomanip>
using namespace std;

// Recursion function factorial
unsigned long factorial(unsigned long number)
{
    if (number <= 1)
    {             // test for base case
        return 1; // base cases: 0! = 1 and 1! = 1
    }
    else
    { // recursion step
        return number * factorial(number - 1);
    }
}

int main()
{
    for (unsigned int counter{0}; counter <= 10; ++counter)
    {
        cout << setw(2) << counter << "! = " << factorial(counter) << endl;
    }
}
