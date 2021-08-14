#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

ll L = 1000000007;

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    vector dp(8, vector<ll>(s.size(), 0));
    string check = "chokudai";
    reverse(check.begin(), check.end());
    rep(i,8) {
        for(int j=i; j<s.size(); j++) {
            if(j==i) {
                if(s[j]==check[i]) {
                    if(i==0) dp[i][j] = 1;
                    else dp[i][j] = dp[i-1][j-1];
                }
            } else {
                if(s[j]==check[i]){
                    if(i==0) dp[i][j]= dp[i][j-1] + 1;
                    else dp[i][j]= (dp[i][j-1] + dp[i-1][j-1]) % L;
                } 
                else dp[i][j] = dp[i][j-1];
            }
        }
    }
    
    
    

    cout << dp[7][s.size()-1] % L << endl;
}