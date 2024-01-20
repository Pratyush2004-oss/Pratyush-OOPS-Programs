//                      Banking using Abstraction and Virtual Class
//                              Data Hiding

#include<iostream>
using namespace std;

class Bank{
public:
    float amount, intrest, totalBalance;
    long accountNumber;
    virtual void calculateIntrest(float a) = 0;

    void showInfo(long a){
        accountNumber = a;
        cout << endl << "Your account number is : " << accountNumber;
    }
};

class SBI : public Bank{
public:
    void calculateIntrest(float Balance){
        amount = Balance;
        intrest = amount*5*1/100;
        totalBalance = amount + intrest;
        cout << endl << "Your intrest is : " << intrest;
        cout << endl << "Your Total Balance is : " << totalBalance;
    }
};

int main(){
    SBI Pratyush;
    Pratyush.showInfo(80575);
    Pratyush.calculateIntrest(5000);
}