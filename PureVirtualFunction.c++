#include <iostream>
using namespace std;

class Instrument{
public:
    virtual void MakeSound() = 0;
};

class Accordion: public Instrument {
public:
    void MakeSound() {
        cout << "Accordion playing...\n";
    }
};

class piano :public Instrument{
    public:
    void MakeSound() {
        cout << "Piano playing...\n";
    }
};

int main()
{

    Instrument* i1 = new Accordion();
    //i1->MakeSound();
    Instrument* i2 = new piano();
    //i2->MakeSound();

    //polymorphism example

    Instrument* Instruments[2] = { i1,i2 };
    for(int i=0; i<2; i++)
        Instruments[i]->MakeSound();

    return 0;
}