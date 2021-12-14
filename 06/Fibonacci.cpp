// Recursive function fibonacci.

#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long);

int main()
{
    //calculate the fibonacci values of 0 through 10
    for (unsigned int counter{0}; counter <= 10; ++counter)
    {
        cout << "Fibonacci(" << counter << "): " << fibonacci(counter) << endl;
    }
}

unsigned long fibonacci(unsigned long number)
{
    if ((0 == number) || (1 == number))
    {
        return number;
    }
    else
    {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}