#include<stdio.h>
#include<conio.h>

int dElements(int b[])
{
    int count=0,i,j;
  for(i=0;i<9;i++)
  {
    for(j=i+1;j<10;j++)
    {
        if(b[i]==b[j])
        {
          count++;
        }
        
    }
    
  }
  printf("%d",count);
}

int main()
{
    int a[10],i;
printf("Enter 10 numbers\n");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
  dElements(a);
  return 0;
}