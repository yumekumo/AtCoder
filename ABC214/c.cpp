#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> s(n), t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];
    vector<ll> time(n, LONG_LONG_MAX);
    rep(i,n) {
        if(i==0) time[i] = t[i];
        else time[i] = min(t[i], time[i-1]+s[i-1]);
    }
    rep(i,n) {
        if(i==0) time[i] = min(time[i], time[n-1]+s[n-1]);
        else time[i] = min(t[i], time[i-1]+s[i-1]);
    }
    rep(i,n) {
        cout << time[i] << endl;;
    }
}