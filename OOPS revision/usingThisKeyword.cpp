#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    int marks;
    string name;

public:
    Student(int rollNo, int marks, string name)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }
    void  printValue(){
        cout << endl
             << "Name : " << name << endl
             << "roll Number : " << rollNo << endl
             << "marks : " << marks << endl;
    }
};
int main()
{
    Student s1(1, 28, "Pratyush");
    s1.printValue();
}