#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    string n;
    cin >> n;
    int ans = 0;
    bool not9 = false;
    rep(i,n.size()) {
        if(n[i]!='9') not9=true;
    }
    if(not9){
        ans+=(n[0]-'0')-1;
        ans += (n.size()-1)*9;
    } else {
        ans += n.size() * 9;
    }
    int ans2=0;
    rep(i,n.size()) {
        ans2 += n[i]-'0';
    }

    cout << max(ans2, ans) << endl;
}