#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int evenSum = 0, oddSum = 0;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0) evenSum += d;
        else oddSum += d;
        n /= 10;
    }

    if (evenSum == oddSum) cout << "Balanced" << endl;
    else if (evenSum > oddSum) cout << "Even Dominant" << endl;
    else cout << "Odd Dominant" << endl;
    return 0;
}
