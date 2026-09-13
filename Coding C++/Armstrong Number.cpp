#include <iostream>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;

    int count = 0;

    for(int i = L; i <= R; i++) {

        int n = i;
        int temp = i;
        int digits = 0;

        // Count digits
        while(temp != 0) {
            digits++;
            temp = temp / 10;
        }

        int sum = 0;
        n = i;

        // Calculate sum of digits raised to digits
        while(n != 0) {
            int rem = n % 10;

            int power = 1;
            for(int j = 1; j <= digits; j++) {
                power = power * rem;
            }

            sum = sum + power;
            n = n / 10;
        }

        if(sum == i) {
            cout << i << " ";
            count++;
        }
    }

    cout << endl;
    cout << "Count = " << count;

    return 0;
}
