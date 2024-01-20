#include<iostream>
using namespace std;

class c2;

class c1{
    int value;
    friend void exchange(c1 &,c2 &);
    public:
        void input(int data){
            value = data;
        }
        void display(){
            cout << value;
        }
};

class c2{
    int value;
    friend void exchange(c1 &,c2 &);
    public:
        void input(int data){
            value = data;
        }
        void display(){
            cout << value;
        }
};

void exchange (c1 &o1, c2 &o2){
    int temp = o1.value;
    o1.value = o2.value;
    o2.value = temp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.input(18);
    oc2.input(28);

    cout << "Value of oc1 before swapping is : ";
    oc1.display();

    cout << endl << "Value of oc2 before swapping is : ";
    oc2.display();
    
    exchange(oc1,oc2);

    cout << endl << "Value of data of oc1 after swapping is : ";
    oc1.display();
    cout << endl << "Value of data of oc2 after swapping is : ";
    oc2.display();

    return 0;
}