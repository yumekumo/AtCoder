#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

vector<ll> divisor(ll n) {
    vector<ll> ret;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    map<ll, ll> check;
    rep(i,n) check[a[i]]++;
    ll ans=0;
    rep(i,n) {
        const auto &ret = divisor(a[i]);
        rep(t, ret.size()) {
            ll cntj = check[ret[t]];
            ll cntk = check[a[i]/ret[t]];
            ans += cntj * cntk;
        }
    }
    cout << ans << endl;
}

