#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n,a,x,y;
    cin >> n >> a >> x >> y;
    cout << x * min(a, n) + y * max(n-a, 0) << endl;
}