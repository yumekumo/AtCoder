#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int a,b;
    cin >> a >> b;
    double ans = ((double)a-b)/3 +b;
    printf("%.6f\n", ans); 
}