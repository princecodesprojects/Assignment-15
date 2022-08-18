#include<stdio.h>
#include<conio.h>
int greatest(int b[]);
int main()
{
int a[10],i;
printf("Enter 10 numbers\n");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}

 printf("%d ",greatest(a));
return 0;
}

int greatest(int b[])
{
   int temp=b[0],i;
   for(i=1;i<10;i++)
   {
     if(temp>b[i])
       temp=b[i];
   }return temp;
}