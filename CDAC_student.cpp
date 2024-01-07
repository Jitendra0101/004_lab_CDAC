#include <bits/stdc++.h>
#include <string.h>
using namespace std;
static int studentIndex = 0;

class Course
{

    vector<string> courses;

public:
    void setCourse(string course)
    {
        this->courses.push_back(course);
    }
    int getCoursesChosen()
    {
        return this->courses.size();
    }

    string getCourse(int index)
    {
        return this->courses[index];
    }
};

class Student : public Course
{
    int rollNumber;
    string name;
    long mobileNumber;

public:
    Student() {}
    Student(string name, long mobileNumber)
    {
        this->rollNumber = studentIndex + 1;
        this->name = name;
        this->mobileNumber = mobileNumber;
    }
    int getrollNumber()
    {
        return this->rollNumber;
    }
    string getName()
    {
        return this->name;
    }
    long getMobileNumber()
    {
        return this->mobileNumber;
    }
};

int takeChoice()
{
    int choice;
    cout << "Enter your choice " << endl;
    cout << "Press 1 to register a student" << endl;
    cout << "Press 2 to take a course" << endl;
    cout << "Press 3 to display specific student's course" << endl;
    cout << "Press 4 to display all students and their registered courses" << endl;
    cout << "Press 5 to exit the menu" << endl;
    cin >> choice;
    return choice;
}

string selectCourse()
{
    string choice;
    cout << "Enter course you want to select" << endl;
    cout << "Enter DAC to select PGDAC" << endl;
    cout << "Enter DBDA to select PGDBDA" << endl;
    cout << "Enter VLSI to select PGVLSI" << endl;
    cout << "Enter DITISS to select PGDITISS" << endl;
    cout << "Enter AI to select PGDAI" << endl;
    cin >> choice;
    return choice;
}

int main()
{
    vector<Student> students;
    bool flag = true;
    do
    {
        string nameOfStudent, courseSelected;
        long mobileNumberOfStudent;
        int choice = takeChoice();
        switch (choice)
        {

        case 1:
            cout << "Please enter name of student" << endl;
            cin >> nameOfStudent;
            cout << "Please enter mobile number of student" << endl;
            cin >> mobileNumberOfStudent;
            students.push_back(Student(nameOfStudent, mobileNumberOfStudent));
            cout << "Student Registration Successful." << endl;
            cout << "----------------------------------------------------------------" << endl;
            studentIndex++;
            break;

        case 2:
            cout << "Please enter mobile number of student" << endl;
            cin >> mobileNumberOfStudent;
            for (int i = 0; i < studentIndex; i++)
            {
                if (students[i].getMobileNumber() == mobileNumberOfStudent)
                {
                    courseSelected = selectCourse();
                    students[i].setCourse(courseSelected);
                    cout << "Course added" << endl;
                    cout << "----------------------------------------------------------------" << endl;
                    break;
                }
            }
            cout << "No student registration found on " << mobileNumberOfStudent << endl;
            cout << "----------------------------------------------------------------" << endl;
            break;

        case 3:
            cout << "Please enter mobile number of student" << endl;
            cin >> mobileNumberOfStudent;

            for (int i = 0; i < studentIndex; i++)
            {
                if (mobileNumberOfStudent == students[i].getMobileNumber())
                {
                    cout << "Student's Details are: " << endl;
                    cout << "Name of student: " << students[i].getName() << endl;
                    cout << "Roll Number of student: " << students[i].getrollNumber() << endl;
                    cout << "Mobile Number of student: " << students[i].getMobileNumber() << endl;

                    if (students[i].getCoursesChosen() == 0)
                    {
                        cout << "You have no courses selected" << endl;
                        cout << "----------------------------------------------------------------" << endl;
                        break;
                    }
                    else
                    {
                        cout << "Courses chosen are: " << endl;
                        for (int j = 0; i < students[i].getCoursesChosen(); j++)
                        {
                            cout << students[i].getCourse(j) << endl;
                        }
                        cout << "----------------------------------------------------------------" << endl;
                        break;
                    }
                }
            }

            cout << "No student registration found on " << mobileNumberOfStudent << endl;
            cout << "----------------------------------------------------------------" << endl;
            break;
        case 4:
            for (int i = 0; i < studentIndex; i++)
            {
                cout << "Student's Details are: " << endl;
                cout << "Name of student: " << students[i].getName() << endl;
                cout << "Roll Number of student: " << students[i].getrollNumber() << endl;
                cout << "Mobile Number of student: " << students[i].getMobileNumber() << endl;

                if (students[i].getCoursesChosen() == 0)
                {
                    cout << "You have no courses selected" << endl;
                    cout << "----------------------------------------------------------------" << endl;
                }
                else
                {
                    cout << "Courses chosen are: " << endl;
                    for (int j = 0; i < students[i].getCoursesChosen(); j++)
                    {
                        cout << students[i].getCourse(j) << endl;
                    }
                    cout << "----------------------------------------------------------------" << endl;
                }
            }
            break;

        case 5:
            flag = false;
            cout << "Thank you:)" << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    } while (flag);

    return 0;
}
