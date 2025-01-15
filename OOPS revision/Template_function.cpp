#include <iostream>

using namespace std;
template <class T1,class T2>
T2 funcAverage(T1 a, T2 b){
    float result = (a+b)/2;
    return result;    
}
int main(){
    cout << funcAverage(50.5, 40.2);


    return 0;
} 