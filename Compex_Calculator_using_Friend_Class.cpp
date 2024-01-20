#include<iostream>
using namespace std;
// Forward Decleration

class Complex;

class Calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }
        int sum_RealPart(Complex, Complex);
        int sum_ComplexPart(Complex, Complex);
};

class Complex{
    int a, b;
    protected:
        int c=10;
    public:
        void setValue(int n1, int n2){
            a = n1;
            b = n2;
        }

        //Individual making the friend function of the class Calculator
        friend int Calculator::sum_RealPart(Complex o1, Complex o2);
        friend int Calculator::sum_ComplexPart(Complex o1, Complex o2);

        //Declare the entire class Calculator as friend
        friend class Calculator;
        
        void printNumber(){
            cout << "Value of the complex number is : " << a << " + " << b << "i" << endl;
        }
};

int Calculator :: sum_RealPart(Complex o1, Complex o2){
    return (o1.a+o2.a);
}
int Calculator :: sum_ComplexPart(Complex o1, Complex o2){
    return (o1.b+o2.b);
}

int main(){
    Complex c1,c2;
    c1.setValue(1,4);
    c1.printNumber();
    c2.setValue(2,5);
    c2.printNumber();

    Calculator calc;
    int RealRes = calc.sum_RealPart(c1,c2);
    int complexRes = calc.sum_ComplexPart(c1,c2);

    cout << "Value of the complex number is : " << RealRes << " + " << complexRes << "i" << endl;
    

    return 0;
}
