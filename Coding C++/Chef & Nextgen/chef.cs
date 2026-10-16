#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if ((x * y) >= (a * b)) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}