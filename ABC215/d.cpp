#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    
    vector<ll> res(100010, 0);
    rep(i,n) {
        for(ll j=1; j*j<=a[i]; j++) {
            if(a[i]%j==0) {
                res[j]++;
                res[a[i]/j]++;
            }
        }
    }

    //rep(i, m) debug(res[i]);

    vector<ll> notans(100010, 0);

    for(int i=2; i<=m; i++) {
        if(res[i]==0) continue;
        int tmp = i;
        int cnt = 1;
        while(tmp * cnt <= m ) {
            notans[tmp*cnt]++;
            cnt++;
        }
    }

    //rep(i,m) debug(notans[i]);

    vector<int> answer;

    for(int i=1; i<=m; i++) {
        if(notans[i]==0) answer.push_back(i);
    } 

    cout << answer.size() << endl;;
    rep(i, answer.size()) {
        cout << answer[i] << endl;
    }
}