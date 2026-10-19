 #include <iostream>
using namespace std;

char s[200][205];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int len = 0;
    bool stop = false;

    while (!stop) {
        char c = s[0][len];
        if (c == '\0') break;  

        for (int j = 1; j < n; j++) {
            if (s[j][len] != c) {  
                stop = true;
                break;
            }
        }
        if (!stop) len++;
    }

    for (int i = 0; i < len; i++) cout << s[0][i];
    cout << endl;
    return 0;
}
