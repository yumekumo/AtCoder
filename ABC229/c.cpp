#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> p(n);
    rep(i,n) {
        int a,b;
        cin >> a >> b;
        p[i] = make_pair(a,b);
    }
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());
    int r = w; //残り使えるチーズ
    ll ans = 0;
    rep(i,n) {
        if(p[i].second >= r) {
            ans += p[i].first * r;
            break;
        }
        else {
            ans += p[i].first * p[i].second;
            r -= p[i].second;
        }
    }
    cout << ans << endl;
}