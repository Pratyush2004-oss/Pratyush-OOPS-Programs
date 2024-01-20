#include<iostream>
using namespace std;

class Complex{
public:
    int real, img;
    Complex(int x, int y){
        real = x;
        img = y;
    }    

    Complex operator+ (Complex &c){
        Complex ans(0,0);
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

int main(){

    Complex c1(1,7);
    Complex c2(5,6);

    Complex c3 = c1+c2;
    cout << endl << "Complex eq be : " << c3.real << " + " << c3.img << "i" << endl;  

    cout << "Real part of Complex equation is : " << c3.real << endl;
    cout << "Imaginary part of Complex equation is : " << c3.img << endl;
    

    return 0;
}