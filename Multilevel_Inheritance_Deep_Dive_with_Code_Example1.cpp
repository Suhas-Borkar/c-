#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
    int roll_no = 0;
    string student_name;
    string student_email;
    string mobile_no;

public:
    void set_student_data();
    void get_student_data();
};

void student ::set_student_data()
{
    cout << "Enter student name " << endl;
    cin >> student_name;
    cout << "Enter student email " << endl;
    cin >> student_email;
    cout << "Enter student Mobile " << endl;
    cin >> mobile_no;
    ++roll_no;
};

void student ::get_student_data()
{
    cout << "The Student Roll Number is " << roll_no << endl;
    cout << "The Student Name is " << student_name << endl;
    cout << "The Student Mobile Number is " << mobile_no << endl;
    cout << "The Student Email Address is " << student_email << endl;
};

class subject_mark : public student
{
protected:
    double Math;
    double Marathi;
    double English;
    double Hindi;
    double sansrit;
    double algorithem;

public:
    void set_subject_mark();
    void get_subject_mark();
};

void subject_mark ::set_subject_mark()
{
    cout << "Enter Marathi Marks " << endl;
    cin >> Marathi;
    cout << "Enter Hindi Marks " << endl;
    cin >> Hindi;
    cout << "Enter English Marks " << endl;
    cin >> English;
    cout << "Enter Math Marks " << endl;
    cin >> Math;
    cout << "Enter algorithem Marks " << endl;
    cin >> algorithem;
    cout << "Enter sansrit Marks " << endl;
    cin >> sansrit;
}

void subject_mark ::get_subject_mark()
{
    cout << "   All Subject and Mark" << endl;
    cout << "Marathi      :" << Marathi << endl;
    cout << "Hindi        :" << Hindi << endl;
    cout << "English      :" << English << endl;
    cout << "Math         :" << Math << endl;
    cout << "algorithem   :" << algorithem << endl;
    cout << "sansrit      :" << sansrit << endl;
};

class result : public subject_mark
{
protected:
    // int persantage = Marathi+ Hindi + English + Math + algorithem;
public:
    void getpersantage();
};

void result ::getpersantage()
{
    get_student_data();
    get_subject_mark();
    cout << endl;
    cout << "Your Persantage is " << (Marathi + Hindi + English + Math + algorithem + sansrit) / 6 << "%" << endl;
};

int main()
{
    result stud[2];
    for (int i = 0; i < 2; i++)
    {
        stud[i].set_student_data();
        stud[i].set_subject_mark();
        stud[i].getpersantage();
    }
}