#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    int submit = ((n-m)*100 + 1900 *m);
    double percent =pow(0.5, m);
    int ans = submit/percent;
    cout << ans << endl;
}