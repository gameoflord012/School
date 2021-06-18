#include <iostream>

using namespace std;

// <20125012>
// <Nguyen Duc Manh>
// <20CTT1>

// Test case 1
// Input: 2019
// Output: Khong phai nam nhuan

// Test case
// Input: 2020
// Output: Nam nhuan

// Test case
// Input: 400
// Output: Nam nhuan

int main()
{
    int y;
    cout << "Input the year: "; cin >> y;
    cout << ((y % 4 == 0 and (y % 100 > 0 || y % 400 == 0)) ? "Nam nhuan" : "Khong phai nam nhuan") << endl;
}
