#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int calc_color(int x) {
    if(x < 400) return 0;
    if(x < 800) return 1;
    if(x < 1200) return 2;
    if(x < 1600) return 3;
    if(x < 2000) return 4;
    if(x < 2400) return 5;
    if(x < 2800) return 6;
    if(x < 3200) return 7;
    else return 8;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n), color(9);
    rep(i,n){ 
        cin >> a[i];
        color[calc_color(a[i])]++;
    }
    int mini, maxi, cnt=0;
    rep(i,8) {
        if(color[i]>0) cnt++;
    }
    mini = max(cnt, 1);
    maxi = cnt+color[8];
    cout << mini << " " << maxi << endl;
}