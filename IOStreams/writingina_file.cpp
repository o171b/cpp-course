#include <iostream>
#include <fstream> //header file for file stream
using namespace std;

//writing data into a file

int main()
{
    ofstream outfile("my.txt", ios::trunc); //writing into a file using class ofstream and object name as outfile(name it anything u want)
    outfile <<"john"<<endl;
    outfile <<26<<endl;
    outfile <<"cs"<<endl;
    outfile.close(); //closing the file
}

//ios::trunc is a mode for truncating or rewriting the file, so all contents will get deleted
//ios::app is a mode for appending or over writing the file, contents wont be deleted 
//by default is ios::trunc, so in my code i've already a file with some content i will use append

