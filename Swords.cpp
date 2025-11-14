#include <bits/stdc++.h>
using namespace std;

long long n, mx, h, anss;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    vector<long long> arr(n);
    for (auto &e : arr) 
        cin >> e;
    mx = *max_element(arr.begin(), arr.end());
    for (auto e : arr) 
        h = __gcd(mx - e, h);
    for (auto e : arr) 
        anss += (mx - e) / h;

    cout << anss << ' ' << h;
}
