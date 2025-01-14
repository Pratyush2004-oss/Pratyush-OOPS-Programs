#include <iostream>
using namespace std;

class X
{
protected:
    string a = "Hello ";
    public:
    void print()
    {
        cout << "String of class X : " << a << endl;
    }
};

class Y
{
protected:
    string b = "World";
    public:
    void display()
    {
        cout << "String of class Y : " << b << endl;
    }
};

class Z : public X, public Y
{
public:
    string c = a.append(b);
    void disp()
    {
        cout << "String of class Z : " << c << endl;
    }
};

int main()
{
    Z z;
    z.print();
    z.display();
    z.disp();

    return 0;
}