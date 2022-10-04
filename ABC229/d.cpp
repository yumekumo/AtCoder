#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    string s;
    int k;
    cin >> s >> k;
    int ans=0, length=0;
    int start=0, end=0, unused=k;
    for(start=0; start<s.size(); start++) {
        if(s[start]=='X') {
            length += 1;
        }
        else if(unused!=0) {
            length += 1;
            unused--;
        }
        else {
            length += 1;
            while(true) {
                length -= 1;
                if(s[end]=='.') {
                    end += 1;
                    break;
                }
                else {
                    end += 1;
                }
            }
        }
        ans = max(length, ans);
    }
    cout << ans << endl;
}