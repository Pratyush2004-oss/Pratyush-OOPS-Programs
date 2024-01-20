#include<iostream>
using namespace std;

template <class T>

class vector{
    public:
        T *arr;
        int size;
        vector(int m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(vector &v){
            T d = 0;
            for(int i=0;i<size;i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main(){
    int size;
    cout << "Enter the size of the vector : ";
    cin >> size;

    //      For the integer value passed in the class using templates 

    cout << "***************** This is for the integer value passed in the class *******************" <<endl;
    vector <int> v1(size),v2(size);
    cout << endl << "******** Enter the value in array 1 ************" << endl;
    for(int i=0;i<size;i++){
        cin >> v1.arr[i];
    }
    cout << endl << "******** Enter the value in array 2 ************" << endl;
    for(int i=0;i<size;i++){
        cin >> v2.arr[i];
    }
    int a = v1.dotProduct(v2);
    cout << endl << a << endl;


    //      For Flaot values in the same class 

    cout << "********************** This is for the float value of the class **********" << endl;
    vector <float> v3(size),v4(size);
    cout << endl << "******** Enter the value in array 3 ************" << endl;
    for(int i=0;i<size;i++){
        cin >> v3.arr[i];
    }
    cout << endl << "******** Enter the value in array 4 ************" << endl;
    for(int i=0;i<size;i++){
        cin >> v4.arr[i];
    }
    float b = v3.dotProduct(v4);
    cout << endl << b << endl;

    return 0;
}