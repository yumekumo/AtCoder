#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> s(m);
    vector<char> c(m);
    rep(i,m) cin >> s[i] >> c[i];
    string x;
    rep(i,n) x.push_back('a');
    rep(i,m) {
        if(x[s[i]-1]=='a') {
            x[s[i]-1] = c[i];
        } else if(x[s[i]-1] != c[i]) {
            cout << -1 << endl;
            return 0;
        }
    }
    rep(i,n) {
        if(x[i]=='a') {
            if(i==0 && n!=1) x[i] = '1';
            else x[i] = '0';
        }
        else if(i==0 && n!=1 && x[i]=='0') {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << x << endl;
}