#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    ll pmax = 0;
    ll p = 0;
    ll nextmove = 0;
    ll maxmove = 0;
    rep(i,n) {
        nextmove += a[i];
        maxmove = max(maxmove, nextmove);
        pmax = max(pmax, p+maxmove);
        p += nextmove;
    }

    cout << pmax << endl;
}