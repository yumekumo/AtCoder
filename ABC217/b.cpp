#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    map<string ,int> s;
    rep(i,3) {
        string ss; cin >> ss;
        s[ss]++;
    }

    if(s["ABC"]==0) {
        cout << "ABC" << endl;
    }
    else if(s["ARC"]==0) {
        cout << "ARC" << endl;
    }
    else if(s["AGC"]==0) {
        cout << "AGC" << endl;
    }
    else {
        cout << "AHC" << endl;
    }
}