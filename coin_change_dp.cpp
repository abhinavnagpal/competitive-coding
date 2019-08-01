#include <iostream>
using namespace std;

int coin_change(int arr[ ], int n, int sum){
    
    int table[n+1][sum+1];
    for (int i=0;i<n;i++){
        table[i][0]=1;
    }
    for (int i=0;i<=sum;i++){
        table[0][i]=0;
    }
    
    for (int i=1;i<=n;i++){
        for (int j=1;j<=sum;j++){
            
            int case_1 = j<arr[i-1]?0:table[i][j-arr[i-1]];
            int case_2 = table[i-1][j];
            table[i][j]=case_1+case_2;
            
        }
    }
    
    return table[n][sum];
    
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