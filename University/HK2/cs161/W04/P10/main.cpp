// 20125012
// Nguyen Duc Manh
// CTT1

// Test case 1
// Input: 2 4
// Output: 16

// Test case 2
// Input: 3 3
// Output: 27

// Test case 3
// Input: 1 1
// Output: 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    int x, n; cin >> x >> n;
    int res = 1;
    for(int i = 0, sum = x; i <= __lg(n); i++, sum *= sum)
        if(n >> i & 1) res *= sum;

    cout << res << endl;
}
