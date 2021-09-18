#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int q;
    cin >> q;
    queue<int> que;
    priority_queue<int, vector<int>, greater<int>> prique;
    rep(i,q) {
        int t; cin >> t;
        if(t==1) {
            int x; cin >> x;
            que.push(x);
        }
        else if(t==2) {
            if(prique.size()!=0) {
                cout << prique.top() << endl;
                prique.pop();
            }
            else {
                cout << que.front() << endl;
                que.pop();
            }
        }
        else if(t==3) {
            int size = que.size();
            rep(i,size) {
                prique.push(que.front());
                que.pop();
            }
        }
    }
    
}