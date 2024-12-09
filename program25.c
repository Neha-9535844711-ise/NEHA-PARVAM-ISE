/* write a program to print even and odd on an array
*/

#include<stdio.h>
int main()
{
    int size=0,a[100],sum=0,i,even=0,odd=0;
    scanf("%d",&size);
    for(int i=0;i<size;scanf("%d ",&a[i++]));

    for(int i=0;i<size;i++)
    {
      printf("%d ",a[i]);  
      if(a[i]%2==0)
      even+=a[i];
    else
      odd+=a[i];
    }
    printf("sum of the even %d odd %d",even,odd);
    return 0;
}
   