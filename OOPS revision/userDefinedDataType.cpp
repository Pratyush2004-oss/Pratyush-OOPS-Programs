#include <iostream>
using namespace std;

class Car
{
    string name;
    int price;
    int seats;
    string type;

public:
    void setData()
    {
        cout << "Enter the name of the car : ";
        cin >> name;
        cout << "Enter the price of the car : ";
        cin >> price;
        cout << "Enter the seats in the car : ";
        cin >> seats;
        cout << "Enter the type of the car : ";
        cin >> type;
    }
    void printData()
    {
        cout << endl
             << "Name : " << name << endl
             << "price : " << price << endl
             << "Number of seats : " << seats << endl
             << "Type : " << type << endl;
    }
};
int main()
{
    Car c1, c2;
    c1.setData();
    c1.printData();
}