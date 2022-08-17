#include<stdio.h>
int main()
{
    int arr[20],n,i;
    printf(" enter size of array :- ");
    scanf("%d",&n);
    printf(" enter array element : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int res=largest(arr,n);
    printf(" LARGEST number =%d ",res);
    getch();
}
int largest(int ar[],int n)
{
    int i,large;
    large=ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]>large)
            large=ar[i];
    }
    return large;
}
