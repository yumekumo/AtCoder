#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

void solve(int n, vector<int> s) {
    sort(s.begin(), s.end());
    int sum=0;
    for(int i=1; i<n-1; i++) {
        sum += s[i];
    }
    cout << sum/(n-2) << endl;
}

int main() {
    while(true) {
        int n; cin >> n;
        if(n==0) return 0;
        vector<int> s(n);
        rep(i,n) cin >> s[i];
        solve(n, s);
    }
}