#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>

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
    pair<float, string> getGrade()
    {
        float grade = 0.0;
        string letterGrade;

        if (mark >= 80)
        {
            grade = 4.0;
            letterGrade = "A+";
        }
        else if (mark >= 75)
        {
            grade = 3.75;
            letterGrade = "A";
        }
        else if (mark >= 70)
        {
            grade = 3.50;
            letterGrade = "A-";
        }
        else if (mark >= 65)
        {
            grade = 3.25;
            letterGrade = "B+";
        }
        else if (mark >= 60)
        {
            grade = 3.00;
            letterGrade = "B";
        }
        else if (mark >= 55)
        {
            grade = 2.75;
            letterGrade = "B-";
        }
        else if (mark >= 50)
        {
            grade = 2.50;
            letterGrade = "C+";
        }
        else if (mark >= 45)
        {
            grade = 2.25;
            letterGrade = "C";
        }
        else if (mark >= 40)
        {
            grade = 2.00;
            letterGrade = "D";
        }
        else
        {
            grade = 0.00;
            letterGrade = "F";
        }

        return {grade, letterGrade};
    }

    float gpXch()
    {
        return getGrade().first * creditHour;
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
         << "After that, Enter Each Course Name, Obtained Number (out of 100) and Credit for the Course." << endl
         << "\n"
         << "Enter Number of Courses : ";

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
         << "Your Total CGPA is : " << fixed << setprecision(1) << CGPA << endl
         << "\n"
         << "Wish you All the Best!" << endl
         << "\n"
         << "\n"
         << "Detail View : " << "\n"
         << endl;

    for (Subject course : courses)
    {
        cout << "Name : " << course.name << ", Mark : " << course.mark << ", Grade : " << course.getGrade().first << ", Letter Grade : " << course.getGrade().second << ", Credit Hour : " << course.creditHour << ", Grade X Credit : " << course.gpXch() << endl;
    }

    return 0;
}