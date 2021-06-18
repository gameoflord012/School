// 20125012
// Nguyen Duc Manh
// CTT1

// Test case 1
// Input: 2 3
// Output: 42

// Test case 2
// Input: 1 1
// Output: 1

// Test case 3
// Input: 5 6
// Output: 50862630

#include <iostream>

using namespace std;

int main()
{
    int x, n; cin >> x >> n;
    int pw = x;
    int res = 0;
    for(int i = 0; i < n; i++, pw *= x * x)
        res += pw;

    cout << res << endl;
}
