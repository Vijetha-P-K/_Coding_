#include <iostream>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    int count = 0;
    bool first = true;

    for (int i = l; i <= r; i++) {
        // count digits
        int digits = 0;
        int temp = i;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        // sum of digits raised to the power of digits
        int sum = 0;
        temp = i;
        while (temp > 0) {
            int d = temp % 10;
            int p = 1;
            for (int k = 0; k < digits; k++) p *= d;
            sum += p;
            temp /= 10;
        }

        if (sum == i) {
            if (!first) cout << ' ';
            cout << i;
            first = false;
            count++;
        }
    }

    cout << endl;
    cout << "Count = " << count << endl;
    return 0;
}
