#include<stdio.h>
/*c program to generate fibonacci series of N number
*/
int main()
{
    int f0=0,f1=1,n=0,counter;
    scanf("%d",&n);
    for(counter=0;counter<=n;counter++)
    {
         int f2=f0+f1;
        printf("%d ",f0);
        f0=f1;
        f1=f2;
    }
    return 0;
}

