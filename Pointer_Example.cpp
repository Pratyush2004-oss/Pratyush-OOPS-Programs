#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;

    //new KEYWORD and as a new OPERATOR 
    char *p = new char('4');
    cout << "The value at address p is : " << *(p) << endl;

    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int *arr = new int[size];
    
    for(int i=0;i<size;i++){
        cout << "Enter the value in " << i << " position of the array : " ;
        cin >> arr[i];
    }
    for(int i=0;i<size;i++){
        cout << "The value of arr[" << i << "] is : " << arr[i] << endl;
    }
    
    // delete operator
    delete[] arr;

    for(int i=0;i<size;i++){
        cout << "The value of arr[" << i << "] is : " << arr[i] << endl;
    }    

    return 0;

}