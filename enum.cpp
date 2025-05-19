#include <iostream>


using namespace std;

int main(){

    enum Level {
        low = 33,
        medium = 60,
        high = 80
    };

    enum Level myLevel = medium;

    cout << myLevel;

    return 0;
}