#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, e;
    cin >> n >> e;

    cout << "YES\n";
    for (long long i = n; i <= e; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
