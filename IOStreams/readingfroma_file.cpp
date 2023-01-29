#include <iostream>
#include <fstream>
using namespace std;

//reading from a file

int main()
{
    //ifstream readit("my.txt"); //ifstream, inputfile stream class, readit object name,mytxt file to open
    ifstream readit; //other way of opening a file
    readit.open("my.txt"); //the other way of opening a file
    if(readit.is_open())cout<<"File is Opened"<<endl;
    int number; //this is not supposed to be in order
    string name;
    string branch;

    readit>>name>>number>>branch; //this should be in order
    readit.close(); //closing the file after reading it
    cout<<"Name "<<name<<endl;
    cout<<"Number "<<number<<endl;
    cout<<"Branch "<<branch<<endl;
}
/*in my file i have four texts or four lines, in first line i have hello which is a string,
then 25 which is an int and third line i've the word world which is a string and so on, so
i've to write it in a similar order in the program */