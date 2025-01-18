#include <iostream>

using namespace std;

class A{
    public:
     void sum(int a, int b){
        cout << "The sum of a and b is " << a+b <<endl;
    }
     void subtract(int a, int b){
        cout << "The difference of a and b is " << a-b << endl;
    }
};
int main(){
    A calc;
    calc.subtract(10,5);
    calc.sum(10,5);
    return 0;
}