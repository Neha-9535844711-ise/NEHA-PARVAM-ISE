/* write a program to print sum of all the elements on an array
*/

#include<stdio.h>
int main()
{
    int size=0,a[100],sum=0,i;
    scanf("%d",&size);
    for(int i=0;i<size;scanf("%d ",&a[i++]));

    for(int i=0;i<size;printf("%d ",a[i]),sum+=a[i++]);   
    printf("sum of all the elments is %d ",sum);
    return 0;
    
    
}
   