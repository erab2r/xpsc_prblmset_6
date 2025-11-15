#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int tc;
	cin>>tc;
	while(tc--){
	    int n;
		cin >> n;
		int e[n];
		for(int i=0;i<n;i++){
			e[i]=n-i;
		}

		for(int i=0;i<n;i++){
			cout << e[i] <<" ";
		}
	}
	return 0;
}