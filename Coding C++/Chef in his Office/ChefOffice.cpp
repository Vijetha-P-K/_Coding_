#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x , y;
    for(int i=0;i<t;i++){
        cin >> x >> y;
        int m = 4 * x;
        int m1 = m + y;
        cout << m1 <<"\n";
    }
    return 0;
}
