#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;
const int L = 998244353;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    vector<vector<ll>> dp(3001, vector<ll>(3001, 0));

    rep(j, 3001) {
        if(j < a[0]) dp[0][j]=0;
        else if(j == a[0]) dp[0][j]=1;
        else if(j <= b[0]) dp[0][j] = dp[0][j-1] + 1;
        else dp[0][j] = dp[0][j-1];
    }
    for(int i=1; i<n; i++) {
        for(int j=0; j<3001; j++) {
            if(j < a[i]) dp[i][j]=0;
            else if(j==a[i]) dp[i][j] = dp[i-1][j];
            else if(j<=b[i]) dp[i][j] = dp[i-1][j] + dp[i][j-1];
            else dp[i][j] = dp[i][j-1];
            dp[i][j] %= L;
        }
    }

    cout << dp[n-1][3000] << endl;

}