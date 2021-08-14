#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    ll ans = 0;
    rep(i,n){
        int a; cin >> a;
        if(m[a] == 0) {
            ans++;
            m[a] = 1;
        } else {
            ans--;
            m[a] = 0;
        }
    }
    cout << ans << endl;

}