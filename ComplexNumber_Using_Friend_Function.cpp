#include<iostream>
using namespace std;

class Complex{
    int a, b;
    protected:
        int c=10;
    public:
        void setValue(int n1, int n2){
            a = n1;
            b = n2;
        }
        friend Complex sumComplex(Complex o1, Complex o2);
        // friend Complex print(Complex o1);
        void printNumber(){
            cout << "Value of the complex number is : " << a << " + " << b << "i" << endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setValue((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}

// Complex print(Complex o1){
//     cout << o1.c;
// }


int main(){
    Complex c1,c2;
    c1.setValue(2,5);
    c1.printNumber();

    c2.setValue(3,6);
    c2.printNumber();

    Complex sum = sumComplex(c1,c2);
    sum.printNumber();

    // print(c1);
    return 0;
}