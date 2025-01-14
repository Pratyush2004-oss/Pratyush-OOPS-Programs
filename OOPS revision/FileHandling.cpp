#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream onFile;
    onFile.open("D:\\Data Analytics\\OOPS C++\\OOPS revision\\demo.txt");
    onFile << "Thank you so Much :)";

    cout << "Data has been written in the file" << endl;

    onFile.close();

    ifstream inFile;
    string a;
    inFile.open("D:\\Data Analytics\\OOPS C++\\OOPS revision\\demo.txt");
    while (getline(inFile, a))
    {
        cout << a;
    }
    inFile.close();

    return 0;
}