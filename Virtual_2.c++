#include<iostream>
using namespace std;
class Demo{
    public:
        virtual void f1()=0;
        void f2(){
            cout << "I am F2 function" << endl;
        }
};
class ABC: public Demo{
    public:
        void f1(){
            cout << "I am F1 function" << endl;
        }
};
int main(){
    ABC obj;
    obj.f1();
    obj.f2();
}