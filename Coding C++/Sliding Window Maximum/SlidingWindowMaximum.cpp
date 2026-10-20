#include <iostream>
using namespace std;

int a[100005];
int dq[100005];

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int head = 0, tail = 0;  
        bool first = true;

        for (int i = 0; i < n; i++) {
            if (head < tail && dq[head] <= i - x) head++;

            while (head < tail && a[dq[tail - 1]] <= a[i]) tail--;

            dq[tail++] = i;

            if (i >= x - 1) {
                if (!first) cout << ' ';
                cout << a[dq[head]];
                first = false;
            }
        }
        cout << '\n';
    }
    return 0;
}