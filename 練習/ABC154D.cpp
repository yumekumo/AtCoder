#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<double> p(n), exp(n);
    rep(i,n){ 
        cin >> p[i];
        exp[i] = (p[i]+1)/2;
    }
    double tmp=0, ans;
    rep(i,k) tmp+=exp[i];
    ans = tmp;

    for(int i=1; i<n-k+1; i++) {
       tmp = tmp - exp[i-1] + exp[i+k-1];
       ans = max(tmp, ans);
       //debug(ans);
    }
    printf("%.8f\n", ans);
}