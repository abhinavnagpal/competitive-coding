#include <iostream>
using namespace std;
#include <stdio.h>

int bottom_up(int *arr,int n)
{
    if (arr[n]!=-1){
        return arr[n];
    }
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=n;i++){
        arr[i]=(arr[i-1]+arr[i-2])%(1000000007);
    }
    return arr[n];
}

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int arr[100001];
        for (int i=0;i<100001;i++){
            arr[i]=-1;
        }
	    cout<<bottom_up(arr,n);
	    
	}
	return 0;
}