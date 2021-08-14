#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int s, t;
    cin >> s >> t;
    int ans =0;
    for(int a=0; a<=100; a++) {
        rep(b, 101) {
            rep(c,101) {
                if(a+b+c<=s && a*b*c<=t) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}