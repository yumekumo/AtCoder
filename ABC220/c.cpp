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
    ll x; cin >> x;
    ll a_sum=0;
    rep(i,n) a_sum += a[i];
    ll quotient = x / a_sum;
    ll remainder = x % a_sum;
    ll ans = quotient * n;
    rep(i,n) {
        if(remainder < 0) {
            break;
        } else {
            remainder -= a[i];
            ans++;
        }
    }
    cout << ans << endl;
}