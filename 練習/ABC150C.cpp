#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n), array;
    rep(i,n) cin >> p[i];
    rep(i,n) cin >> q[i];
    rep(i,n) array.push_back(i+1);
    int a,b,cnt=1;
    do {
        if(p==array) {
            a = cnt;
        }
        if(q==array) {
            b = cnt;
        }
        cnt++;
    } while(next_permutation(array.begin(), array.end()));
    
    cout << abs(a-b) << endl;
}