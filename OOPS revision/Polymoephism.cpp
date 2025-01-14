#include <iostream>

using namespace std;

class ABC {
    public:
    ABC() {
        cout << "Constructor function with 0 parameters" << endl;
    }
    ABC(int a) {
        cout << "Constructor function with 1 parameters" << endl;
    }
    ABC(char a) {
        cout << "Constructor function with 1 character parameters " << endl;
    }
    ABC(int a, char b) {
        cout << "Constructor function with 2 parameters 1 is int and one is char" << endl;
    }
    ABC(char a, int b) {
        cout << "Constructor function with 2 parameters one is char and one is int" << endl;
    }
    ABC(int a, int b) {
        cout << "Constructor function with 2 parameters are int" << endl;
    }
    ABC(float a, int b) {
        cout << "Constructor function with 2 parameters one is float and one is int" << endl;
    }
    ~ABC(){
        cout << "Destructor is called...." << endl;
    }
};
int main(){
    ABC obj(10, 1); 
    ABC obj2(); 
    ABC obj3(1); 
    ABC obj4('a'); 
    ABC obj5(10, 'a'); 

    return 0;
}