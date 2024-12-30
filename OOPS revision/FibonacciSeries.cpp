#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 1;
    int n;
    cout << "Enter the number of elements you want to print : ";
    cin >> n;

    cout << "Fibonacci Series : " << endl;
    cout << a << '\t' << b << '\t';

    for (int i = 2; i < n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        cout << c << '\t';
    }

    return 0;
}