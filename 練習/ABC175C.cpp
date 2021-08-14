#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    ll x,k,d;
    cin >> x >> k >> d;
    x = abs(x);
    ll step1 = x/d;
    if(step1 >= k) {
        cout << x-k*d << endl;
    } else {
        ll point1 = abs(x-step1*d);
        ll point2 = abs(x-(step1+1)*d);
        if((k-step1)%2 == 0) cout << point1 << endl;
        else cout << point2 << endl;
    }
    return 0;
}