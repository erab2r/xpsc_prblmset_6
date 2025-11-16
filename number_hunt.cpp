#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;

    while (tc--) {
        long long e;
        cin >> e;

        if (e == 1) {
            cout << 6 << endl;
        } else {

            while (!isPrime(e))
                e++;

            long long p = e;
            e++;

            while (!isPrime(e))
                e++;

            long long q = e;

            long long anss = p * q;
            cout << anss << endl;
        }
    }
    return 0;
}
