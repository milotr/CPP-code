// 5.6
// Calculating compound interests.

#include <iostream>
#include <iomanip> // setw: changing width for in/output
#include <cmath>   // for power of.

using namespace std;

int main()
{
    cout << fixed << setprecision(2); // sets floating-point number format

    // variables:
    double princible{1000.00};
    double interest{0.05};

    cout << "Initial pricipal: " << princible << endl;
    cout << "interest rate: " << interest << endl;

    //display header
    cout << "Year" << setw(20) << "Amount of deposit" << endl;

    for (unsigned int year{1}; year <= 10; year++)
    {
        double amount = princible * pow(1.0 + interest, year); //pow (base,exponent)

        cout << setw(4) << year << setw(20) << amount << endl;
    }
}