// Solve 2023-03-27

#include <bits/stdc++.h>
using namespace std;

#ifdef BOJ
#define BOJTEST(x) ((void)0)
#else
#define BOJTEST(x) cout << "[Debug] " << #x << ':' << x << '\n'
#endif
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;
using uint = unsigned int;
using ull = unsigned long long;

void cantor(int k, int len) {
    if (k == 0) {
        cout << '-';
        return;
    }

    int len3 = len / 3;
    cantor(k - 1, len3);
    for (int i = 0; i < len3; i++) {
        cout << ' ';
    }
    cantor(k - 1, len3);
}

int main() {
    FASTIO;

    int n;
    while (cin >> n) {
        int len = 1;
        for (int i = 0; i < n; i++) {
            len *= 3;
        }
        cantor(n, len);
        cout << '\n';
    }

    return 0;
}