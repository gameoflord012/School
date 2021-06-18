//20125012
//Nguyen Duc Manh
//20CTT1

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s; cin >> s;
    int m = s.size() % 3;
    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
        if((i + 1) % 3 == m and i != s.size() - 1)
            cout << ',';
    }
}
