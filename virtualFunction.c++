#include<iostream>
using namespace std;

class A{
    public:
        virtual void show(){
            cout << "Parent Class \n";
        }
};

class B: public A{
    public:
        void show(){
            cout << "Child Class \n";
        }
};

class C: public A,B{
    public:
        void show(){
            cout << "GrandChild Class \n";
        }
};

int main(){
    A *ptr = new A();
    B bb;
    ptr = &bb;
    ptr->show();
    // bb.show();
    C cc;
    cc.show();
}