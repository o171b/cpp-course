#include <iostream>
using namespace std;

/*1.write a class for Employee
Derived classes
1.Fulltime Employee with Salary
2.Part time Employee with Daily Wages
Write required methods*/

class Employee
{
private:
    int eid;
    string name;
public:
    Employee(int e, string n)
    {
        eid=e;
        name=n;
    }
    int getEmployeeID(){return eid;}
    string getName(){return name;}
 };

class FulltimeEmployee:public Employee
{
private:
    int salary;
public:
    FulltimeEmployee(int e, string n, int sal):Employee(e,n)
    {
        salary=sal;
    }
    int getSalary(){return salary;}
};

class ParttimeEmployee: public Employee
{
private:
    int wage;
public:
    ParttimeEmployee(int e, string n, int w):Employee(e,n)
{
    wage=w;
}
    int getWage(){return wage;}
};

int main()
{
    ParttimeEmployee p1(1,"John",3000);
    FulltimeEmployee p2(2,"James",5000);
    FulltimeEmployee p3();
    

    cout<<"Salary of "<<p2.getName()<<" is "<<p2.getSalary()<<endl;
    cout<<"Salary of "<<p1.getName()<<" is "<<p1.getWage()<<endl;
}