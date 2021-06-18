#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    long long res = 1;

    for(int i = 2; i * i <= n; i++) if(n % i == 0) {
        res *= i;
        if(i * i != n) res *= n / i;
    }
    cout << res << endl;
}
