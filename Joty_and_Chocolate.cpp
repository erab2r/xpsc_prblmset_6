#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b) {
    return __gcd(a, b);
}

long long LCM(long long a, long long b) {
    return (a / GCD(a, b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long overlap = n / LCM(a, b);      
    long long x = (n / a) * p;               
    long long y = (n / b) * q;               
    long long ans = (x + y) - (overlap * (p + q)) + (overlap * max(p, q));

    cout << ans << "\n";
    return 0;
}
