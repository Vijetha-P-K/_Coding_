#include <iostream>
using namespace std;

bool seen[100001];

int main() {
    int n;
    cin >> n;

    bool first = true;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (!seen[x]) {
            seen[x] = true;
            if (!first) cout << ' ';
            cout << x;
            first = false;
        }
    }
    cout << endl;
    return 0;
}
