#include <iostream>
#include <cstring>

using namespace std;

class Teacher
{
public:
    string name;
    string subject;
    void sayHi(); // just declaring
};

void Teacher::sayHi()
{
    cout << "Hi, My name is " << name << endl;
};

int main()
{
    Teacher ankanSir;
    ankanSir.name = "Ankan Roy";
    ankanSir.subject = "SPL";

    ankanSir.sayHi();

    return 0;
}