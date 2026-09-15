
#include <stdio.h>
int main()
   
{
    
    int num;
    
    printf("Enter your number:");
    scanf("%d",&num);

    if(num>0)
    
     printf("The number is positive");
    
     else if (num<0)
    
     printf("The number is negetive"); 

     else
        printf("The number is zero");
    
    return 0;
}
