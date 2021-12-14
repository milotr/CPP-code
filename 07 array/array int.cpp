//Set array s to the even integers from 2 to 10.
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    const size_t arraySize{5}; // initialize in declaration otherwise >> compilation error

    array<int, arraySize> values;

    for (size_t i{0}; i < values.size(); i++)
    {
        values[i] = 2 + 2 * i;
    }

    cout << "Element" << setw(10) << "Value" << endl;

    //output contents of array s in tabular format
    for (size_t j{0}; j < values.size(); ++j)
    {
        cout << setw(7) << j << setw(10) << values[j] << endl;
    }
}