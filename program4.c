#include<stdio.h>
int main()
{
  int ,no,range;
  printf("enter the no");
  scanf("%d",&no);
  printf("enter the range");
  scanf("%d",&range);
  for(i=range;i>=1;i--)
   printf("%d*%d=%d\n",no,i,no*i);
  return 0;
}