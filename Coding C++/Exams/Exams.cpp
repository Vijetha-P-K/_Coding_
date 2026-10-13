#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x , y , z;
    for(int i=0;i<t;i++){
        cin >> x >> y >> z;
        
        int m = x * y;
        int m1 = m / 2;
        if(m1 < z){
            cout  << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}
