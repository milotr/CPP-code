#include <iostream>
#include <iomanip> //parameterized stream manipulators
using namespace std;

int main()
{
    int total{0};
    unsigned int gradeCounter{0};
    cout << "Enter grade or -1 to quit: ";
    int grade;
    cin >> grade;

    while (grade != -1)
    {
        total = total + grade;
        gradeCounter += 1;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    if (gradeCounter != 0)
    {
        double average{static_cast<double>(total) / gradeCounter}; //use number with decimal point to calculate average of grades

        cout << "\nTotal of the " << gradeCounter << "grades enterd is " << total;
        cout << setprecision(2) << fixed; //2 digits precision
        cout << "\nClass average is " << average << endl;
    }
    else
    {
        cout << "No grades were entered" << endl;
    }
}