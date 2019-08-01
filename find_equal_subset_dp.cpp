#include <iostream>
using namespace std;

bool find_equal_subset(int arr[],int n, int sum){
    
    bool table[n+1][sum+1];
    
    for (int i=0;i<=sum;i++){
        table[0][i]=false;
    }
    
    for (int i=0;i<n+1;i++){
        table[i][0]=true;
    }
    
    for (int i=1;i<=n;i++){
        for (int j=1;j<=sum;j++){
            bool case_1=table[i-1][j-arr[i-1]];
            bool case_2=table[i-1][j];
            table[i][j]=case_1||case_2;
        }
    }
    return table[n][sum];
}

int main() {
	//code
	
	int t,n,arr[101],sum; 
	cin>>t;
	while(t--){
	    sum=0;
	    cin>>n;
	    
	    for (int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    if (sum%2==1){
	        cout<<"NO"<<endl;
	    }
	    else if (find_equal_subset(arr,n,sum/2))
	        cout<<"YES"<<endl;
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}