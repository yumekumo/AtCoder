#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int a,b;
    cin >>  a >> b;
    if(0<a && b==0) {
        cout << "Gold" << endl;
    } else if(a==0 && 0<b) {
        cout << "Silver" << endl;
    } else {
        cout << "Alloy" << endl;
    }
    
}