#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, X, Y;
        cin >> M >> X >> Y;

        int A[10];
        int safe[101] = {0};
        int distance = X * Y;

        for (int i = 0; i < M; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < M; i++) {
            int left = A[i] - distance;
            int right = A[i] + distance;

            if (left < 1) {
                left = 1;
            }

            if (right > 100) {
                right = 100;
            }

            for (int j = left; j <= right; j++) {
                safe[j] = 1;
            }
        }

        int count = 0;

        for (int i = 1; i <= 100; i++) {
            if (safe[i] == 0) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
