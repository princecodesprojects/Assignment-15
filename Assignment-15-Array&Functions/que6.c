#include<stdio.h>
#include<conio.h>

void reverse(int b[],int n)
{
   for(int i=n;i>=0;i--)
   {
    printf("%d ",b[i]);
   }
}

int main()
{
    int n,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   reverse(a,n);
return 0;
}