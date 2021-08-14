#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    rep(i,h) {
        rep(j,w) {
            if(s[i][j] == '#') cout << '#';
            else {
                int cnt = 0;
                if(i!=0) {
                    if(s[i-1][j] == '#') cnt++;
                    if(j!=0 && s[i-1][j-1] =='#') cnt++;
                    if(j!=w-1 && s[i-1][j+1] == '#') cnt++;
                }
                if(i!=h-1) {
                    if(s[i+1][j] == '#') cnt++;
                    if(j!=0 && s[i+1][j-1] =='#') cnt++;
                    if(j!=w-1 && s[i+1][j+1] == '#') cnt++;
                }
                if(j!=0 && s[i][j-1] =='#') cnt++;
                if(j!=w-1 && s[i][j+1] == '#') cnt++;
                cout << cnt;
            }
        }
        cout << endl;
    }

    
}