#include <iostream>
using namespace std;

/*write a class for student with 1.Roll, 2.Name, 3.Marks in 3 subject
4.Function for Total marks, Grade and required methods*/

class Student
{
private:
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int cheMarks;
public:
    Student(int r, string n, int m, int p, int c)
    {
        roll=r;
        name=n;
        mathMarks=m;
        phyMarks=p;
        cheMarks=c;
    }
    int total()
    {
        return mathMarks+phyMarks+cheMarks;
    }
    char grade()
    {
        float average=total()/3;
        if (average > 60)
            return 'A';
        else if(average >= 40 && average < 60)
            return 'B';
        else
            return 'C';
    }
};

int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter Roll number of a Student: ";
    cin>>roll;
    cout<<"Enter Name of a Student: ";
    cin>>name;
    cout<<"Enter Mars in 3 Subjects: ";
    cin>>m>>p>>c;
    Student s(roll,name,m,p,c);
    cout<<"Total Marks: "<<s.total()<<endl;
    cout<<"Grade of Student: "<<s.grade()<<endl;
}