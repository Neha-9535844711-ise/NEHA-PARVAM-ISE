#include<stdio.h>
/*1 4 9 16 25....N
*/
int main()
{
    int n,i;
    printf("enter the value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x=i*i;
        printf("%d",x);
    }
    return 0;
}
