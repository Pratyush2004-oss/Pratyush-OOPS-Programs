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

    void change(float avg){
        this->avg = avg;
    }

    int matches()
    {
        return runs / avg;
    }
    void print()
    {
        cout << name << "\t" << avg << "\t" << runs << "\t" << matches() << endl;
    }
};
int main()
{
    Crickter c1("Virat Kholi", 250000, 55.1);
    Crickter* p1 = &c1;

    p1->print();
    (*p1).change(78.5);

    (*p1).print();
}