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
    string st = "Pratyush Mishra";
    string st2;
    // opening file using constructure and writing it
    ofstream out("Sample.txt"); //write operation
    out << st;

    // opening file using constructure and reading it
    ifstream in("sample2.txt");
    // in >> st2; //reads only string upto white space or a new line by default
    getline(in, st2); // reads the whole line upto new line 
    cout << st2;




}