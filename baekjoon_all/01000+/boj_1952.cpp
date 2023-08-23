// Solve 2023-08-23

// 백준 3208번과 같은 문제

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    int m, n;
    cin >> m >> n;

    if (m <= n) cout << 2 * (m - 1) << '\n';
    else cout << 2 * n - 1 << '\n';

    return 0;
}
