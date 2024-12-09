/* write a c program to print summation of numbers
*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    sum+=i;
    }
    printf("summation of num from 1 to %d is%d\n",n,sum);
    return 0;
}