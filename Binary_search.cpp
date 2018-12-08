int bin_search(int A[], int left, int right, int k)
{
    int flag=0;
    while (left<=right)
    {
        int mid = (left+right)/2;
        if (A[mid]==k)
        {
            return mid;
            flag=1;
        }
        else if(A[mid]<k)
        {
            left=mid+1;
        }
        else if (A[mid]>k)
        {
            right=mid-1;
        }
    }
    if (flag==0)
        return -1;
}