#include <iostream>
using namespace std;

int main()
{
    unsigned int count;

    for (count = 1; count <= 10; count++)
    {
        if (count == 5)
        {
            // break;
            continue; // skip the remaining statement the proceeds with the next iteration.
        }

        cout << count << endl;
    }

    cout << "\nBroke out of loop at count = " << count << endl;
}