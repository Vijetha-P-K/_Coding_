#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> strs(n);

    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string prefix = strs[0];

    for (int i = 1; i < n; i++) {
        while (strs[i].find(prefix) != 0) {
            prefix.pop_back();

            if (prefix.empty()) {
                cout << "\"\"" << endl;
                return 0;
            }
        }
    }

    cout << "\"" << prefix << "\"" << endl;

    return 0;
}
