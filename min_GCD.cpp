#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll tc;
    cin >> tc;
    while(tc--) {
        ll n;
        cin >> n;
        ll arr[n];
        for(ll i = 0; i < n; i++) 
            cin >> arr[i];

        sort(arr, arr    + n);

        ll g = 0;
        for(ll i = 1; i < n; i++) 
            if(!(arr[i] % arr[0])) 
                g = __gcd(g, arr[i]);

        cout << (g == arr[0] ? "Yes" : "No") << "\n";
    }
}
