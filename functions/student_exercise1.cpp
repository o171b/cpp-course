#include <iostream>
using namespace std;

int Search(int A[], int n, int key) //parameters are array of elements,int n number of element, and key to be searched
{
    for(int i=0; i<n; i++)
        if (key==A[i])
            return i;
    return 0;
}

int main()
{
    int A[]={2,4,5,7,10,9,13};

    int k;
    cout<<"Enter an Element to be Searched:";
    cin>>k;
    int index=Search(A,7,k);

    cout<<"Element found at index :"<<index<<endl;
}