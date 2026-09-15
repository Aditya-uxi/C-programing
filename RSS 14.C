
#include <stdio.h>
int main()
   
{
    int num,i=1;

    printf("Enter anumber:");
    scanf("%d",&num);


    printf("\n Multiplication Table of %d\n",num);

    while(i<=10)
        
    {
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }    
    return 0;
    }