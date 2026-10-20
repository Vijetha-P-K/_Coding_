#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int count = 0;

        for (int i = 0; i < N; i++) {
            int age;
            cin >> age;

            if (age >= X) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
