#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    vector<ll> l(q), r(q), v(q);
    rep(i,q) {
        cin >> l[i] >> r[i] >> v[i];
        l[i]--;
        r[i]--;
    }
    vector<ll> diff(n-1);
    ll ans=0;
    rep(i,n-1) {
        diff[i] = a[i+1] - a[i];
        ans += abs(diff[i]);
    }
    debug(r[2]);
    rep(i,q) {
        if(l[i] != 0) {
            ans -= abs(diff[l[i]-1]);
            diff[l[i]-1] += v[i];
            ans += abs(diff[l[i]-1]);
        }
        if(r[i] != n-1) {
            ans -= abs(diff[r[i]]);
            diff[r[i]] -= v[i];
            ans += abs(diff[r[i]]);
        }
        cout << ans << endl;
    }
}
