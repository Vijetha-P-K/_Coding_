#include <iostream>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;

    int count = 0;

    for(int i = L; i <= R; i++) {
        int n = i;
        int sum = 0;
        bool even = false;
        bool odd = false;

        while(n != 0) {
            int rem = n % 10;
            sum += rem;

            if(rem % 2 == 0) {
                even = true;
            }
            else {
                odd = true;
            }

            n = n / 10;
        }

        if(i % sum == 0 && even && odd) {
            if(count > 0) {
                cout << " ";
            }

            cout << i;
            count++;
        }
    }

    if(count > 0) {
        cout << endl;
    }

    cout << "Count = " << count;

    return 0;
}
