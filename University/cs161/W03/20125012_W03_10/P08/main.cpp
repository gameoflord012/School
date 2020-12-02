// 20125012
// Nguyen Duc Manh
// CTT1

// Test case 1
// Input : 1 1
// Output : -1

// Test case 2
// Input : 2 2
// Output : -1

// Test case 3
// Input : 3 3
// Output : -1

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b;
    cout.precision(2);
    cout << fixed;

    cout << "Input 2 integers: "; cin >> a >> b;
    float x = -b / a;
    cout << "The result for x of equation " << a << " * x + " << b << " = 0 is " << x << endl;
}
