#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    string n;
    cin >> n;
    int size = n.size();
    for(int i=size; i<4; i++) {
        n = '0' + n;
    }
    cout << n << endl;
}