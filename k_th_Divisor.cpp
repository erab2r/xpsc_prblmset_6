#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long n,k;
    cin >> n >> k;
    vector<long long> dvs;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){
            dvs.push_back(i);
            if(n/i!=i) 
                dvs.push_back(n/i);
        }
    }
    sort(dvs.begin(),dvs.end());
    if(dvs.size() < k) 
        cout << -1 << "\n";
    else 
        cout << dvs[k-1] << "\n";
    return 0;
}