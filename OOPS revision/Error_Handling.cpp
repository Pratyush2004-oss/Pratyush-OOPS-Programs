#include <iostream>
using namespace std;

int main(){
        int numenator = 10;
        int demoniator;
        cout << "Enter the denominator : ";
        cin >> demoniator;

    try{
        if(demoniator == 0){
            throw runtime_error ("Division by zero is not possible");
        }
        int result = numenator / demoniator;
        cout << "Result : " << result;
    }
    catch(exception& e){
        cout << e.what();
    }
    
    return 0;
}