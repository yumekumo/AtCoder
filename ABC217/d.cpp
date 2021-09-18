#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int l, q; cin >> l >> q;
    vector<int> c(q), x(q);
    rep(i,q) cin >> c[i] >> x[i];
    set<int> st;
    st.insert(0);
    st.insert(l);
    rep(i,q) {
        if(c[i]==1) {
            st.insert(x[i]);
        }
        else {
            auto itr1 = st.lower_bound(x[i]);
            auto itr2 = itr1--;
            cout << (*itr2) - (*itr1) << endl;
        }

    }

}