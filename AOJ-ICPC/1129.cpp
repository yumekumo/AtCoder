#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

string t;

void solve() {
    set<string> s;
    for(int i=1; i<t.size(); i++) {
        string t1, t2, rt1, rt2;
        for(int j=0; j<i; j++) t1 += t[j];
        for(int j=i; j<t.size(); j++) {
            t2 += t[j];
        }
        //cout << t1 << " " << t2 << endl;
        reverse(t1.begin(), t1.end());
        reverse(t2.begin(), t2.end());
        rt1 = t1; rt2 = t2;
        reverse(t1.begin(), t1.end());
        reverse(t2.begin(), t2.end());
        s.insert(t1+t2);
        s.insert(t1+rt2);
        s.insert(rt1+t2);
        s.insert(rt1+rt2);
        s.insert(t2+t1);
        s.insert(t2+rt1);
        s.insert(rt2+t1);
        s.insert(rt2+rt1);        
    }
    cout << s.size() << endl;
}

int main() {
    int m; cin >> m;
    rep(i,m) {
        cin >> t;
        solve();       
    }
    
}