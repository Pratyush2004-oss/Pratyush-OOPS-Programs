#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){           // Default Constructor
            a = 0;
        }
        Number(int num){
            a = num;
        }
        // when no copy constructor is found, compiler supply its own copy constructor 
        Number (Number &obj){
            cout << endl << "Copy constructor called !!!!......." << endl;
            a = obj.a;

        }
        void display(){     // Parameterized Constructor
            cout << "The number for this object is : " << a << endl;
        }
};

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    // z1 should exactly resemble z

    Number z1(z);           // Copy constructor invoked
    z1.display();

    z2 = z;                 // copy constructor didn't invoke 
    z2.display();
    
    Number z3 = z;          // copy constructor invoked
    z3.display();

    return 0;
}