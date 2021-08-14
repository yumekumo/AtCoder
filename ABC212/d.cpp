#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int q;
    cin >> q;
    priority_queue<ll, vector<ll>, greater<ll>> que;
    ll add=0;
    rep(i,q) {
        int p; cin >> p;
        if(p==1) {
            int x; cin >> x;
            que.push(x-add);
        }
        else if(p==2) {
            int x; cin >> x;
            add += x;
        }
        else {
            cout << que.top()+add << endl;
            que.pop();
        }
    }

}