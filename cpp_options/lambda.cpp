#include <iostream>
using namespace std;

int main()
{
    //[](){cout<<"Hello World";}();
    //[](int x, int y){cout<<"sum:"<<x+y;}(10,5); //lambda function with parameter list
    //int x=[](int x, int y){return x+y;}(10,5);
    //cout<<x;

    int a=10;
    int b=5;
    [a,b](){cout<<a<<" "<<b;}();

    /*inside main function i've two variables a and b, and i want this function to display
    the value of a and b, but it will not display, we've to capture these variables a and b
    as directly they're not accessible. so we insert a and b in capture list square brackets
    and make them accessible in cout<<*/
    /*suppose i want to increment a and b ++a and ++b like cout<<++a<<++b, is it possible?
    No, these variables are read-only, we've to make the variables as reference variables
    &a , &b inorder to modify them*/

}

//[capture-list](parameter-list)return type{body};
//if you want to call the function at the end put parenthesis()
//lambda functions will define the function and call the function
/*capture list defines the outside variables that are accessible from within the lambda
function body*/
