#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

public:
    void setData(){
        cout << "Enter the Employee ID : ";
        cin >> id;
        count++;
    }
    void getData(){
        cout << "The employee id of the Employee is " << id << " and the nunber is : " << count << endl;
    }

    static void getCount(){
        cout << "The value of count is : " << count << endl;
    }
};

int Employee :: count;

int main(){
    Employee Harry, Josh, Dean;
    
    Harry.setData();
    Harry.getData();
        
    Josh.setData();
    Josh.getData();
    
    Dean.setData();
    Dean.getData();
    Employee::getCount();
    
}