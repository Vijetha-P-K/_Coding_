#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        if (x >= n) {
            cout << 0 << "\n";
        } else {
            int needed = n - x;
            int packets = (needed + 3) / 4;
            cout << packets << "\n";
        }
    }
    
    return 0;
}