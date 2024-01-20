#include<iostream>
using namespace std;

class Parent{
public:
    Parent(){
        cout << "Parent Class" << endl;
    }
};
class Child1 : public Parent{
public:
    Child1(){
        cout << "Child_1 Class" << endl;
    }
};

class Child2 : public Parent{
public:
    Child2(){
        cout << "Child_2 Class";
    }    
};

int main(){
    Child1 c1;
}

