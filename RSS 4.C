
/*
Program(3)-> Write a program to calculate the area of circle.
Solution(3)-> User defined values.
*/

# include <stdio.h>
int main()
{
    float radius, area;

    printf("\n Enter the radius or the circle:");
    scanf("%f", &radius);
    area = (3.14*radius *radius);
    printf("\n  Area of the circle= %f",area);

    return 0;
}