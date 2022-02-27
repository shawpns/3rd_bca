#include <iostream>
#include <string>
using namespace std;
class Student
{
    int roll;
    string name;
    string address;
    string city;

public:
    student()
    {
        cout << endl<< "Welcome to the Student Information System";
        cout << endl<< "*****************************************";
    }
    void getdata()
    {
        cout << endl<< "Enter student roll number:";
        cin >> roll;
        cout << endl<< "Enter student name:";
        cin >> name;
        cout << endl<< "Enter student address:";
        cin >> address;
        cout << endl<< "Enter student city:";
        cin >> city;
    }
    void putdata()
    {
        cout << endl<< "The student roll number:" << roll;
        cout << endl<< "The student name:" << name;
        cout << endl<< "The student address:" << address;
        cout << endl<< "The student city:" << city;
    }
};

class marks : public Student
{
    int sub1;
    int sub2;
    int sub3;
    int per;

public:
    void input()
    {
        getdata();
        cout << endl<< "Enter the marks1:";
        cin >> sub1;
        cout << endl<< "Enter the marks2:";
        cin >> sub2;
        cout << endl<< "Enter the marks3:";
        cin >> sub3;
    }
    void output()
    {
        cout << endl<< "Student Details:";
        cout << endl<< "****************";
        putdata();
        cout << endl<< "Marks1:" << sub1;
        cout << endl<< "Marks2:" << sub2;
        cout << endl<< "Marks3:" << sub3;
    }
    void calculate()
    {
        per = (sub1 + sub2 + sub3) / 3;
        cout << endl<< "Total percentage:" << per;
        if (per >= 85)
            cout << endl<< "Grade A+";
        else if (per >= 60)
            cout << endl<< "Grade A";
        else if (per >= 50)
            cout << endl<< "Grade B";
        else
            cout << endl<< "Grade C";
    }
};

int main()
{
    marks m1;
    m1.input();
    m1.output();
    m1.calculate();
    return 0;
}