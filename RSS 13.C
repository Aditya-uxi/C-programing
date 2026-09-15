#include <stdio.h>
int main()
   
{
    int choice;
    float num1,num2,result;

    do
    {
      printf("\n-----Menu driven calculator-----\n");
      printf("1.Addition\n");
      printf("2.substraction\n");
      printf("3.Multiplication\n");
      printf("4.Division\n");
      printf("5.Exit\n");
      scanf("%d",&choice);

      switch (choice)
     {

       case 1:
       printf("Enter two numbers:");
       scanf("%f%f",&num1,&num2);
       result=num1+num2;
       printf("Result=%f.2f\n",result);
       break;

       case 2:
       printf("Enter two numbers:");
       scanf("%f%f",&num1,&num2);
       result=num1-num2;
       printf("Result=%f.2f\n",result);
       break;

       case 3:
       printf("Enter two numbers:");
       scanf("%f%f",&num1,&num2);
       result=num1*num2;
       printf("Result=%f.2f\n",result);
       break;

       case 4:
       printf("Enter two numbers:");
       scanf("%f%f",&num1,&num2);

       if (num2!=0)
       printf("Result=%f.2f\n",num1/num2);

       else
           printf("Error! division by zero is not allowed.\n");
       break;

       case 5:
        printf("Exsisting calculator...\n");
         break;

         default:
            printf("Invalid choice! please try again.\n");
     }
     
    }  while (choice!=5);

     return 0;

    }
        
  
    