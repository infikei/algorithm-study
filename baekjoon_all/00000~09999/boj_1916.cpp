#include <iostream>
#include <vector>
#include <queue>
#define fastio ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL); // boj_15552.cpp
using namespace std;
using pii = pair<int, int>;

const int INF = 987654321;
int n, m, start, finish;
vector<vector<pii> > edges;
vector<int> cost_dp;

void dijkstra() {
    priority_queue<pii, vector<pii>, greater<pii> > pq_mintop;
    cost_dp.assign(n + 1, INF);
    cost_dp[start] = 0;
    pq_mintop.push(make_pair(0, start));

    while (!pq_mintop.empty()) {
        int now_node = pq_mintop.top().second;
        int now_cost = pq_mintop.top().first;
        pq_mintop.pop();
        if (now_cost > cost_dp[now_node]) continue;

        int i_end = edges[now_node].size();
        for (int i = 0; i < i_end; i++) {
            int next_node = edges[now_node][i].first;
            int next_cost = edges[now_node][i].second;
            if (cost_dp[next_node] > now_cost + next_cost) {
                cost_dp[next_node] = now_cost + next_cost;
                pq_mintop.push(make_pair(cost_dp[next_node], next_node));
            }
        }
    }
}

int main() {
    fastio;

    cin >> n >> m;
    edges.assign(n + 1, vector<pii>(0));
    for (int i = 0; i < m; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        edges[u].push_back(make_pair(v, c));
    }
    cin >> start >> finish;

    dijkstra();

    cout << cost_dp[finish] << '\n';

    return 0;
}