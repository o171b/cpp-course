#include <iostream>
using namespace std;

#define PI 3.1425
#define c cout

int main()
{
    cout<<PI; //where this value PI is appearing in the program it'll be replaced by 3.1425
    c<<10; //cout is changed to c, using #define
}

/*#define is useful for defining symbolic constants, like value of pi etc*/

#define SQR(x) (x*x)
int main()
{
    cout<<SQR(5); //this will be replaced by 5*5 or x*x 
}

/*so when is it replaced? it is replaced before the compilation process starts, so 
precompiler, preprocessor directives*/

#define msg(x) #x

int main()
{
    cout<<msg(hello); //it will convert to a string and print hello
}

//condition for define
#ifndef //if not already defined
    #define PI 3.1425 //then define
#endif //end