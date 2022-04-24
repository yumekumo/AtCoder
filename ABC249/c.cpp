#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, k, ans=0;
    cin >> n >> k;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    for(int bit=0; bit<(1<<n); ++bit) {
        int tmp_ans=0;
        vector<int> cnt(26,0);
        rep(i, s.size()) {
                if(bit & (1<<i)) {
                    rep(j, s[i].size()) {
                        int tmp = s[i][j] - 'a';
                        cnt[tmp]++;
                    }
                }
            }
        rep(i,26) {
            if(cnt[i] == k) {
                tmp_ans++;
            }
        }
        ans = max(ans, tmp_ans);
    }
    cout << ans << endl;
}