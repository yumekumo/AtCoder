#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int x,y;
    cin >> x >> y;
    if(x<y) {
        cout << min(y-x, abs(abs(x)-abs(y))+1) << endl;
    } else {
        cout << min(abs(y+x)+1, abs(abs(y)-abs(x))+2) << endl;
    }
    
}