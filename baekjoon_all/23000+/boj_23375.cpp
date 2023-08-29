// Solve 2023-08-29

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    ll x, y, r;
    cin >> x >> y >> r;

    cout << x + r << ' ' << y + r << '\n';
    cout << x - r << ' ' << y + r << '\n';
    cout << x - r << ' ' << y - r << '\n';
    cout << x + r << ' ' << y - r << '\n';

    return 0;
}
