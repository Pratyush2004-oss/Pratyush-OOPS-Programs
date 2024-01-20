#include<iostream>
using namespace std;

class sum{
public:
    void add(int a, int b){
        int sum = a+b;
        cout << sum << endl;
    }
    void add(int a, int b, int c){
        int sum = a+b+c;
        cout << sum << endl;
    }
    void add(float a, float b){
        float sum = a+b;
        cout << sum << endl;
    }
};

int main(){
    sum s;
    s.add(1,2,3);
    s.add(12,4);
    s.add(45.12f,75.1f);

    return 0;
}