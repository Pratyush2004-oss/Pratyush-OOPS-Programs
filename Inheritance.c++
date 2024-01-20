#include<iostream>
using namespace std;

class Parent{
public:
    int x;

protected:
    int y;

private:
    int z;
};

class Child: public Parent{
    //x will remain public
    //y will remain protected
    //z will not be accessible

};

class Child2: private Parent{
    // x and y will be private
    // z will remain inaccessable
};

class Child3: protected Parent{
    // x and y will be protected
    // z will remain inaccessable
};



int main(){
    
    


    return 0;
}