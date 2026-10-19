#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n , k;
	for(int i=0;i<t;i++){
	    cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	sort(arr , arr+n);
	
	int s = 0;
	for(int i=n-1;i>=n-k;i--){
	    s+=arr[i];
	}
	cout << s << "\n";
	}
    return 0;
}
