#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        long long l, r;
        cin >> l >> r;

        if (r < 2 * l) {
            cout << -1 << " " << -1 << "\n";
        } else {
            cout << l << " " << 2 * l << "\n";
        }
    }
}
