#include <iostream>
using namespace std;

int main()
{
    int n,r,sum=0,m;

    cout<<"Enter n";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if (sum==sum) cout<<"Its Amstrong";
    else cout<<"not Amstrong";
    return 0;
}