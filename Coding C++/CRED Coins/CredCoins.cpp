#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x , y;
    int a = 0;
    for(int i=0;i<t;i++){
        cin >> x >> y;
        int m = x * y;
        int d = m / 100;
        cout << d << "\n";
    }
    return 0;
}
