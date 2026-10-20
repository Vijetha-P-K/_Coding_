#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int a , b , c;
	for(int i=0;i<t;i++){
	    cin >> a >> b >> c;
	    
	    cout << max({a , b , c}) << "\n";
	}
    return 0;
}
