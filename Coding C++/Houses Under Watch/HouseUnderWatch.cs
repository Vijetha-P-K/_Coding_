#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int m , x , y;
    for(int i=0;i<t;i++){
        cin >> m >> x >> y;
    int max1 = x * y;
    bool v[101] = {false};
    
    for(int i=0;i<m;i++){
        int pos;
        cin >> pos;
        
        int s = max(1 , pos - max1);
        int e = min(100 , pos + max1);
        
        for(int h = s;h<=e;h++){
            v[h] = true;
        }
    }
    int safe = 0;
    for(int h=1;h<=100;h++){
        if(!v[h]){
            safe++;
        }
    }
    cout << safe << "\n";
    }
    return 0;
}
