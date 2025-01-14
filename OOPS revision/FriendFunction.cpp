#include <iostream>
using namespace std;

class A
{
    int arr[10] = {20, 45, 74, 12, 16, 18, 19, 12, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    friend void mean(A obj);
};

void mean(A obj){
    int sum = 0;
    for (int i = 0; i<obj.n ;i++){
        sum = sum + obj.arr[i];
    }
    cout << "The sum of the elements of array is : " << sum << endl;
    cout << "The average of the elements of array is : " << (float)(sum)/obj.n << endl;
}

int main()
{
    A obj;
    mean(obj);
    return 0;
}