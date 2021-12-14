// Scoping exaample

#include <iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int x{1}; // global var

int main()
{
    cout << "Global x in main is " << x << endl;

    int x{5}; // local var to main

    cout << "local x in main's outer scope is " << x << endl;

    {             // block starts a new scope
        int x{7}; // hides both x in outer scoppe and global x

        cout << "local x in main's innter scope is " << x << endl;
    }

    cout << "local x in main's outer scope is " << x << endl;

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    cout << "\nlocal x in main is " << x << endl;
}

void useLocal()
{
    int x{25}; //saves when execute again

    cout << "\n local x is " << x << " on entering useLocal" << endl;
    ++x;
    cout << "local x is" << x << " on exiting useLocal" << endl;
}

void useStaticLocal()
{
    static int x{50}; // saves when execute again

    cout << "\nlocal static x is " << x << " on enetering useStaticLocal" << endl;
    ++x;
    cout << "local static is " << x << " on exiting useStaticLocal" << endl;
}

void useGlobal()
{
    cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
    x *= 10;
    cout << "global x is " << x << " on exiting useGlobal" << endl;
}