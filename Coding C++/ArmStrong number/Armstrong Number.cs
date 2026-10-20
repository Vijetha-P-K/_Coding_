
#include <iostream>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;

    int count = 0;

    for (int i = L; i <= R; i++) {
        int temp = i;
        int digits = 0;
        int sum = 0;

        int n = i;
        while (n > 0) {
            digits++;
            n /= 10;
        }

        temp = i;

        while (temp > 0) {
            int digit = temp % 10;
            int power = 1;

            for (int j = 0; j < digits; j++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == i) {
            cout << i << " ";
            count++;
        }
    }

    cout << "\nCount = " << count;

    return 0;
}
