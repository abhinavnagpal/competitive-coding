#include <iostream>
using namespace std;

int coin_change(int arr[ ], int n, int sum){
    
    if (sum<0 || n<=0){
        return 0;
    }
    if (sum==0){
        return 1;
    }
    
    return coin_change(arr,n,sum-arr[n-1])+coin_change(arr,n-1,sum);
}
int main() {
	//code
	int t,n,arr[301],sum;
	cin>>t;
	
	while(t--){
	    cin>>n;
	    for (int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cin>>sum;
	    cout<<coin_change(arr,n,sum)<<endl;
	}
	
	return 0;
}