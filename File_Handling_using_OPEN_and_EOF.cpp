#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("Sample.txt");
    out << "This is Pratyush Mishra" << endl;
    out << "I'am from Pithoragarh" << endl;
    out << "Currently Pursuing B.Tech form NPSEI, Pithoragarh" << endl;
    out.close();// used to close the Sample file or to unlink it from the main fiie 

    ifstream in;
    in.open("Sample.txt");
    string st;

    while(in.eof() == 0){   //eof() is used to read the file till it was ended alse known as *end of file*
        getline(in,st);
        cout << st << endl;
    }

    in.close();
}