#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count;

    Test()
    {
        a=10;
        count++;
    }
    static int get_Count()
    {
        return count;
    }
};
int Test::count=0; //this is a global variable but accessibe only inside Test class


int main()
{
    Test t1,t2; //we created two objects of class Test
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    t1.count=25;
    cout<<t2.count<<endl; //result is 25, as we have a static count variable
    cout<<Test::count<<endl; //we can access using class also
    cout<<Test::get_Count(); //static data member can be called using class name
    cout<<t1.get_Count(); //and they can be called upon an object

}