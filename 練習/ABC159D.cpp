#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

ll nCr(int n, int r) {
    ll ans = 1;
    for (int i = n; i > n - r; --i) {
        ans = ans*i;
    }
    for (int i = 1 ; i < r + 1; ++i) {
        ans = ans / i;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    map<int,int> m;
    rep(i,n) {
        m[a[i]]++;
    }
    ll ans=0;
    for(int i=1; i<=n; i++) {
        if(m[i]>1) {
            ans += nCr(m[i], 2);
        }
    }

    for(int i=1; i<=n; i++) {
        if(m[i]>)
    }
}