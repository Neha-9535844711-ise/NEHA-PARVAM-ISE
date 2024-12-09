/*c program to generate numerical pattern
 1
 2 1
 3 2 1
 4 3 2 1
 5 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {  
     for(int j=0;j<n;j++)
      {
        printf("%d ",j+i); 
      }
        printf("\n");
    }
    return 0;
}
