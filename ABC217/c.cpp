#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    vector<int> q(n);
    rep(i,n) {
        q[p[i]-1] = i+1; 
    }
    rep(i,n) {
        if(i!=0) cout << " ";
        cout << q[i];
    }
    cout << endl;
}