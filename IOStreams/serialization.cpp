#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator<<(ofstream &ofs, Student &s); //friend function are used for operator overloading
};
ofstream & operator<<(ofstream &ofs, Student &s)
{
    ofs<<s.name<<endl; 
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs; //thats it, we've overloaded <<operator
}

int main()
{
    Student s1;
    s1.name="Ahmad";s1.roll=10;s1.branch="CS";
    Student s2;
    s2.name="Saeed";s2.roll=15;s2.branch="Medicine";

    ofstream ofs("Student.txt",ios::trunc);
    //ofs<<s1.name<<endl; //instead of writing object states,, student, name , roll and brance seperately
    //ofs<<s1.roll<<endl;
    //ofs<<s1.branch<<endl;

    ofs<<s1; //i can use operator overloading to simplify my code on object s1
    ofs<<s2;

    ofs.close();
}

/*we've to overload this operator of ofs into a student class*/
/*ofs<<s1, i can send ofs to operator << along with student object s1 and it'll
be writing the entire thing in a file.*/
/*ofstream & operator<<(ofstream &ofs, Student &s), this function will handle
adding student details*/
/*main function is creating an object of student class, initializing it and storing it
creating an object=s1, initializing it with values, and storing it ofs<<s1; */ 