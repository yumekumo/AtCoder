#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, ans = 0;
    cin >> n;
    vector<int> l(n);
    rep(i,n) cin >> l[i];
    for(int i=0; i<n-2; i++) {
        for(int j=i+1; j<n-1; j++) {
            for(int k=j+1; k<n; k++) {
                if(l[i]!=l[j] && l[j]!=l[k] && l[k]!=l[i] && l[i]+l[j]>l[k] && l[j]+l[k]>l[i] && l[k]+l[i]>l[j]) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}