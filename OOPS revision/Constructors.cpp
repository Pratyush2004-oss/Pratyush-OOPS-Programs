#include <iostream>
using namespace std;

class Car
{

public:
    string name;
    int price;
    int seats;
    string type;
    // default constructor
    Car()
    {
    }
    // constructor
    Car(string s, int p, int sts, string t)
    {
        name = s;
        price = p;
        seats = sts;
        type = t;
    }
    void printValue()
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
    Car c1("Toyota", 100000, 5, "Open");
    c1.printValue();
    Car c2(c1);
    c2.name = "Audi";
    c2.printValue();
}