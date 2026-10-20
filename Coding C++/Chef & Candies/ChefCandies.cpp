#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int need = N - X;

        if (need <= 0) {
            cout << 0 << endl;
        } else {
            cout << (need + 3) / 4 << endl;
        }
    }

    return 0;
}
