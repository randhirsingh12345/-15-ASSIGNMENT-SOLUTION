#include<stdio.h>
int main()
{
    int arr[20],n,i;
    printf(" enter size of array :- ");
    scanf("%d",&n);
    printf(" enter array element :- ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        sort_array(arr,n);
        getch();
}
void sort_array(int ar[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",ar[i]);

}
