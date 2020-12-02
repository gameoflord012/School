//20125012
//Nguyen Duc Manh
//20CTT1

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s; getline(cin, s);
    while(s.size() and s.back() == ' ') s.pop_back();
    for(int i = 0; i < s.size(); i++) if(s[i] != ' ') {
        s = s.substr(i);
        break;
    }

    vector<string> ss = {""};
    for(int i = 0; i < s.size(); i++)
        if(s[i] == ' ' and s[i - 1] != ' ')
            ss.push_back("");
        else if(s[i] != ' ')
            ss.back() += s[i];

    for(string e : ss) {
        e[0] = toupper(e[0]);
        cout << e << ' ';
    }
}
