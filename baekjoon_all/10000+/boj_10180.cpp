// Solve 2023-08-15

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    int t;
    cin >> t;

    for (int ti = 0; ti < t; ti++) {
        int n, d;
        cin >> n >> d;

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            int v, f, c;
            cin >> v >> f >> c;

            if (d * c <= v * f) cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}
