#include <iostream>
#include <iomanip>
using namespace std;

// <20125012>
// <Nguyen Duc Manh>
// <20CTT1>

// Test case 1
// Input: 1 2 3 1
// Output: 0 FAILED

// Test case
// Input: 2 4 2 1
// Output: 0 FAILED

// Test case
// Input: 4 2 1 1
// Output: 0 FAILED

int main()
{
    float as, lab, fin;
    bool cheat;


    cout << "Assignment   : "; cin >> as;
    cout << "Lab          : "; cin >> lab;
    cout << "Final        : "; cin >> fin;
    cout << "Is cheating? : "; cin >> cheat;

    float score = cheat ? 0 : (as * 3 + lab * 3 + fin * 4) / 10;

    cout << setprecision(1) << fixed << score << ' ' << (score < 5 ? "FAILED" : "PASSED");
}
