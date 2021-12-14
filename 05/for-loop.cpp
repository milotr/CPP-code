// 5.2
// Counter-controlled iteration with the for loop.

#include <iostream>
using namespace std;

int main()
{
    for (unsigned int counter{1}; counter <= 10; counter++) // for (var, cond, increment) 
    {
        cout << counter << "   ";
    }

    cout << endl;
}

// do not use != or == for loop-continuation. Example: counter != 10
// results: never becomes false => infinite loop.