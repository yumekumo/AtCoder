#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    if(n<126) cout << 4 << endl;
    else if(n<212) cout << 6 << endl;
    else cout << 8 << endl;
}