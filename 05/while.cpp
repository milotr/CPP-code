// 5.1
// Counter-controller iteration with the while iteration statement.

#include <iostream>
using namespace std;

int main()
{
    unsigned int counter{1}; // variable

    while (counter <= 10) // while (cond)
    {
        cout << counter << "   ";
        counter++; // increment for counter
    }

    cout << endl;
}