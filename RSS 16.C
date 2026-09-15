
#include <stdio.h>
int main()
   
{
    int num,i;

    printf("Enter anumber:");
    scanf("%d",&num);


    printf("\n Multiplication Table of %d\n",num);

     for (i=1;i<=10;i++)
         
    {
        printf("%d*%d=%d\n",num,i,num*i);
        
    }    
     
     return 0;
    } 