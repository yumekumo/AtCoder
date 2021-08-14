#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int d, n;
    cin >> d >> n;
    if(n==100) {
        cout << 101 * (int)pow(100, d) << endl;
    }
    else cout << n * (int)pow(100, d) << endl;
}