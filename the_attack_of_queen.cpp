#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    if (!(cin >> tc)) 
        return 0;

    while (tc--) {
        long long n, x, y;
        cin >> n >> x >> y;
        long long anss = (n - 1) * 4 - llabs(x - y)- llabs((n + 1) - (x + y));

        cout << anss << '\n';
    }

    return 0;
}
