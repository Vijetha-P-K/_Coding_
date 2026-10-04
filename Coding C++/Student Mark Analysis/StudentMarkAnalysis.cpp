#include <iostream>
#include <numeric>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> marks(n);

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    double sum = accumulate(marks.begin(), marks.end(), 0);
    double avg = sum / n;

    int maxMark = *max_element(marks.begin(), marks.end());
    int minMark = *min_element(marks.begin(), marks.end());

    int topperPos =
        max_element(marks.begin(), marks.end()) - marks.begin() + 1;

    int passCount = 0, failCount = 0;

    for (int i = 0; i < n; i++) {
        if (marks[i] >= 75)
            passCount++;
        else
            failCount++;
    }

    sort(marks.begin(), marks.end());

    cout << "Class Average: " << fixed << setprecision(1) << avg << "\n";
    cout << "Highest Mark: " << maxMark << "\n";
    cout << "Lowest Mark: " << minMark << "\n";
    cout << "Topper Position: " << topperPos << "\n";
    cout << "Pass Count: " << passCount << "\n";
    cout << "Fail Count: " << failCount << "\n";

    return 0;
}
