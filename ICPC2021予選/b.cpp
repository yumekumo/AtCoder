#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int w,h;
vector<int> x(1000), y(1000), n(1000);

void solve() {
    vector<vector<bool>> g(w+1, vector<bool>(h+1, false));
    rep(i, w+h-1) {
        g[x[i]][y[i]] = true;
    }
    int cnt = 1;
    while(cnt) {
        cnt=0;
        for(int i=0; i<w; i++) {
            for(int j=0; j<h-1; j++) {
                if(!g[i][j]) continue;
                for(int j1=j+1; j1<h; j1++) {
                    if(g[i][j1]) {
                        for(int k=0; k<w; k++) {
                            if(g[k][j] && !g[k][j1]) {
                                //cerr << "found" << endl;
                                //debug(k);
                                //debug(j1);
                                //g[k][j1] = true;
                                cnt++;
                            }
                            if(g[k][j1] && !g[k][j]) {
                                //cerr << "found" << endl;
                                //debug(k);
                                //debug(j);
                                g[k][j] = true;
                                cnt++;
                            }
                        }
                    }
                }
            }
        }

        for(int j=0; j<h; j++) {
            for(int i=0; i<w-1; i++) {
                if(!g[i][j]) continue;
                for(int i1=i+1; i1<w; i1++) {
                    if(g[i1][j]) {
                        for(int l=0; l<h; l++) {
                            if(g[i][l] && !g[i1][l]) {
                                //cerr << "found" << endl;
                                //debug(i1);
                                //debug(l);
                                g[i1][l] = true;
                                cnt++;
                            }
                            if(g[i1][l] && !g[i][l]) {
                                //cerr << "found" << endl;
                                //debug(i);
                                //debug(l);
                                g[i][l] = true;
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
    }

    rep(i,w) {
        rep(j,h) {
            if(!g[i][j]) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main() {
    while(true) {
        cin >> w >> h;
        if(w==0 && h==0) return 0;
        rep(i, w+h-1) {
            cin >> x[i] >> y[i] >> n[i];
            x[i]--; y[i]--;
        }
        solve();
    }
}