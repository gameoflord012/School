// 20125012
// Nguyen Duc Manh
// CTT1

// Test case 1
// Input : 1000 2000
// Output : 2591765

// Test case 2
// Input : 300 400
// Output : 165935

// Test case 3
// Input : 700 899
// Output : 360430

#include <iostream>

using namespace std;

int main()
{
    int prev, cur;
    cout << "Input previous and current electricity consumption: "; cin >> prev >> cur;
    int n = cur - prev;
    int cost = 0;
    if (n > 400) cost += (n - 400) * 2587, n = 400;
    if (n > 300) cost += (n - 300) * 2503, n = 300;
    if (n > 200) cost += (n - 200) * 2242, n = 200;
    if (n > 100) cost += (n - 100) * 1786, n = 100;
    if (n > 50) cost += (n - 50 ) * 1533, n = 50 ;
    cost += n * 1484;

    cout << "The electricity bill is " << (int)(cost * 1.1) << endl;
}
