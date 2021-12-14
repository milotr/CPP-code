#include <string>

class Student
{
public:
    //constructor
    Student(std::string studentName, int studentAverage)
        : name{studentName}
    {
        setAverage(studentAverage); //sets average data member if studentAverage is valid
    }

    // validate
    void setAverage(int studentAverage)
    {
        //keeping the average between 0 and 100
        if (studentAverage > 0)
        {
            if (studentAverage <= 100)
            {
                average = studentAverage;
            }
        }
    }

    //sets the name of the student
    void setName(std::string studentName)
    {
        name = studentName;
    }

    // return the name of the student
    std::string getName() const
    {
        return name;
    }

    // return the average value
    int getAverage() const
    {
        return average;
    }

    // conditions: return the letter
    std::string getLetterGrade() const
    {
        std::string letterGrade; //variable

        if (average >= 90)
        {
            letterGrade = "A";
        }
        else if (average >= 80)
        {
            letterGrade = "B";
        }
        else if (average >= 70)
        {
            letterGrade = "C";
        }
        else if (average >= 60)
        {
            letterGrade = "D";
        }
        else if (average >= 50)
        {
            letterGrade = "E";
        }
        else
        {
            letterGrade = "F";
        }

        return letterGrade;
    }

    //sets of variable
private:
    std::string name;
    int average{0};
};