#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
ll L = 1000000007;

int main() {
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    // BFS のためのデータ構造
    vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;
    vector<ll> cnt(N,0);

    // 初期条件 (頂点 0 を初期ノードとする)
    dist[0] = 0;
    cnt[0] = 1;
    que.push(0); // 0 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (int nv : G[v]) {
            if (dist[nv] != -1){ 
                if(dist[nv]==dist[v]+1){ 
                    cnt[nv] += cnt[v];
                    cnt[nv] %= L;
                }
                continue; // すでに発見済みの頂点は探索しない
            }
            // 新たな白色頂点 nv について距離情報を更新してキューに追加する
            dist[nv] = dist[v] + 1;
            cnt[nv] += cnt[v];
            cnt[nv] %= L;
            que.push(nv);
        }
    }

    cout << cnt[N-1] % L << endl;
}