// Solve 2023-12-03

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    int a = 0;

    for (int i = 1; i <= 9; i++) {
        int resp;
        cout << "? A " << i << endl;
        cin >> resp;

        if (resp == 1) {
            a = i;
            break;
        }
    }

    int b = 0;

    for (int i = 1; i <= 9; i++) {
        int resp;
        cout << "? B " << i << endl;
        cin >> resp;

        if (resp == 1) {
            b = i;
            break;
        }
    }

    cout << "! " << a + b << endl;

    return 0;
}
