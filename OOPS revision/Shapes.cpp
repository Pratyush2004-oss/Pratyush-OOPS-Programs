#include <iostream>
using namespace std;

class Shapes
{
protected:
    double length, width;

public:
    void getData()
    {
        cout << endl
             << "Enter the length : ";
        cin >> length;
        cout << "Enter the width : ";
        cin >> width;
    }
    virtual void compute_Area() = 0;         // pure virtual function

};

class Rectangle : public Shapes
{
public:
    void compute_Area()
    {
        double area = length * width;
        cout << "Area of rectangle : " << area;
    }
};

class Triangle : public Shapes
{
public:
    void compute_Area()
    {
        double area = length * width / 2;
        cout << "Area of Triangle is : " << area;
    }
};

int main()
{
    Rectangle r1;
    r1.getData();
    r1.compute_Area();

    Triangle t1;
    t1.getData();
    t1.compute_Area();

    return 0;
}