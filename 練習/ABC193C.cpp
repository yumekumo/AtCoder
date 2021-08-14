#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    map<ll, int> memo;
    ll cnt=0;
    for(int i = 2; i<=100000; i++) {
        ll tmp=i;
        while(1) {
            if(tmp * i <= n) {
                tmp *= i;
                if(memo[tmp]==0) {
                    memo[tmp]++;
                    cnt++;
                } 
            } else {
                break;
            }
        }
    }
    cout << n - cnt << endl;
}