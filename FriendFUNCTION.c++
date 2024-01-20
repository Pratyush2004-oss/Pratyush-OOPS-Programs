/*
        Friend function : A function which is not a part of the class but can access the private and protected members of the perticular class.
        it is very complex or impossible to access private and protected members of the class to access directly, so to access them, FRIEND functions are used 

        Syntax:
            friend  <return type>  <function-name> 
            used inside the class 
            then function was decleared and methods was given to the function outside the class
*/

#include<iostream>
using namespace std;

class demo{
    int a = 20;
    protected:
        int b= 560;
    public:
        friend void sum(demo &obj);
};

void sum(demo &obj){
    int sum = obj.a + obj.b;
    cout << "The value of a is : " << obj.a << endl;        //accessing private member of class demo
    cout << "The value of b is : " << obj.b << endl;        //accessing protected member of class demo
    cout << "The value of sum of a and b is : " << sum << endl;
}

int main(){
    demo d1;

    // d1.a;           //direct access is impossible 
    // d1.b;           //direct access is impossible


    sum(d1);

    return 0;
}

