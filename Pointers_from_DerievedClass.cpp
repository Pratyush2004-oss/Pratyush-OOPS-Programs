#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base= 10;
        void display(){
            cout << endl << "The value of var in Base class is : " << var_base; 
        }
};

class DerrievedClass : public BaseClass{
    public:
        int var_derived = 20;
        void display(){
            cout << endl << "The value of var in Base class is : " << var_base; 
            cout << endl << "The value of var in Derieved class is : " << var_derived;
        }
};

int main(){
    BaseClass *baseClass_pointer;
    BaseClass obj_base;
    DerrievedClass obj_derieved;
    obj_derieved.display();
    baseClass_pointer = &obj_derieved;
//          baseClass_pointer->var_base = 457; will throw an error
    baseClass_pointer->var_base = 457;
    baseClass_pointer->display();

    DerrievedClass *derivedClass_pointer = &obj_derieved;
    derivedClass_pointer->var_base = 18;
    derivedClass_pointer->var_derived = 28;
    derivedClass_pointer->display();

    return 0;
}