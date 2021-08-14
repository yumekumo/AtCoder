#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int l;
    cin >> l;
    ll ans = 1;
    for(int i=1; i<=11; i++) {
        ans = ans * (l-12+i) / i;
    }
    cout << ans << endl;
}