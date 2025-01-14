#include <iostream>
using namespace std;

template <class T>
class Multiply
{
    T a, b;

public:
    Multiply(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    void multiply()
    {
        cout << "The result of multiplication of " << a << " and " << b << " is : " << a*b << endl ;
    }
};

int main() {
    Multiply <int> obj1(10,20);     //multiply 2 integer
    obj1.multiply();

    Multiply <float> obj2(10.5, 20.7);          // multiply 2 float values
    obj2.multiply();

}