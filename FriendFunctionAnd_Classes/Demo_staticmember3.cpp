#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    static int addNo; //static member as admission number
    Student(string n) //constructor for student class that take name as parameter
    {
        addNo++; //increment addmission number
        roll=addNo; //assign roll number to admission number, the logic is as we increment addmision number the same number we assign as roll
        name=n;
    }
    void display()
    {
        cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
    }
};
int Student::addNo=0; //outside the class i should define that addNo belongs to student class

int main()
{
    Student s1("John");
    Student s2("Sam");
    Student s3("James");

    s1.display();
    s2.display();
    s3.display();
    cout<<"Number of Admissions "<<Student::addNo<<endl; //to get number of admissions
}

