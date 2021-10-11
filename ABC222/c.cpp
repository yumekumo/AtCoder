#include <iostream>
#include <vector>
#include <algorithm>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(2*n, vector<char>(m));
    vector<pair<int, int>> rank(2*n); //first:win, second:id
    rep(i,2*n) {
        rank[i].first = 100;
        rank[i].second = i;
    }
    rep(i,2*n) rep(j, m) cin >> a[i][j];
    rep(j,m) {
        for(int i=0; i<2*n; i+=2) {
            char p1 = a[rank[i].second][j];
            char p2 = a[rank[i+1].second][j];
            if(p1=='C' && p2=='P'){ rank[i].first--; }
            if(p1=='P' && p2=='G'){ rank[i].first--; }
            if(p2=='G' && p1=='C'){ rank[i+1].first--; }
            if(p1=='G' && p2=='C'){ rank[i].first--; }
            if(p2=='C' && p1=='P'){ rank[i+1].first--; }
            if(p2=='P' && p1=='G'){ rank[i+1].first--; }
        }
        sort(rank.begin(), rank.end());
    }


    rep(i, 2*n) cout << rank[i].second+1 << endl;
}