#include <iostream>
#include <cstring>

using namespace std;

int main(){

    struct {
        string name;
        int age;
    } human,cat;


    human.name = "Faysal";
    human.age = 21;

    cat.name = "Tom";
    cat.age = 1;

    cout << "My name is " << human.name << " and I am " << human.age <<  " years old." << endl << "And I have a cat named " << cat.name << " and he is " << cat.age << " years old";


    return 0;
}