#include<iostream>
#include<fstream>
#include<cstring>

/*
    The useful classes for working with files in C++ are: 
    1. fstreambase
    2. ifstream --> derived from fstreambase to read the file 
    3. ofstream --> derived from fstreambase to write the file
*/

using namespace std;

/*
    in order to work with files in C++, you will have to open it. Primarily,there are 2 ways to open a file :
    1. using Cnstructure
    2. using a member function open() of the class
*/ 

int main(){
    ofstream hout("Sample.txt");
    cout << "Enter your name : ";
    string name;
    getline(cin,name);
    hout << name;

    hout.close();

    ifstream hin("Sample.txt");
    string content;
    getline(hin, content);
    cout << endl << "The content of the Sample text file is : " << content;
    hin.close();

}