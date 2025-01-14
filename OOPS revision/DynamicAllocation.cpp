#include <iostream>
using namespace std;

class Crickter
{
    string name;
    int runs;
    float avg;

public:
    Crickter(string name, int runs, float avg)
    {
        this->avg = avg;
        this->name = name;
        this->runs = runs;
    }
    void print()
    {
        cout << name << "\t" << avg << "\t" << runs << "\t" << endl;
    }
};
int main()
{
    Crickter c1("Virat Kholi", 250000, 55.1);
    c1.print();
    Crickter *c2 = new Crickter("Sachin Tendulkar", 100000, 87.1);
    c2->print();
}