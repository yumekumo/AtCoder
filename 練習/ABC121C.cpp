#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> a(n);
    rep(i,n) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    int count=0;
    ll money=0;
    int i=0;
    while(count < m) {
        if(m-count >= a[i].second) {
            money += (ll)a[i].first * a[i].second;
            count += a[i].second;
        } else {
            money += (ll)a[i].first * (m-count);
            count += m-count;
        }
        i++;
    }
    cout << money << endl;
}