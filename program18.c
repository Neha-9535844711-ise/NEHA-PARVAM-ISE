/*c program to generate numerical pattern
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i>=n;i--)
    {  
     for(int j=n;j>=i;j--)
      {
        printf("%d ",n-j); 
      }
        printf("\n");
    }
    return 0;
}