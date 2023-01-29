#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5;i++)
    {
        for(int j=1; j<=5; j++)
        {
            cout<<"("<<i<<","<<j<<") "; //in total this nested for loop will execute for 5*5=25 times
        }
        cout<<endl;
    }
}