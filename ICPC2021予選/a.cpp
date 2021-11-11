#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

vector<int> a(4);

void solve() {
    while(true) {
        int min_ball = 1000;
        int min_num = -1;
        int cnt = 0;
        rep(i,4) {
            if(a[i]>0) {
                cnt++;
                if(a[i] < min_ball) {
                    min_ball = a[i];
                    min_num = i;
                }
            }
        }
        if(cnt==1){
            cout << min_ball << endl;
            return;
        }
        rep(i,4) {
            if(i!=min_num) {
                a[i] -= min_ball;
                a[i] = max(a[i], 0);
            }
        }
    }
}


int main() {
    while(true) {
        rep(i,4) cin >> a[i];
        if(a[0] == 0 && a[1]==0 && a[2]==0 && a[3]==0) return 0;
        solve();
    }
}