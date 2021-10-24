#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i,h) {
        rep(j, w) {
            cin >> a[i][j];
        }
    }
    rep(i1,h-1) {
        for(int i2=i1+1; i2<h; i2++) {
            rep(j1, w-1) {
                for(int j2=j1+1; j2<w; j2++) {
                    if(a[i1][j1]+a[i2][j2]>a[i2][j1]+a[i1][j2]) {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
}