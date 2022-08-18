#include<stdio.h>
#include<conio.h>

int frequency(int b[])
{
  int fre[11]={0};
  int i;
  for(i=0;i<10;i++)
  {
    fre[b[i]]++;
  }

  for(i=0;i<10;i++)
  {
    if(fre[i]!=0)
      printf("%d => %d  \n",i,fre[i]);
    
  }
}

int main()
{
    int a[10]={2,5,3,5,9,7,4,6,2,6};

  frequency(a);
  return 0;
}