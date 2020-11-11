// 20125012
// Nguyen Duc Manh
// CTT1

// Test case 1
// Input: 5
// Output: 0.83

// Test case 2
// Input: 6
// Output: 0.86

// Test case 3
// Input: 9
// Output: 0.90

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    int n; cin >> n;
    float res = 0;
    for(int i = 1; i <= n; i++)
        res += 1. / (i * (i + 1));
    cout << res << endl;
}
