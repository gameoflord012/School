// 20125012
// Nguyen Duc Manh
// CTT1

// Test case 1
// Input : 2 2016
// Output : 29

// Test case 2
// Input : 2 100
// Output : 28

// Test case 3
// Input : 3 3
// Output : 31

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int m, y;
    cout << "Input month and year "; cin >> m >> y;

    bool nhuan = (y % 4 == 0) && (y % 400 == 0 || y % 100);

    cout << "The number of day in the month is: ";

    if(m == 2) cout << (nhuan ? 29 : 28) << endl;
    else {
        switch(m) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                cout << 31 << endl;
                break;

            default:
                cout << 30 << endl;
                break;
        }
    }
}
