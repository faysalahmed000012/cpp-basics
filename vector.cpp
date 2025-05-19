#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string> cars = {"Mercedes","BMW","Audi","Porsche"};

    cars.push_back("Volvo");

    for(string car : cars){
        cout << car << endl;
    }

    return 0;
}