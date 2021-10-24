#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int ctoi(const char c){
  switch(c){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    default : return -1;
  }
}

int main() {
    while(true) {
        int h,w,sum=0;
        double r,c;
        cin >> h >> w;
        if(h==0 && w==0) break;
        vector<vector<int>> v(1000, vector<int>(100));
        rep(i,h) {
            string s; cin >> s;
            rep(j,w) {
                v[i][j] = ctoi(s[j]);
                sum += v[i][j];
            }
        }
        int moment_x=0, moment_y=0;
        rep(i,h) {
            rep(j,w) {
                moment_x += v[i][j] * (i+1);
                moment_y += v[i][j] * (j+1);
            }
        }
        r = (double)moment_x / sum;
        c = (double)moment_y / sum;
        printf("%.7lf ", r);
        printf("%.7lf\n", c);
    }
}