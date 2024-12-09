#include<stdio.h>
/*c program to read two integers M and N and swap their values
*/
int main()
{
    int M , N, temp;
    printf("enter the value of M");
    scanf("%d",&M);
    printf("enter the value of N");
    scanf("%d",&N);
    printf("before swapping:M=%d,N=%d\n",M,N);
    temp=M;
    M=N;
    N=temp;
    printf("after swapping:M=%d,N=%d\n",M,N);
    return 0;
 }