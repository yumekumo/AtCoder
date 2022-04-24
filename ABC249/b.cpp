#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    map<char, int> check;
    bool large=false, small=false;
    rep(i, s.size()) {
        if('a' <= s[i] && s[i] <= 'z') {
            small = true;
        }
        if('A' <= s[i] && s[i] <= 'Z') {
            large = true;
        }
        if(check[s[i]]>0) {
            cout << "No" << endl;
            return 0;
        }
        check[s[i]]=1;
    }
    if(small && large) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}