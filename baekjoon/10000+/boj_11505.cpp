#include <iostream>
#define fastio ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL); // boj_15552.cpp
using namespace std;
using ll = long long;

int N, M, K;
ll arr[1000001], seg[4000001], MOD = 1000000007;

ll seg_init(int node, int s, int e) {
    if (s == e) {
        return seg[node] = arr[s];
    }

    int mid = (s + e) / 2;
    ll left_val = seg_init(node * 2, s, mid);
    ll right_val = seg_init(node * 2 + 1, mid + 1, e);
    return seg[node] = left_val * right_val % MOD;
}

ll seg_query(int node, int s, int e, int l, int r) {
    if (e < l || r < s) {
        return 1;
    }
    if (l <= s && e <= r) {
        return seg[node];
    }

    int mid = (s + e) / 2;
    ll left_val = seg_query(node * 2, s, mid, l, r);
    ll right_val = seg_query(node * 2 + 1, mid + 1, e, l, r);
    return left_val * right_val % MOD;
}

void seg_update(int node, int s, int e, int idx) {
    if (idx < s || e < idx) {
        return;
    }
    if (s == e) {
        seg[node] = arr[s];
        return;
    }

    int mid = (s + e) / 2;
    seg_update(node * 2, s, mid, idx);
    seg_update(node * 2 + 1, mid + 1, e, idx);
    seg[node] = seg[node * 2] * seg[node * 2 + 1] % MOD;
}

int main() {
    fastio;

    cin >> N >> M >> K;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }

    seg_init(1, 1, N);

    int MK = M + K;
    int a, b;
    ll c;
    for (int i = 0; i < MK; i++) {
        cin >> a >> b >> c;
        if (a == 1) {
            arr[b] = c;
            seg_update(1, 1, N, b);
        }
        else {
            cout << seg_query(1, 1, N, b, c) << '\n';
        }
    }

    return 0;
}