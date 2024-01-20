#include<iostream>
using namespace std;


// Destructor never takes an argument nor does it return any value
int count = 0;
class Number{
    public:
        Number(){
            count++;
            cout <<"This is the time when constructor is called for object number " << count << endl;
        }

        ~Number(){
            cout << "This is the time when my destructor is called for object number " << count << endl;
            count--;
        }
};

int main(){
    cout << " We are inside our main function" << endl;
    cout << " Creating first object n1 " << endl;
    Number n1;
    {
        cout << "Entering this Block" << endl;
        cout << "Creating two more objects " << endl;
        Number n2, n3;
        cout << "Exiting the block" << endl;
    }
    cout << "Back to main " << endl;

    return 0;
}
