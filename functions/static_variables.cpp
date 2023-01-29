#include <iostream>
using namespace std;


void fun()
{
    static int v=0; //giving it keyword static will make it as a global variable,
    int a=5; //but it will be accessible by this function only and it will remain,
    v++;    //in code section, meaning it will always remain in the memory,
    cout<<a<<" "<<v<<endl; //and it gets destroyed only when the program ends.
}


int main()
{
    fun();
    fun();
    fun();
}
//static variables is just like a global variable but its scope is limited,
//to that particular function only

//terminal result
//5 1
//5 2
//5 3