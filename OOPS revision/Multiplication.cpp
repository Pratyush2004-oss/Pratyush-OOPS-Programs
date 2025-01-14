#include <iostream>

using namespace std;

class A{
    int a , b;
    public:
    A(int a, int b){
        this->a = a;
        this->b = b;
    }
    void show() {
        cout << a*b << endl;
    }
};

class B{
    float a , b;
    public:
    B(float a, float b){
        this->a = a;
        this->b = b;
    }
    void show() {
        cout << a*b << endl;
    }  
};
int main(){

    return 0;
}