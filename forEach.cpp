#include <iostream>

using namespace std;

int main()
{

    int nums[10] = {6, 12, 18, 24, 30, 36, 42, 48, 54, 60};

    for (int i : nums)
    {
        cout << i << endl;
    }

    return 0;
}