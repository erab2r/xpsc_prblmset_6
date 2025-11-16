#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long n,sum=0;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    int idx,cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==sum/n){
	            idx = i;
	            cnt=1;
	            break;
	        }
	    }
	    if(sum%n!=0 || cnt!=1)
	        cout<<"Impossible\n";
	    else{
	        
	        cout << idx+1 <<endl;
	    }
	}
	return 0;
}
