#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[100];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            bool good = true;
            int start = i - 5;
            if (start < 0) start = 0;

            for (int j = start; j < i; j++) {
                if (a[i] >= a[j]) {
                    good = false;
                    break;
                }
            }

            if (good) count++;
        }

        cout << count << endl;
    }
    return 0;
}