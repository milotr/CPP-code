#include <iostream>
using namespace std;

int number{7};

int main()
{
    double number{10.5};

    cout << "Local = " << number               // local
         << "\nGlobal = " << ::number << endl; // global
}