#include <iostream>
using namespace std;

class Shop
{
    int item[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter Id of Item Number " << (counter + 1) << " : ";
    cin >> item[counter];
    cout << "Enter the price of the item : ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of Item ID : " << item[i] << " is : " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop S1;
    S1.initCounter();
    for (int i=0;i<4;i++){

    S1.setPrice();
    }
    S1.displayPrice();
    return 0;
}