
#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf(" enter size of array : ");
    scanf("%d",&n);
    printf(" enter element in the array : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    reverse(arr,n);
    getch();
}
void reverse(int arr[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
        printf("%d ",arr[i]);
    getch();
}
