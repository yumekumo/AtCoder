#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int x,y,s;

void solve() {
    int ans = 0;
    for(int i=1; i<s; i++) {
        for(int j=s-i; j>=i; j--) {
            int item1 = i * (100+x) / 100;
            int item2 = j * (100+x) / 100;
            if(item1+item2 == s) {
                ans = max (ans, i*(100+y)/100 + j*(100+y)/100);
            }
        }
    }
    cout << ans << endl;
} 

int main() {
    while(true) {
        cin >> x >> y >> s;
        if(x==0 && y==0 && s==0) return 0;
        solve();
    }
}