#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> p(100002, 0);
    rep(i,n) {
        int a,b;
        cin >> a >> b;
        for(int j=a; j<=b; j++)  {
            p[j]++;
        }
    }
    int ans = 0;
    rep(j,100002) {
        if(p[j]+1<j) continue;
        ans = max(j-1, ans);
    }
    cout << ans << endl;
}