#include <iostream>
using namespace std;

int main()
{
    unsigned int passes{0};
    unsigned int failures{0};
    unsigned int studentCounter{0};

    //process 10 students using counter-controlled loop
    while (studentCounter <= 10)
    {
        cout << "Enter result (1 - pass) (2 - fail): ";
        int result;
        cin >> result;

        if (result == 1)
        {
            passes = passes + 1;
        }
        else
        {
            failures = failures + 1;
        }

        studentCounter += 1;
    }

    cout << "Passed: " << passes << endl;
    cout << "Failed: " << failures << endl;
}