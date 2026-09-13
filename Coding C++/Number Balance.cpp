#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int evenSum = 0;
    int oddSum = 0;
    int rem;

    while(n != 0) {
        rem = n % 10;

        if(rem % 2 == 0) {
            evenSum += rem;
        }
        else {
            oddSum += rem;
        }

        n = n / 10;
    }

    if(evenSum == oddSum) {
        cout << "Balanced";
    }
    else if(evenSum > oddSum) {
        cout << "Even Dominant";
    }
    else {
        cout << "Odd Dominant";
    }

    return 0;
}
