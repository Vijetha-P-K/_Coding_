#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x;
    for(int i=0;i<t;i++){
        cin >> x;
        
        if(x+3 <= 10){
            cout <<"Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }
    return 0;
}