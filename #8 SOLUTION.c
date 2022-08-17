#include<stdio.h>
int main()
{
    int arr[20],n,i;
    printf(" enter size of array : ");
    scanf("%d",&n);
    printf(" enter element in the array : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    duplicate(arr,n);
    //printf("Total duplicate number in a given array : %d",res);
    getch();
}
void duplicate(int arr[],int n)
{
    int i, j,count=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]!=arr[j])
            printf("%d ",arr[i]);
        }
    }
}


