#include<stdio.h>
#include<conio.h>

int firstOccurance(int b[])
{
    int i,j;
for(i=0;i<10;i++)
{
    
      if(b[i]==b[i+1])
      {
        return b[i];
      }
   
}
}

int main()
{
    int a[10],i;
printf("Enter 10 numbers\n");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
printf("%d",firstOccurance(a));
}