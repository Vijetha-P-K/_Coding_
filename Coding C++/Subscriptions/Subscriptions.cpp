#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i=1;i<=t;i++){
	    int n;
	    cin >> n;
	    int x;
	    cin >> x;
	    int m = 0;
	    if(n<=6){
	        m = 1;
	    }
	    else if(n>6){
	        m = (n+5)/6;
	    }
	    int m1 = m * x;
	    cout << m1 << "\n";
	}
}
