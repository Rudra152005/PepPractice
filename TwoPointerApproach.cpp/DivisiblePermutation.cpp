#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        int low = 1, high = n;

        // Fill from the end
        for (int pos = n - 1, step = 0; pos >= 0; pos--, step++) {
            if (step % 2 == 0) {
                p[pos] = low++;
            } else {
                p[pos] = high--;
            }
        }

        for (int x : p) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
