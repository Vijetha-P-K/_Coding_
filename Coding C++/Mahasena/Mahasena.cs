#include <iostream>
using namespace std;

int main() {
    int N, A;
    int lucky = 0, unlucky = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A;

        if (A % 2 == 0)
            lucky++;
        else
            unlucky++;
    }

    if (lucky > unlucky)
        cout << "READY FOR BATTLE";
    else
        cout << "NOT READY";

    return 0;
}
