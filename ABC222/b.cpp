#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans=0;
    rep(i,n) {
        if(a[i] < p) ans++;
    }
    cout << ans << endl;
}