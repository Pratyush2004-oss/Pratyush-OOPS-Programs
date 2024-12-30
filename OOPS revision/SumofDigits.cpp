#include <iostream>
using namespace std;

int main(){
    int num;
    int result= 0;
    int rem;
    cout << "Enter the 5 digit number : ";
    cin >> num;

    while(num != 0){
        rem = num % 10;
        result += rem;
        num = num / 10;
    }

    cout << "Sum of the digits of the number is : " << result;

    return 0;
}