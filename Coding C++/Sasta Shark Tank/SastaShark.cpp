#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int valuation1 = a * 10;
        int valuation2 = b * 5;
        
        if (valuation1 > valuation2) {
            cout << "FIRST\n";
        } else if (valuation2 > valuation1) {
            cout << "SECOND\n";
        } else {
            cout << "ANY\n";
        }
    }
    
    return 0;
}
