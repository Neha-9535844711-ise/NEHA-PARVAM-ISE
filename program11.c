#include<stdio.h>
/*1 -4 9 -16 25 -36....N
*/
int main()
{
    int n,i;
    printf("enter the value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x=i*i;
        if(i%2==0)
        printf("-%d",x);
        else
        printf("%d",x);
    }
    
    return 0;
}
