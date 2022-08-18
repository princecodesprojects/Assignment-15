#include<stdio.h>
#include<conio.h>

int main()
{
    int a[]={1,3,4,6,8};
    int b[]={2,5,9,10,11};
    int c[10];
    int i=0,j=0,k;

    for(k=0;k<10;k++)
    {
        if(i>=5)
        {
            while(k<10)
            {
                c[k]=b[j];
                j++;
                k++;
                if(k==10)
                break;
            }
        }
        else if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    for(k=0;k<10;k++)
    printf("%d ",c[k]);
    return 0;
}