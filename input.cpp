#include <iostream> 

using namespace std;

int main()
{
    cout << "Please input your favorite number : ";
    int num {}; 
    cin >> num;
    // chaining output stream
    cout << "Your Number is " << num << endl 
         << "Thank you for telling me your favorite number !" << endl;


    return 0;
}