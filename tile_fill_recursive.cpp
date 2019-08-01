#include <iostream>
using namespace std;

int fill(int n){
    // base condition
    if (n<0){
        return 0;
    }
    if (n==1 || n==0){
        return 1;
    }
    return fill(n-1)+fill(n-2);
}

int main() {
	
	int t,n;
	cin>>t;
	
	while(t--){
	    cin>>n; 
	    cout<<fill(n);
	}
	return 0;
}