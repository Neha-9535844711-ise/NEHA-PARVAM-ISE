/* write a c program to print the array
*/

#include<stdio.h>
int main()
{
    int size=0,a[100],i;
    scanf("%d",&size);
    for(int i=0;i<size;scanf("%d",&a[i++]));
    for(int i=0;i<size;printf("%d",a[i++]));   
    return 0;
    
    
}
    

