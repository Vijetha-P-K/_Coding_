#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n , x;
    for(int i=0;i<t;i++){
        cin >> n >> x;
        
        int t = n * x;
        int c = (t + 3) / 4;
        cout << c << "\n";
    }
    return 0;
}
