#include<stdio.h>
/*c program to check it a given integer is odd or even
*/
int main()
{
    int num;
    printf("Enter an integer:");
    scanf("%d",&num);
    if(num % 2==0)
    {
        printf("%d is even.\n",num);
    }
    else
    { 
        printf("%d is odd.\n",num);
    }
    return 0;
}