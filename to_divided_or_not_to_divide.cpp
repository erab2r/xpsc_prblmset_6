#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;

    while (tc--) {
        int a, b, e;
        cin >> a >> b >> e;

        if (a % b == 0) {
            cout << -1 << "\n";
            continue;
        }

        int anss = e - (e % a);
        if (e % a != 0)
            anss += a;

        if (anss % b == 0)
            anss += a;

        cout << anss << "\n";
    }

    return 0;
}
