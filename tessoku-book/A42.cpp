#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

int N;
vector<int> X(159), Y(159);
vector<int> P(159); // 都市を訪れる順番の集合
vector<bool> visited(159,false); // visited[i]=true のとき都市 i を訪問

// 貪欲法によって答えを求める関数
void PlayGreedy() {
    // 配列の初期化
    int CurrentPlace = 1;
    P[1] = 1;
    visited[1] = 1;

    // 貪欲法スタート
    for (int i = 2; i <= N; i++) {
        double MinDist = 10000.0;
        int Min_ID = -1; // 次はどの都市に移動すればよいか
        
        // 距離が最小となる都市を探す
        for (int j = 1; j <= N; j++) {

        }

    }
}


int main() {
    cin >> N;
    for(int i=1; i<=N; i++) cin >> X[i] >> Y[i];



    
}