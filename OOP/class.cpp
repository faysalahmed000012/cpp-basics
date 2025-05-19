#include <iostream>
#include <cstring>

using namespace std;

class Person {
    private:           // encapsulation.
        string name;
        int age;
        string gender;

    public:
        
        Person(string x,int y, string z){
            name = x;
            age = y;
            gender = z;

        };

        void whoAreYou(){
            cout << "I am " << name << " and I am " << age << " years old. And I am a " << gender << "." << endl; 
        };

        string getName(){  // getter
            return name;
        };

        void setName(string n){  // setter
            name = n;
        }
};

int main(){

    Person faysal("Misbahul Haq Faysal",22,"Male");

    faysal.whoAreYou();
    cout << faysal.getName();


    return 0;
}