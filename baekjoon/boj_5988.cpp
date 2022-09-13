#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // C++와 C 두 표준 입출력 동기화를 해제한다.
    cout.tie(NULL);
    cin.tie(NULL);                    // 입력과 출력이 묶여있는 것을 풀어준다.

    int N;
    cin >> N;

    for (int n = 0; n < N; n++) {
        string K;
        cin >> K;

        int k = K[K.length() - 1] - '0';
        if (k % 2 == 0) {
            cout << "even\n";
        }
        else {
            cout << "odd\n";
        }
    }

    return 0;
}