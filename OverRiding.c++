#include<iostream>
using namespace std;

class Parent{
public:
    virtual void  print(){
        cout << "Parent Class" << endl;
    }
    void show(){
        cout << "Parent Class" << endl;
    }
};
class Child: public Parent{
public:
    void print(){
        cout << "Child Class" << endl;
    }
    void show(){
        cout << "Child Class" << endl;
    }
};

class GrandChild: public Child{
public:
    void print(){
        cout << "GrandChild Class" << endl;
    }
    void show(){
        cout << "Child Class" << endl;
    }
};

int main(){
    Parent *p = new Parent();
    Child c;
    GrandChild G;
    p = &c;
    p->print();
    p->show();

    // G.print();
    
}