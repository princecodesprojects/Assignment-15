#include<stdio.h>
#include<conio.h>

void rotate(int b[])
{
    int i,j,temp,d,n=10;
    printf("Enter the position number\n");
    scanf("%d",&d);
    for(i=0;i<d;i++)
    {
        temp=b[0];
       for(j=0;j<10;j++)
       {
        b[j]=b[j+1];
       }
       b[n-1]=temp;
    }
    for(i=0;i<10;i++)
    printf("%d ",b[i]);
}

int main()
{
    int i,a[10];
    printf("Enter 10 numbers\n");
   for(i=0;i<10;i++)
   {
      scanf("%d",&a[i]);
   }
   rotate(a);
}