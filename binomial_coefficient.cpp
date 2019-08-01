#include <iostream>
using namespace std;
int arr[100][100]={-1};

int top_down(int n, int k){
    if (k==0 || k==n){
        if (arr[n][k]==0){
            arr[n][k]=1;
        }
        return arr[n][k];
    }
    if (arr[n-1][k]==0){
        arr[n-1][k] = top_down(n-1,k);
    }
    if (arr[n-1][k-1]==0){
        arr[n-1][k-1] = top_down(n-1,k-1);
    }
    return arr[n-1][k]+arr[n-1][k-1];
}

int bottom_up(int n,int k){
    arr[0][0]=1;

    for (int i=1;i<=n;i++){
        for (int j=0;j<=i;j++){
            if ((j-1)<0){
                arr[i][j] = arr[i-1][j];
            }
            else{
                arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
            }
        }
    }
    return arr[n][k];
}

void update(int n,int k){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
}

int main() {
    int n,k;
    cin>>n>>k;
    update(n,k);
    int ans2=top_down(n,k);
    update(n,k);
    int ans3=bottom_up(n,k);
    cout<<ans2<<endl<<ans3;
}
