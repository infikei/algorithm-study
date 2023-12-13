// Solve 2022-06-03
// Update 2023-12-13

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    ll dp[101] = { 0, 1, 1, 1, 2, 2 };

    for (int i = 6; i <= 100; i++) {
        dp[i] = dp[i - 5] + dp[i - 1];
    }

    int t;
    cin >> t;

    for (int ti = 0; ti < t; ti++) {
        int n;
        cin >> n;

        cout << dp[n] << '\n';
    }

    return 0;
}
