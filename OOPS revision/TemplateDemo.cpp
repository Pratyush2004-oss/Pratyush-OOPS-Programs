#include <iostream>

using namespace std;

template <class T>
void show(T a, T b){
    cout << "a : " << a << " \t b : " << b <<endl;
}
int  main () {
    int p=10, q=20;
    char a='d', b='h';
    show(p,q);
    show(a,b);


    return 0;
}