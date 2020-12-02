// 20125012
// Nguyen Duc Manh
// CTT1

// Test case 1
// Input : 1 2 3
// Output : No solution

// Test case 2
// Input : 2 2 2
// Output : No solution

// Test case 3
// Input : -1 5 5
// Output : -0.85 5.85

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    cout.precision(2);
    cout << fixed;

    cout << "Input 3 integers: "; cin >> a >> b >> c;
    float delt = b * b - 4 * a * c;


    if(delt < 0) cout << "No solution!" << endl;
    else if(delt == 0) cout << "equation have 1 solution: " << - b / (2 * a);
    else {
        delt = sqrt(delt);
        float x1 = (-b + delt) / (2 * a);
        float x2 = (-b - delt) / (2 * a);
        cout << "x1 = " << x1 << " " << "x2 = " << x2 << endl;
    }
}
