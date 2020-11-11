// 20125012
// Nguyen Duc Manh
// CTT1

// Test case 1
// Input: 5
// Output: 55

// Test case 2
// Input: 6
// Output: 91

// Test case 3
// Input: 7
// Output: 140

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n; i++)
        sum += (long long)i * i;
    cout << sum << endl;
}
