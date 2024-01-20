#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setID(){
            salary = 122;
            cout << "Enter the id of Employee : ";
            cin >> id;
        }
        void getData(){
            cout << "The id of the Employee is : " << id << endl;
        }
};
int main(){
    Employee Company[4];
    int size = sizeof(Company)/sizeof(Company[0]);
    for(int i = 0;i<size;i++){
        Company[i].setID();
        Company[i].getData();
    }
}