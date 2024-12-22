#include<iostream>
using namespace std;

class Fruit{
public:
    string name;
    string color;
};

int main(){
    Fruit apple;                    //object as variable 
    apple.name = "Apple";
    apple.color = "Red";
    cout << apple.name << " - " << apple.color << endl;

    Fruit *mango = new Fruit();     //object as pointer
    mango->name = "Mango";
    mango->color = "Yellow";
    cout << mango->name << " - " << mango->color << endl;

    return 0;
}