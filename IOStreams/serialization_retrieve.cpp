#include <iostream>
#include <fstream>
using namespace std;

//Retrieving state of an object by overloading extraction operator >>

class Student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator<<(ofstream &ofs, Student &s);
    friend ifstream & operator<<(ifstream &ifs, Student &s); 
};
ifstream & operator>>(ifstream &ifs, Student &s)
{
    ifs>>s.name>>s.roll>>s.branch;
    return ifs; 
}

ofstream & operator<<(ofstream &ofs, Student &s)
{
    ofs<<s.name<<endl; 
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs; 
}

int main()
{
    Student s1;
    Student s2;
 
    ifstream ifs("Student.txt");
    ifs>>s1; //i've to override extraction operator >>
    ifs>>s2;

    cout<<"Name "<<s1.name<<endl;
    cout<<"Roll "<<s1.roll<<endl;
    cout<<"Branch "<<s1.branch<<endl;
    cout<<"Name "<<s2.name<<endl;
    cout<<"Roll "<<s2.roll<<endl;
    cout<<"Branch "<<s2.branch<<endl;
    ifs.close();

}

/*make sure you make Student class object as reference &s otherwise the object will not be
updated*/
/*you can see the simplicity of the main  function, how to save the data of a student,
how to retrieve the data of a student . All the complexity is managed by these operator overloading
functions inside the main class*/
