#include <iostream>

using namespace std;

class Car
{
public:
    void honk()
    {
        cout << "pip pip.." << endl;
    }
};

class Rickshaw : public Car
{
public:
    void honk()
    {
        cout << "pee pooo " << endl;
    }
};

int main()
{
    Car porsche911;
    Rickshaw myRickshaw;

    porsche911.honk();
    myRickshaw.honk();

    return 0;
}