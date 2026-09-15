/*
Program(7) -> Write a program to swap two numbers using a temporary variable.
Solution-> user defined values.
*/


# include <stdio.h>
int main()

{
    int a,b,temp;

    a = 111;
    b = 222;
    
    printf("Before Swapping: ");
    
    printf("\n a = %d,b = %d \n ",a,b);
     
    temp = a; 
    a = b;
    b = temp;
    printf("\n After Swapping: ");
    printf("\n a = %d, b = %d \n",a,b); 

    return 0;

}