#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n,e;
        cin>> n >> e;
        int h = n/e;
        int anss = h;
        for(int i = 1;i<=e;i++){
            cout << anss <<" ";
            anss = anss + h;
        }
        cout << endl;
    }
    return 0;
}
