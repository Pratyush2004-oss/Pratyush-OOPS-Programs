#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class Demo{
    T1 a;
    T2 b;
    public:
    Demo(T1 a, T2 b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout << this->a << " \t" << this->b;
    }
};
int main(){

    Demo<char, int> obj(65, 20.5);
    obj.display();

    return 0;

}