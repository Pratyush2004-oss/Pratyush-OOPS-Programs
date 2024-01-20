#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int x,y;
    friend void Distance(Point,Point);//using friend function for calculating the distance
    public:
        Point(int a,int b){//Setting parameterized constructor
            x = a;
            y = b;   
            cout << endl  << "Point is :  (" << x << "," << y << ")";
        }
};
void Distance(Point o1,Point o2){
    double distance = pow((pow((o1.x-o2.x),2)+pow((o1.y-o2.y),2)),0.5);
    cout << endl << "Distance between the two points is : " << distance;
}

int main(){
    Point p1(4,8);
    Point p2(7,6);
    Distance(p1,p2);
    
}