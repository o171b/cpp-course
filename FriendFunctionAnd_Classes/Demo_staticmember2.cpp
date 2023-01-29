#include <iostream>
using namespace std;

class Lexus
{
public:
    static int price; //declaring price member as static
    static int getPrice()
    {
        return price; //this function will return price
    }
};
int Lexus::price=20;

int main()
{
 Lexus ls1,ls2,ls3;
 cout<<ls1.price<<endl; //display using object
 cout<<ls2.price<<endl;
 cout<<ls3.price<<endl;
 cout<<Lexus::price<<endl; //display using class
}