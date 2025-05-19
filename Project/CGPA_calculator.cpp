#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class Subject
{

public:
    string name;
    double mark;
    int creditHour;

    void input()
    {
        cout << "Enter Subject Name : ";
        cin >> name;
        cout << "Enter Obtained Mark (out of 100) : ";
        cin >> mark;
        cout << "Enter Credit for the Course : ";
        cin >> creditHour;
    }

    // get grade
    float getGrade()
    {
        float grade = {};
        if (mark >= 80)
        {
            grade = 4.0;
        }
        else if (mark > 75 && mark < 79)
        {
            grade = 3.75;
        }
        else if (mark > 70 && mark < 74)
        {
            grade = 3.50;
        }
        else if (mark > 65 && mark < 69)
        {
            grade = 3.25;
        }
        else if (mark > 60 && mark < 64)
        {
            grade = 3.00;
        }
        else if (mark > 55 && mark < 59)
        {
            grade = 2.75;
        }
        else if (mark > 50 && mark < 54)
        {
            grade = 2.50;
        }
        else if (mark > 45 && mark < 49)
        {
            grade = 2.25;
        }
        else if (mark > 40 && mark < 44)
        {
            grade = 2.00;
        }
        else
        {
            grade = 0.00;
        };

        return grade;
    }

    float gpXch()
    {
        return getGrade() * creditHour;
    }
};

int main()
{
    int numberOfCourses;
    float totalGpXCh = 0;
    int totalCreditHour = 0;
    double CGPA;

    cout << "Welcome To CGPA Calculator!" << endl
         << "\n"
         << "Please Enter Your Number of Courses First and Hit Enter. Eg: 5" << endl
         << "\n"
         << "After that, Enter Each Course Name, Obtained Number (out of 100) and Credit for the Course." << endl;

    cin >> numberOfCourses;

    vector<Subject> courses(numberOfCourses);

    for (int i = 0; i < numberOfCourses; i++)
    {
        cout << "Subject " << i + 1 << " -> ";
        courses[i].input();
    }

    // calculate CGPA :
    for (Subject course : courses)
    {
        totalGpXCh += course.gpXch();
        totalCreditHour += course.creditHour;
    }
    cout << "totalGpXCh : " << totalGpXCh << endl
         << "totalCreditHour : " << totalCreditHour;
    CGPA = totalGpXCh / totalCreditHour;

    cout << endl
         << "Your Total CGPA is : " << CGPA << endl
         << "\n"
         << "Wish you All the Best!" << endl
         << "\n"
         << "\n"
         << "Detail View : " << "\n"
         << endl;

    for (Subject course : courses)
    {
        cout << "Name : " << course.name << ", Mark : " << course.mark << ", Grade : " << course.getGrade() << ", Credit Hour : " << course.creditHour << ", Grade X Credit : " << course.gpXch() << endl;
    }

    return 0;
}