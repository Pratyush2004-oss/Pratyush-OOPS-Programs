#include <iostream>
using namespace std;

int main(){
        int numenator = 10;
        int demoniator;
        cout << "Enter the denominator : ";
        cin >> demoniator;

    try{
        if(demoniator == 0){
            throw demoniator;
        }
        int result = numenator / demoniator;
        cout << "Result : " << result;
    }
    catch(int x){
        cout<<"Error : division with " << x << " is not possible" << endl;
    }
    
    return 0;
}