#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    string s; int k;
    cin >> s >> k;
    vector<char> cs;
    rep(i, s.size()) {
        cs.push_back(s[i]);
    }
    vector<string> ans;
    sort(s.begin(), s.end());

    do {
        ans.push_back(s);
    } while(next_permutation(s.begin(), s.end()));

    cout << ans[k-1] << endl;
}