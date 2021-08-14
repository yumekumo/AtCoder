#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, y;
    cin >> n >> y;
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=n-i; j++) {
            int k = n-i-j;
            if(10000*i+5000*j+1000*k == y) {
                cout << i << ' ' << j << ' ' << k << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}