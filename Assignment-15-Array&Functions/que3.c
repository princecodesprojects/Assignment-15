#include<stdio.h>
#include<conio.h>
int sort(int b[]);
int main()
{
int b[10],i;
printf("Enter 10 numbers\n");
for(i=0;i<10;i++)
{
    scanf("%d",&b[i]);
}
sort(b);
return 0;
}

int sort(int b[])
{
    int i,j,temp;
for(i=0;i<10;i++)
{
   for(j=i+1;j<10;j++)
   {
     if(b[i]>b[j])
     {
        temp=b[i];
        b[i]=b[j];
        b[j]=temp;
     }
   }
}
for(i=0;i<10;i++)
printf("%d ",b[i]);
}