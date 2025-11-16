#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    if (!(cin >> tc)) 
        return 0;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int anss = ((i + j) % 2 == 0) ? 2 : 3;
                cout << anss << (j + 1 == m ? '\n' : ' ');
            }
        }
    }
    return 0;
}
