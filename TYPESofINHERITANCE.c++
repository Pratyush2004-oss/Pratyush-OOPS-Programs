#include<iostream>
using namespace std;

class Parent1{
public:
    Parent1(){
        cout << "Parent 1 Class" << endl;
    }
};

class Parent2{
public:
    Parent2(){
        cout << "Parent 2 Class" << endl;
    }
};

class Child: public Parent1, Parent2{
public:
    Child(){
        cout << "Child Class" << endl;
    }
};

class Grandchild: public Child{
public: 
    Grandchild(){
        cout << "GrandChild Class" << endl;
    }
};

int main(){

    Child cc;
    cout << "\n \n*********************************** \n \n";
    Grandchild gc;
    return 0;
}