#include <iostream>
using namespace std;

int T, N;
int X[1000];

int main() {
    ios_base::sync_with_stdio(false); // C++와 C 두 표준 입출력 동기화를 해제한다.
    cout.tie(NULL);
    cin.tie(NULL);                    // 입력과 출력이 묶여있는 것을 풀어준다.

    cin >> T;

    for (int t = 0; t < T; t++) {
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> X[i];
        }

        int ans = X[0], tmp = X[0];
        for (int i = 1; i < N; i++) {
            tmp = max(tmp, 0) + X[i];
            ans = max(ans, tmp);
        }

        cout << ans << '\n';
    }

    return 0;
}