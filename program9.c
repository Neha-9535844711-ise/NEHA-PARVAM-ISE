#include<stdio.h>
/*
*/
int main()
{
    int m=0,n=2,counter=0;
    scanf("%d%d",&m,&n);
    counter=m;
    while(counter<=n)
    {
        if(counter%5==0)
         printf("%d",counter);
        counter++;
    }
    return 0;
}
