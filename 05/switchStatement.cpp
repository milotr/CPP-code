// 5.11
// Using a switch statement to count letter grades.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int total{0};
    unsigned int gradeCounter{0};
    unsigned int aCount{0};
    unsigned int bCount{0};
    unsigned int cCount{0};
    unsigned int dCount{0};
    unsigned int eCount{0};
    unsigned int fCount{0};

    cout << "Enter the integer grades in the range 0-100. \n"
         << "Type the end-of-file indicator to terminate input: \n"
         << "On Linux/MacOS tpye <Ctrl> d then press Enter\n"
         << "On Windows type <Ctrl> z then press Enter\n";

    int grade;

    // loop until user enters the end-of-file indicator
    while (cin >> grade)
    {
        total += grade;
        ++gradeCounter;

        //increment appropriate letter-grade counter
        switch (grade / 10)
        {
        case 9:
        case 10:
            ++aCount;
            aCount; // when ever a 9 or 10, count as 1 in
            break;  //exit switch

        case 8:
            ++bCount;
            break;

        case 7:
            ++cCount;
            break;

        case 6:
            ++dCount;
            break;

        default:
            ++fCount;
            break;
        } // end switch
    }     // end while

    cout << fixed << setprecision(2); // set floating number points

    cout << "\nGrade Report: \n"; // display

    if (gradeCounter != 0)
    {
        double average = static_cast<double>(total) / gradeCounter; //calculate average of all grades entered.

        cout << "Total of the " << gradeCounter << " grades entered is " << total << "\nClass average is " << average << "\nNumber of sutdents who recieved each grade: "
             << "\nA:" << aCount << "\nB:" << bCount << "\nC:" << cCount << "\nD:" << dCount << "\nF:" << fCount << endl;
    }
    else
    {
        cout << "No grades were entered" << endl;
    }
}