#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    ll k =1;
    ll v = 1;
    while(true) {
        if(v>n) {
            cout << k-2 << endl;
            return 0;
        } else {
            v *= 2;
            k++;
        }
    }
}