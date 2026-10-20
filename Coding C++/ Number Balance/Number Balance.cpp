
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int evenSum = 0, oddSum = 0;

    while (N > 0) {
        int digit = N % 10;

        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }

        N = N / 10;
    }

    if (evenSum == oddSum) {
        cout << "Balanced";
    } else if (evenSum > oddSum) {
        cout << "Even Dominant";
    } else {
        cout << "Odd Dominant";
    }

    return 0;
}
