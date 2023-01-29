#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter n";
    cin >> n;
    
    for (i=1; i<=10; i++)
    {
        cout << n << " X " << i << " = " << i*n ;
        cout << endl;
        }
    return 0;
}