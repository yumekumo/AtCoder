#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    ll n, m, ans;
    cin >> n >> m;
    if(min(n,m) == 1) {
        if(max(n,m) == 1) {
            ans = 1; 
        } else {
            ans = max(n,m) - 2;
        }
    } else {
        ans = (n-2) * (m-2);
    }

    cout << ans << endl;
}