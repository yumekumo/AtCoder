#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    vector<string> s(4);
    rep(i,4) cin >> s[i];
    sort(s.begin(), s.end());
    if(s[0] == "2B" && s[1] == "3B" && s[2]=="H" && s[3]=="HR") cout << "Yes" << endl;
    else cout << "No" << endl;
}
