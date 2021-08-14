#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

const ll INF = 1e18;

int main() {
    int h,w,c;
    cin >> h >> w >> c;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i,h) {
        rep(j, w) {
            cin >> a[i][j];
        }
    }

    ll ans = INF;

    vector d(h, vector<ll>(w, INF));
    rep(i,h) rep(j,w) {
        if(i>0) d[i][j] = min(d[i][j], d[i-1][j]);
        if(j>0) d[i][j] = min(d[i][j], d[i][j-1]);
        d[i][j] = min(d[i][j], a[i][j]-(i+j)*c);
    }


    

    
}