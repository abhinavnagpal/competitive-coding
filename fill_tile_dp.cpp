#include <iostream>
using namespace std;
#define ull unsigned long long int

ull fill(int n, ull *arr){
    
    arr[0]=1;
    arr[1]=1;
    for (int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}


int main() {
	
	int t,n;
	cin>>t;
	ull arr[71];
	while(t--){
	    cin>>n; 
	    cout<<fill(n,arr)<<endl;
	}
	return 0;
}