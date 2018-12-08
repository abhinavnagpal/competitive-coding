// Link: https://practice.geeksforgeeks.org/problems/index-of-an-extra-element/1
int findExtra(int a[],int b[],int n)
{
    int flag=0;
    for (int i=0;i<n-1;i++)
    {
        if (a[i]==b[i])
        {
            continue;
        }
        else
        {
            return i;
        }
    }
    if (flag==0)
    {
        return n-1;
    }
}