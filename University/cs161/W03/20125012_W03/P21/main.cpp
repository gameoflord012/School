// 20125012
// Nguyen Duc Manh
// CTT1

// Test case 1
// Input : 1
// Output : 1

// Test case 2
// Input : 0.5
// Output : 0.5

// Test case 3
// Input : 0.76
// Output : 1


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout.precision(1);
    cout << fixed;

    float x;
    cout << "Input an Integer: "; cin >> x;
    cout << "The number round to 0.5 is " << (int)(x * 2 + .49999999) / 2.;
}
