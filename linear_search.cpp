#include<iostream>
using namespace std;

int main() {
    int t,n,k,a[1000],flag;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        flag=0;
        for (int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cin>>k;
        
        for (int j=0;j<n;j++)
        {
            if (a[j]==k)
            {
                cout<<j<<endl;
                flag=1;
                break;
            }
            
        }
        if (flag==0)
        {
            cout<<-1<<endl;
        }
    }
	return 0;
}