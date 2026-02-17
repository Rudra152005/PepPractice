#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 998244353;
long long modinv2 = (MOD + 1) / 2; // inverse of 2 mod MOD

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        string s;
        cin >> s;

        long long cur = 0;      // c_{i-1}
        long long base = 0;     // baseline f
        vector<long long> deltas;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                cur = cur + x;
                base += cur;
            } 
            else if (s[i] == '1') {
                cur = y - cur;
                base += cur;
            } 
            else { // '?', treat as '0' in baseline
                long long delta = y - x - 2 * cur;
                deltas.push_back(delta);

                cur = cur + x;   // baseline assumes '0'
                base += cur;
            }
        }

        if (deltas.empty()) {
            long long ans = (base % MOD + MOD) % MOD;
            cout << ans << "\n";
            continue;
        }

        long long Spos = 0, Sneg = 0;
        long long g = 0;

        for (long long d : deltas) {
            if (d > 0) Spos += d;
            else Sneg += d;
            g = std::gcd(g, llabs(d));
        }

        long long L = base + Sneg;
        long long R = base + Spos;

        if (g == 0) {
            long long ans = (L % MOD + MOD) % MOD;
            cout << ans << "\n";
            continue;
        }

        long long cnt = (R - L) / g + 1;  // number of cool integers

        long long sumLR = ((L % MOD + MOD) % MOD + (R % MOD + MOD) % MOD) % MOD;
        long long ans = cnt % MOD;
        ans = ans * sumLR % MOD;
        ans = ans * modinv2 % MOD;

        cout << ans << "\n";
    }

    return 0;
}
