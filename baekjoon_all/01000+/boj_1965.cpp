// Solve 2023-05-08

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

int arr[1000];

int main() {
    FASTIO;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> dp;
    dp.push_back(arr[0]);
    for (int i = 1; i < n; i++) {
        int pos = lower_bound(ALL(dp), arr[i]) - dp.begin();

        if (pos == SIZE(dp)) {
            dp.push_back(arr[i]);
        }
        else if (dp[pos] > arr[i]) {
            dp[pos] = arr[i];
        }
    }

    cout << SIZE(dp) << '\n';

    return 0;
}