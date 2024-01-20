#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
    int numenator,dinominator,result;
    cout << "Enter the numenator : ";
    cin >> numenator;
    cout << "Enter the dinominator : ";
    cin >> dinominator;
    try{
        if(dinominator==0){
            throw dinominator;
        }
    }
    catch(int x){
        cout << "Exception : Division by zero is not possible" << endl;
    }
    result = numenator / dinominator;
    cout << "The value of the division is :  " << result;
}
   