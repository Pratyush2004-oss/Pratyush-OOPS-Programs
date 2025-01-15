#include <iostream>
using namespace std;

template <class T1, class T2>

class myClass
{
    T1 data1;
    T2 data2;

public:
    myClass(T1 a, T2 b){
        this->data1 = a;
        this->data2 = b;
    }
    void display()
    {
        cout << data1 << " \t" << data2;
    }
};

int main() {
    myClass <int, string> obj(10, "Hello");
    obj.display();
}