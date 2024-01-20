#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
        A(int a, int b){
            this->a = a;
            this->b = b;
        }
        void show(){
            cout << "The value of a and b are : " << a << "\t" << b << endl;
        }
};

int main(){
    A obj(4,8);
    obj.show();

}