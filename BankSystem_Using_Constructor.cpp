#include<iostream>
using namespace std;

class Bank{
    int principal;
    int years;
    float intrestRate;
    float returnValue;
    public:
        Bank(){}

        Bank(int p, int y, int rate){
            principal = p;
            years = y;
            intrestRate = float(rate)/100;
            returnValue = principal;
            for (int i=0;i<y;i++){
                returnValue = returnValue * (1+intrestRate);
            }
        }

        Bank(int p, int y, float rate){
            principal = p;
            years = y;
            intrestRate = rate;
            returnValue = principal;
            for (int i=0;i<y;i++){
                returnValue = returnValue * (1+intrestRate);
            }
        }

        void show(){
            cout << endl << "The principal ammount is " << principal << "." << endl << "The return value after " << years << " years is : " << returnValue << endl;
        }
};


int main(){
    cout << "Press 1 for calculating interest using decimal value of interest rate" << endl;
    cout << "Press 2 for calculating interest using percentage value of the interest rate " << endl;
    cout << "Press 3 to exit " << endl;
    int p, y, Rate, choice=0;
    float rate;
    Bank bd1, bd2, bd3;
    
    do{
        cout << "\n \t Enter your choice : ";
        cin >> choice;
        switch (choice){
        case 1: {
                cout << "Enter the principal ammount : ";
                cin >> p;
                cout << "Enter the number of years : ";
                cin >> y;
                cout << "Enter the interest rate : ";
                cin >> rate;

                Bank bd1(p,y,rate);
                bd1.show();
            }
            break;
        case 2: {
                cout << "Enter the principal ammount : ";
                cin >> p;
                cout << "Enter the number of years : ";
                cin >> y;
                cout << "Enter the interest rate in percentage : ";
                cin >> Rate;

                Bank bd2(p,y,Rate);
                bd2.show();
            }
            break;
        case 3: exit(0);
            break;
        default: cout << "Enter the valid choice ........";
            break;
        }
    }while(choice != 3);
    

    
    return 0;
}