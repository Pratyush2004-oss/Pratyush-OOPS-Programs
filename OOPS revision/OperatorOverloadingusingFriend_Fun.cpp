#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A() {}

    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void show()
    {
        cout << "a : " << a << "\t b : " << b << endl;
    }

    friend A operator+(A obj1, A obj2);
};

A operator+(A obj1, A obj2)
{
    A temp;
    temp.a = obj1.a + obj2.a;
    temp.b = obj1.b + obj2.b;
    return temp;
}

int main()
{
    A obj1(10, 20), obj2(15, 30), obj3;
    obj3 = obj1 + obj2;
    obj1.show();
    obj2.show();
    obj3.show();
    return 0;
}