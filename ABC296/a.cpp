#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    rep(i, n) {
        if(i!=0 && s[i]== s[i-1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}