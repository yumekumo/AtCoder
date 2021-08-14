#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    for(int i=0; i<n; i++) {
        bool ok = true;
        for(int j=0; j<n-i; j++) {
            if(s[i+j]!=t[j]) ok=false;
        }
        if(ok){
            cout << i+n << endl;
            return 0;
        }
    }
    cout << n+n << endl;
    return 0;
}