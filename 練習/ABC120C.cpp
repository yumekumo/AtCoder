#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int r = 0, b = 0;
    rep(i,n) {
        if(s[i] == '0') r++;
        else b++;
    }
    cout << min(r,b)*2 << endl;
    
}