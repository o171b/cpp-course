#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int A[10]={2,4,6,8,12,3,5,7,9,11};

    int max = INT_MIN; //we use contant int_min cuz if we write it as 0 and array has -ive numbers, the output will be always 0

    for(auto x:A)
    {
        if(x>max)
            max=x;
    }
    cout<<"Maximum number is "<<max<<endl;
}