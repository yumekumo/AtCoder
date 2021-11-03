#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int n,m,a;

struct line {
    int h,p,q;

    bool operator<( const line& right ) const {
        return h < right.h;
    }
};

void solve() {
    vector<line> l(m);
    rep(i,m) cin >> l[i].h >> l[i].p >> l[i].q;
    sort(l.begin(), l.end());
    reverse(l.begin(), l.end());
    int cnt = 0, point = a;
    for(int i=1000; i>0; i--) {
        while(cnt < m && l[cnt].h >= i) {
            if(l[cnt].h > i) {
                cnt++;
            }
            else if(point==l[cnt].p) {
                point = l[cnt].q;
                cnt++;
                break;
            }
            else if(point==l[cnt].q) {
                point = l[cnt].p;
                cnt++;
                break;
            }
            else {
                cnt++;
            }
        }
    }
    cout << point << endl;
}

int main() {
    while(true) {
        cin >> n >> m >> a;
        if(n==0 && m==0 && a==0) return 0;
        solve();
    }
}