#include<stdio.h>
int main()
{
    int arr[5]={1,3,2,5,2};
    int res=adjacent_duplicate(arr,5);
    printf("%d \n",res);
    second();
    getch();
}
void second()
{
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
            printf("%d",arr[i]);
          // return arr[i];

    }
}
int adjacent_duplicate(int arr[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
            return arr[i];
    }

}
