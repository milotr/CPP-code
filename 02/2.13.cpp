// Compare integers

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number1{0};
    int number2{0};

    cout << "Enter 2 integers to compare: ";
    cin >> number1 >> number2;

    if (number1 == number2)
    {
        cout << number1 << "=" << number2 << endl;
    }

    if (number1 > number2)
    {
        cout << number1 << ">" << number2 << endl;
    }

    if (number1 < number2)
    {
        cout << number1 << "<" << number2 << endl;
    }

    if (number1 != number2)
    {
        cout << number1 << "!=" << number2 << endl;
    }

    if (number1 >= number2)
    {
        cout << number1 << ">=" << number2 << endl;
    }

    if (number1 <= number2)
    {
        cout << number1 << "<=" << number2 << endl;
    }
}