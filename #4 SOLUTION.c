#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5},i;
    int d=2;
    while(d!=0)
    {
        int temp=arr[4];
        for(i=4;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        d--;
    }
    for(i=0;i<5;i++)

   printf("%d ",arr[i]);
   printf("Through user value \n");
   user();
   getch();
}
void user()
{
    int arr[100],n,i;
    int temp,d;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("enter array element : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter value of d : ");
    scanf("%d",&d);
    while(d!=0)
    {
        temp=arr[n-1];
        for(i=n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        d--;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    getch();
}
