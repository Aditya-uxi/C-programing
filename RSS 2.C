/*
Program(2)-> Write a program to make use of the basic input/ output functions using different data types.
Solution(2)-> User defined values.
*/



# include <stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\n Enter Student Rollnumber:");
    scanf("%d", &rollnum);
    printf("\n Enter Student Percentage:");
    scanf("%f" , &per);
    printf("\n Enter Student Grade:");
    scanf(" %C", &grade);

    printf("\n....Student Information.....");
    printf("\n Rollnumber is:%d",rollnum);
    printf("\n percentage is:%f",per);
    printf("\n Grade is:%c",grade);
    
    return 0;

}