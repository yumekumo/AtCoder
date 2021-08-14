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
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    ll ans = 0;
    int tmp = n-1;
    rep(i,n) {
        ans += tmp*a[i];
        tmp -= 2;
    }
    cout << ans << endl;
    
}