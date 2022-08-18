#include<stdio.h>
#include<conio.h>

int dElements(int b[])
{
  int fre[11]={0};
  int i;
  for(i=0;i<10;i++)
  {
    fre[b[i]]++;
  }

  for(i=0;i<10;i++)
  {
    if(fre[b[i]]==1)
      printf("%d ",b[i]);
    
  }
}

int main()
{
    int a[10]={2,5,3,5,9,7,4,6,2,6};

  dElements(a);
  return 0;
}