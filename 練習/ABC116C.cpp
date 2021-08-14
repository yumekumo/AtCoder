#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    int ans = 0, check = 0;
    while(true) {
        bool water = false;
        for(int i = check; i<n; i++) {
            if(!water && h[i] > 0) {
                check = i;
                water = true;
                h[i]--;
            }
            else if(water && h[i] > 0) {
                h[i]--;
            }
            else if(water && h[i] == 0) {
                break;
            }
        }
        if(!water) break;
        ans++;
    }

    cout << ans << endl;
}