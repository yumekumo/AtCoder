#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    //部分和でその桁の数字を作れるなら1,作れないなら0
    bitset<100001> dp;
    dp[0] = 1;
    int total =0;
    rep(i,n) {
        int t;
        cin >> t;
        total += t;
        dp |= dp << t;
    }
    // 答え：初期値はtotal,値を最小化していく
    int ans = total;
    rep(i, total+1){
        if(dp[i]==1) {
            //ansと(total/2)以上の部分和を比較する
            ans = min(ans, max(i, total-i));
        }
    }
    cout << ans << endl;
    return 0;
}