#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int tkhs=0, aoki = 0;
    int set = x / (a+c);
    int run = set * a + min(a, x%(a+c));
    tkhs = run*b;
    set = x / (d+f);
    run = set*d + min(d, x%(d+f));
    aoki = run*e;
    if (tkhs > aoki) {
        cout << "Takahashi" << endl;
    }
    else if(tkhs < aoki) {
        cout << "Aoki" << endl;
    }
    else {
        cout << "Draw" << endl;
    }

}