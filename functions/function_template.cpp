#include <iostream>
using namespace std;

template <class T> //we can remove the below two function, template function will suffice
T maxim (T a, T b)
{
    return a>b?a:b;
}

// int maxim(int a, int b)
// {
    // return a>b?a:b; //ternary operator ? means then, : means otherwise , ? then return a, : otherwise return b
    
// }

// float maxim(float a, float b)
// {
    // return a>b?a:b;
// }


int main()
{
    cout<<maxim(12,14)<<endl;
    cout<<maxim(2.3f,1.4f)<<endl;
    return 0;
}