#include<iostream>
using namespace std;

class Ractangle{
public:
    int length;
    int width;
    Ractangle(){    //default constructor - no args passed
        length = 0;
        width = 0;
    }

    Ractangle(int x, int y){    //parameterized constructor - args passed
        length = x;
        width = y;
    }

    Ractangle(Ractangle& r){       //copy constructor - initialise an obj by another existing object
        length = r.length;
        width = r.width;
    }

    ~Ractangle(){       //Destructor
        cout << "Destructor is called " << endl;
    }

};

int main(){
    Ractangle *r1 = new Ractangle();
    cout << r1->length << " - " << r1->width << endl;
    delete(r1);

    Ractangle r2(67,69);
    cout << r2.length << " - " << r2.width << endl;

    Ractangle r3(r2);
    cout << r3.length << " - " << r3.width << endl;
    return 0;
}