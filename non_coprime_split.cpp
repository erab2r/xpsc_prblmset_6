#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, n, h, q; 
    cin >> tc; 
    while(tc--) {
        cin >> n;
        map<int, int> mp;
        q = n; 
        while(q--) {
            cin >> h; 
            mp[h] = n - q; 
        }

        int anss = -1;
        for (auto [x, p] : mp) {
            for (auto [y, q] : mp) {
                if (__gcd(x, y) == 1) {
                    anss = max(anss, p + q);
                }
            }
        }

        cout << anss << '\n';
    }
}
