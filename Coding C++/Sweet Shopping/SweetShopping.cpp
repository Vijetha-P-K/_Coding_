#include <iostream>
using namespace std;

int a[100005];

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long sum = 0;
        int left = 0, best = 0;

        for (int right = 0; right < n; right++) {
            sum += a[right];
            while (sum > m) {
                sum -= a[left];
                left++;
            }
            if (right - left + 1 > best) best = right - left + 1;
        }

        cout << best << endl;
    }
    return 0;
}
