// 20125012
// Nguyen Duc Manh
// CTT1

// Test case 1
// Input: 15 3
// Output: 18043.19

// Test case 2
// Input: 7 6
// Output: 538.66

// Test case 3
// Input: 5 5
// Output: 73.62

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    int x, n;
    cin >> x >> n;
    float fac = 1;
    float exp = 1;
    float res = 1;
    for(int i = 1; i <= n; i++) {
        exp *= x * x, fac *= i * 2 * (i * 2 - 1);
        res += exp / fac;
    }

    cout << res << endl;
}
