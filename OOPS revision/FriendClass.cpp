#include <iostream>

using namespace std;

class A
{
    int a = 10, b = 20;
    friend class B;
};

class B
{
    public: 
    void show(A obj) {
        cout << "a : " << obj.a << "\t b : " << obj.b << endl;         
    }
};
int main()
{
    A obj;
    B obj2;
    obj2.show(obj);

    return 0;
}