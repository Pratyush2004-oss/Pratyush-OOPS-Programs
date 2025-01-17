#include <iostream>

using namespace std;

class String {
    string a;
    public:
    String(string a){
        this->a = a;
    }

    void operator==(String obj){
        if(a == obj.a){
            cout << "Both strings are equal.." << endl;
        }
        else{
            cout << "Both strings are different.." << endl;
        }
    }
};

int main(){
    String s1("Hello"), s2("Hello"), s3("Hii");
    s1.operator==(s2);    
    s1.operator==(s3);
}