#include <iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1); //this is recursive function, its calling itself
    }
}

int main()
{
    int x=5;
    fun(x);
}

//a recursive function is one which calls itself
//terminal result
//5
//4
//3
//2
//1