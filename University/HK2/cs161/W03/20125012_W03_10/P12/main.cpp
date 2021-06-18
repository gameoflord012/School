
#include <iostream>
#include <algorithm>

using namespace std;

// <20125012>
// <Nguyen Duc Manh>
// <20CTT1>

// Test case 1
// Input: 1 2 3 1
// Output: 3 1

// Test case
// Input: 2 4 2 1
// Output: 4 1

// Test case
// Input: 4 2 1 1
// Output: 4 1

int main()
{
    int a[4];
    cout << "Input 4 Integers: "; cin >> a[0] >> a[1] >> a[2] >> a[3];
    cout << "The maximum number is " << *max_element(a, a + 4) << endl;
    cout << "The minimum number is " << *min_element(a, a + 4) << endl;
 }
