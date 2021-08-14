#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int q; cin >> q;
    vector<int> b(q), c(q);
    rep(i,q) cin >> b[i] >> c[i];
    map<ll, ll> m;
    ll sum=0;
    rep(i,n) {
        sum+=a[i];
        m[a[i]]++;
    }
    rep(i,q) {
        sum -= b[i] * m[b[i]];
        sum += c[i] * m[b[i]];
        m[c[i]] += m[b[i]];
        m[b[i]] = 0;
        cout << sum << endl;
    }

}