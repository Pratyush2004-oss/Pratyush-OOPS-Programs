#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
    double bal = 1000.00;
    try{
        double amount;
        cout << "Enter Deposit amount : ";
        // DEPOSIT
        cin >> amount;
        if(amount<=0){
            throw invalid_argument("Invalid Deposit Amount");
        }
        bal += amount;
        cout << "Available amount = " << bal << endl;

        cout << "Enter amount to be withdrawn : ";
        // WITHDRAW
        cin >> amount;
        if(amount<=0){
            throw invalid_argument("Invalid Withdraw Amount");
        }
        if(amount>bal){
            throw runtime_error("Insufficient Balance");
        }
        bal -= amount;
        cout << "Available amount = " << bal << endl;

        
    }
    catch(exception& e){
        cout << e.what();
    }
}
