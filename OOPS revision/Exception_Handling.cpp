#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    try
    {
        double balance = 1000;
        double amount;
        // deposit
        cout << "Enter deposit amount : ";
        cin >> amount;

        if (amount < 0)
        {
            cout << "Amount can't be zero" << endl;
        }

        balance = balance + amount;
        cout << "Balance in the account : " << balance << endl;

        // withdraw
        cout << "Enter withdrawl amount : ";
        cin >> amount;
        try
        {
            if (amount < 0)
            {
                throw invalid_argument("amount can't be less than zero");
            }
            if(amount > balance){
                throw runtime_error("insufficient balance");
            }
            balance = balance - amount;
            cout << "balance in the amouunt : " << balance << endl;
        }
        catch (exception &e)
        {
            cout << e.what();
        }
    }
    catch (exception &e)
    {
        cout << e.what();
    }
}