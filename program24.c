/* write a program to print even sum and odd sum on an array
*/

#include<stdio.h>
int main()
{
    int size=0,a[100],sum=0,i,evensum=0,oddsum=0;
    scanf("%d",&size);
    for(int i=0;i<size;scanf("%d ",&a[i++]));

    for(int i=0;i<size;i++)
    {
      printf("%d ",a[i]);  
      if(size%2==0)
      evensum+=a[i];
    else
      oddsum+=a[i];
    }
    printf("sum of the even %d odd %d",evensum,oddsum);
    return 0;
}
   