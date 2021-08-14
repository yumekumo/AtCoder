#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    rep(i,n) cin >> c[i];
    map<int,int> m;
    int cnt=0;

    rep(i,k) {
        if(m[c[i]]==0) {
            cnt++;
        }
        m[c[i]] += 1;
    }
    int ans = cnt; 
    for(int i=0; i<n-k; i++) {
        m[c[i]]--;
        if(m[c[i]]==0) {
            cnt--;
        }
        m[c[i+k]]++;
        if(m[c[i+k]]==1) {
            cnt++;
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;
    
}