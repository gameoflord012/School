//20125012
//Nguyen Duc Manh
//20CTT1

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s; getline(cin, s);
    vector<string> ss = {""};
    for(int i = 0; i < s.size(); i++)
        if(s[i] == ' ') ss.push_back("");
        else ss.back() += s[i];
    for(int i = ss.size() - 1; i >= 0; i--)
        cout << ss[i] << ' ';
}
