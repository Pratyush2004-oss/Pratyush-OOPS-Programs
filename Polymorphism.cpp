// Polymorphism
    // ---one name, different forms
    // eg. function overloading, operator overloading 
    // eg. virtual function

    // Polymorphism are of 2 types :
    // 1: Compile Time polymorphism : Achieved using-----
        // 1.1: Function overloading
        // 1.2: Operator Overloading
    // 2: Run Time Polymorphism : Achieved using----
        // 2.2: Virtual Functions  



#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base= 10;
        virtual void display(){
            cout << endl << "The value of var in Base class is : " << var_base; 
        }
};

class DerrievedClass : public BaseClass{
    public:
        int var_derived = 20;
        void display(){
            cout << endl << "The value of var in Base class inherited in Derived class is : " << var_base; 
            cout << endl << "The value of var in Derieved class is : " << var_derived;
        }
};

int main(){
    BaseClass *baseClass_pointer;
    BaseClass obj_base;

    DerrievedClass obj_derived;

    baseClass_pointer = &obj_derived;
    baseClass_pointer->display();

    return 0;
}