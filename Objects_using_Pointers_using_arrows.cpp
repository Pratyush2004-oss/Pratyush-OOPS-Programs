#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void showData(){
            cout << "The complex number is : " << real << "+" << imaginary << "i" << endl;
            cout << "The real part is : " << real << endl;
            cout << "The imaginary part is : " << imaginary << endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};


int main(){
    Complex c1;
    c1.setData(28,18);
    c1.showData();

    Complex *c2 = new Complex;
    c2->setData(18,28);
    c2->showData();


    return 0;
}