#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;


int main() {
    ll a,b;
    cin >> a >> b;
    while(a!=0 || b!=0) {
        if(a%10 + b%10 >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
        a/=10;
        b/=10;
    }

    cout << "Easy" << endl;
}