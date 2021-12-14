// Passing arguments by value and by ref
#include <iostream>
using namespace std;

int squareByValue(int);        //function value prototype (value pass)
void squareByReference(int &); //function prototype (ref pass)

int main()
{
    int x{2};
    int z{4};

    cout << "x = " << x << "before squareByValue\n";
    cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
    cout << " x = " << x << "after squareByValue\n"
         << endl;

    cout << "z = " << z << "before squareByRef\n"
         << endl;
    cout << "Value returned by squareByRef: " << squareByReference(z) << endl;
    cout << " z = " << z << "after squareByValue\n"
         << endl;

    int squareByValue(int number)
    {
        return number *= number;
    }

    void squareByRefernce(int &numberRef)
    {
        numberRef *= numberRef;
    }
}