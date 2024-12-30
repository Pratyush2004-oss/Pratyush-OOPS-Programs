#include <iostream>
using namespace std;

class A
{
    int arr[10] = {20, 45, 74, 12, 16, 18, 19, 12, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    friend void mean(A obj);
};
void mean(A obj)
{
    int sum = 0;
    for (int i = 0; i < obj.n; i++)
    {
        sum += obj.arr[i];
    }
    float average = (float)(sum)/obj.n;
    cout << "The sum of the numbers are : " << sum << endl;
    cout << "The mean of the numbers are : " << average;
}
int main()
{
    A obj;
    mean(obj);
    return 0;
}