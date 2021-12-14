#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    Student student1{"John Blue", 65};

    cout << student1.getName() << " 's letter grade qeuivalent of " << student1.getAverage() << " is: " << student1.getLetterGrade() << endl;
}