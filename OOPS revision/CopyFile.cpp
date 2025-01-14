#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile;
    ofstream onFile;
    char str;
    inFile.open("D:\\Data Analytics\\OOPS C++\\OOPS revision\\demo.txt");
    onFile.open("D:\\Data Analytics\\OOPS C++\\OOPS revision\\temp.txt");

    while (inFile.get(str))
    {       
        onFile.put(str);
    }
    cout << "Copied"<< endl;
    inFile.close();
    onFile.close();
    
    return 0;
}