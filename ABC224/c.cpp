#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    int ans=0;
    rep(i,n) cin >> x[i] >> y[i];
    for(int i=0; i<n-2; i++) {
        for(int j=i+1; j<n-1; j++) {
            for(int k=j+1; k<n; k++) {
                int lx1, lx2, ly1, ly2;
                if(x[i]==x[j]) {
                    if(x[i]!=x[k]){
                        ans++;
                    }
                    continue;
                }
                if(x[i]>x[j]) {
                    lx1 = x[i]-x[j];
                    ly1 = y[i]-y[j];
                } else {
                    lx1 = x[j]-x[i];
                    ly1 = y[j]-y[i];
                }
                if(x[i]>x[k]) {
                    lx2 = x[i]-x[k];
                    ly2 = y[i]-y[k];
                } else {
                    lx2 = x[k]-x[i];
                    ly2 = y[k]-y[i];
                }
                int g1 = gcd(lx1, ly1);
                int g2 = gcd(lx2, ly2);
                if(lx1/g1 == lx2/g2 && ly1/g1 == ly2/g2) {
                    continue;
                } else {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}