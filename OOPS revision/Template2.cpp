#include <iostream>
using namespace std;

template < class T>
class vector
{

public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    void dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        cout << "Result is : " << d;
    }
};
int main()
{
    vector <float> v1(3);
    v1.arr[0] = 10.1;
    v1.arr[1] = 5.5;
    v1.arr[2] = 1.6;

    vector <float> v2(3);
    v2.arr[0] = 4.5;
    v2.arr[1] = 8.2;
    v2.arr[2] = 5.4;

    v1.dotProduct(v2);
    return 0;
}