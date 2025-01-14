#include <iostream>

using namespace std;

class A{
    int a, b;
    public:
    A(int a, int b){
       this->a = a;
       this->b = b;
    }
    
    void print(){
        cout << a << "\t"  << b << endl;
    }

    A operator+ (A obj){
        A temp(0,0);
        temp.a = a + obj.a;     // 30 + 10
        temp.b = b + obj.b;     // 40 + 20
        return temp;
    }
    
};
int main() {
    A obj(10, 20);
    obj.print();

    A obj1 (30, 40);
    obj1.print();
    
    A obj3(0, 0);
    obj3.print();
    obj3 = obj1.operator+(obj);
    obj3.print();
    
    return 0;
}