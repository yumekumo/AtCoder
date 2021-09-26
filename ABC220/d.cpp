#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int Large = 998244353;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<vector<ll>> memo(n+1, vector<ll>(10, 0));
    memo[0][a[0]]++;
    rep(i,n-1) {
        rep(j, 10) {
            int tmp = (j+a[i+1]) % 10;
            memo[i+1][tmp] += memo[i][j];
            memo[i+1][tmp] %= Large;
            tmp = (j*a[i+1]) % 10;
            memo[i+1][tmp] += memo[i][j];
            memo[i+1][tmp] %= Large;
        }
    }
    rep(j,10) {
        cout << memo[n-1][j] << endl;
    }
}