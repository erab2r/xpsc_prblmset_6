#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int ml = 1;
        for (int i = 0;i<n;i++) {
            int x;
            cin >> x;
            ml &= x;
        }
        
        if (ml & 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}