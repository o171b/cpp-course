#include <iostream>
using namespace std;

class BasicCar
{
public:
    void start()
    {
        cout<<"Car Started"<<endl;
    }
};

class AdvancedCar:public BasicCar
{
public:
    void playMusic()
    {
        cout<<"Music Playing"<<endl;
    }
};

int main()
{
    AdvancedCar a;
    BasicCar *ptr=&a; //taking a pointer of basic car and assigned object of advanced car
    ptr->start();
    //ptr->playMusic(); //here compiler will give an error, Basic car has no member named playMusic
    //a.start(); //these functions will display car started and music playing normally
    //a.playMusic();
}
/*Though the car is a basic car and you're calling it advanced car but its actually a basic
car so it will only start*/
