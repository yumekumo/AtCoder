#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    vector<string> s(8);
    rep(i,8) cin >> s[i];
    char x;
    int y;
    rep(i,8) {
        rep(j,8) {
            if(s[i][j]=='*') {
                x = 'a'+j;
                y = 8 - i;
            }
        }
    }
    cout << x << y << endl;
}