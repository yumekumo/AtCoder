#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    ll ans = 0;
    rep(i,n) cin >> a[i];
    vector<int> cnt(401, 0);
    rep(i,n) {
        cnt[a[i]+200]++;
    }
    for(int i=-200; i<200; i++) {
        for(int j=i+1; j<=200; j++) {
            ans += (ll)cnt[i+200] * cnt[j+200] * abs(i-j) * abs(i-j);
        }
    }

    cout << ans << endl;
}