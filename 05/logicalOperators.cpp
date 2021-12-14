// Logical Operaters

#include <iostream>
using namespace std;

int main()
{
     // create truth table for && (and) operator
     cout << boolalpha << "Logical AND (&&)"
          << "\nfalse && false " << (false && false) << "\n true && false " << (true && false) << "\n true && true " << (true && true);

     cout << "Logical OR (||)"
          << "\nfalse || false: " << (false || false) << endl;

     cout << "Logical negation (!)"
          << "\nflase: " << (!false) << "\ntrue: " << (!true) << endl;
}