#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int m,n;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = abs(a[0]-b[0]);
    rep(i,m) {
        auto it = lower_bound(a.begin(), a.end(), b[i]);
        int index = it - a.begin();
        if(index < n && a[index]-b[i] < ans) {
            ans = a[index]-b[i];
            debug(ans);
        }
    }
    rep(i,n) {
        auto it = lower_bound(b.begin(), b.end(), a[i]);
        int index = it - b.begin();
        if(index < m && b[index]-a[i] < ans) {
            ans = b[index]-a[i];
            debug(ans);
        }
    }
    cout << ans <<endl;
}