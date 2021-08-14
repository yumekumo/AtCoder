#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ull = unsigned long long;

int main() {
    ull x, y;
    cin >> x >> y;
    ull a=x;
    int ans=1;
    while(a*2 <= y) {
        ans++;
        a *=2;
    }
    cout << ans << endl;
}