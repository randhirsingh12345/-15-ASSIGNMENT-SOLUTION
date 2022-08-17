#include<stdio.h>
int main()
{
    int a[]={7,3,5,4,6,7,2,4,6,7};
    int n,i,count=0;
    printf("enter an element to search : ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
            count++;
    }
    printf("%d in array present in %d time ",n,count);
    getch();
}
