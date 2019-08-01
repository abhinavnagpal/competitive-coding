#include <iostream>
using namespace std;

bool find_equal_subset(int arr[],int n, int sum){
    
    if (sum==0){
        return true;
    }
    if (n<=0 || sum<0){
        return false;
    }
    return find_equal_subset(arr,n-1,sum-arr[n-1])||find_equal_subset(arr,n-1,sum);
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