#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if(s1[0] == '.' && s2[1] == '.' || s1[1] == '.' && s2[0] == '.') {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}