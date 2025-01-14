#include <iostream>

using namespace std;

template <class T>
class show
{
    T a, b;
public:
    show(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "a : " << a << "\t b : " << b << endl;
    }
};

int main()
{
    show <int> ob(4.5, 5.1);
    ob.display();

    return 0;
}