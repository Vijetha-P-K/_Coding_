#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum = 0;
        for (int i = 0; i < 4; i++) {
            int r;
            cin >> r;
            sum += r;
        }

        if (sum == 0) {
            cout << "IN" << "\n";
        } else {
            cout << "OUT" << "\n";
        }
    }
    return 0;
}