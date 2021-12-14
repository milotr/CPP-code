#include <iostream>
using namespace std;

int main()
{
    int total{0};
    unsigned int gradeCounter{1};

    while (gradeCounter <= 10)
    { //loop 10 times
        cout << "Enter grade: ";
        int grade;
        cin >> grade;
        total = total + grade;
        gradeCounter += 1;
    }

    //average of class
    int average{total / 10};

    //display total and average of grades
    cout << "\n Total of all 10 grades is " << total;
    cout << "\n Class average is " << average << endl;
}