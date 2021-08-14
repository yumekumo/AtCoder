#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> ans(10001, 0);
    for(int x=1; x<101; x++) {
        for(int y=1; y<101; y++) {
            for(int z=1; z<101; z++) {
                int tmp = x*x + y*y + z*z + x*y + y*z + z*x;
                if(tmp < 10001) {
                    ans[tmp]++;
                } 
            }
        }
    }

    for(int i=1; i<=n; i++) {
        cout << ans[i] << endl;
    }
}