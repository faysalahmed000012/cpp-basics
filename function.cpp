#include <iostream>
#include <cstring>

using namespace std;

void sayHi(string name, int age)
{
    cout << "My name is " << name << " and I am " << age << " years old.\n";
}

int main()
{
    sayHi("Faysal", 21);
    sayHi("Sami", 20);
    sayHi("Yeasin", 21);

    return 0;
}