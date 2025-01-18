#include <iostream>
using namespace std;

class A
{
public:
    virtual void show() = 0;
    void display(){
        cout << "Hi, This is a dispaly function of base class ..." << endl;
    }
};

class B :public A{
    public:
    void show(){
        cout << "This is a show function of derived class.." << endl;
    }
};

int main()
{
    A *a;
    B *b = new B();
    b->display();
    b->show();

    // a = b;
    a->show();
    a->display();

    return 0;
}