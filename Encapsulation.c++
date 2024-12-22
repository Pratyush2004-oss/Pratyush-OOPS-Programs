#include<iostream>
using namespace std;

class ABC{
    int x;
    public:
        void set(int n){
            x = n;
        }
        void get(){
            cout << "The value of x is : " << x << endl;
        }
};

int main(){
    
    ABC obj1;
    obj1.set(3);
    obj1.get();
    return 0;
}



