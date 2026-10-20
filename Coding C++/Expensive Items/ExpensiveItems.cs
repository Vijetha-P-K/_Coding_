#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int C[100];

        for (int i = 0; i < N; i++) {
            cin >> C[i];
        }

        sort(C, C + N);

        int sum = 0;

        for (int i = N - 1; i >= N - K; i--) {
            sum += C[i];
        }

        cout << sum << endl;
    }

    return 0;
}
