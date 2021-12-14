// Sum of integers

#include <iostream>
using namespace std;

int main()
{
    int number1{0};
    int number2{0};
    int sum{0};

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    sum = number1 + number2;
    cout << "Sum is: " << sum << endl;
}