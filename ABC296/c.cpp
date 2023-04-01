#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    if(x<0) x = -x;
    int i=1, j=0;
    string ans = "No"; 
    while(true) {
        if(i>=n || j >= n) break;
        if(a[i] - a[j] == x) {
            ans = "Yes";
            break;
        }
        else if(a[i] - a[j] < x) {
            i++;
        } else {
            j++;
        }
    }
    cout << ans << endl;
}