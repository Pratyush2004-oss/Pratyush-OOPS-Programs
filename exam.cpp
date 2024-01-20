#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string str;
    ifstream in("Sample.txt");
    while(in.eof() == 0){
        getline(in,str);
        cout << str;
       
    }
    ofstream out("Sample2.txt");
    out << str;
    
}