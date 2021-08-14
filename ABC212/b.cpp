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
    string x;
    cin >> x;
    if(x[0]==x[1]&& x[1]==x[2] && x[2] == x[3]) {
        cout << "Weak" << endl;
    }
    else {
        rep(i,3) {
            if((ctoi(x[i])+1)%10!=ctoi(x[i+1])) {
                cout << "Strong" << endl;
                return 0;
            }
        }
        cout << "Weak" << endl;
    }
    
}