#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> k(m);
    vector<queue<int>> a(m);
    vector<vector<int>> mem(n);
    rep(i,m) {
        cin >> k[i];
        rep(j,k[i]) {
            int tmp;
            cin >> tmp;
            a[i].push(tmp-1);
        }
        mem[a[i].front()].push_back(i);
    }

    queue<int> que;
    rep(i,n) {
        if(mem[i].size() == 2) {
            que.push(i);
        }
    }

    while(!que.empty()) {
        int now = que.front(); que.pop();
        for(auto p: mem[now]){
            a[p].pop();
            if(!a[p].empty()) {
                mem[a[p].front()].push_back(p);
                if(mem[a[p].front()].size() == 2) {
                    que.push(a[p].front());
                }
            }
        }
    }
    for(auto p: a) {
        if(!p.empty()) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}