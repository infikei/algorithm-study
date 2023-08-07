// Solve 2022-06-03
// Update 2023-08-07

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

unordered_set<int> hs;

int main() {
    FASTIO;

    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        hs.insert(x);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> x;

        if (hs.find(x) != hs.end()) {
            cout << 1 << ' ';
        }
        else {
            cout << 0 << ' ';
        }
    }

    cout << '\n';

    return 0;
}
