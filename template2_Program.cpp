#include<iostream>
using namespace std;
/*
            SYNTAX
    template <class t1,class 2>
*/

template <class T1, class T2>
class vector{
    public:
        T1 data1;
        T2 data2;
        vector(T1 data1,T2 data2){
            this->data1 = data1;
            this->data2 = data2;
        }
        void display(){
            cout << "The value of my data is : " << this->data1 << " and the value of my value is : " << this->data2 << endl;
        }
};

int main(){
    vector <char,int> vec('P',75);
    vec.display();

    vector <string,int> vec1("Pratyush",98);
    vec1.display();


    return 0;
}