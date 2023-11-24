#include <stdio.h>
int main()
{
    int days;
    int i = 1;
    double salary = 5;
    float total_salary;

    printf("Enter number of days:\n");
    scanf("%d",&days);

    printf("_______________________________________\n");
    printf("days     ");
    printf("Salary($)\n");
    printf("_______________________________________\n");

    while (i <= days)
    {
        total_salary = total_salary + salary;
        printf("%d          ",i);
        printf("%.2f\n",salary);
        salary = salary * 2;
        i++;
    }
    printf("Total Salary for %d days is %.2f:\n",days,total_salary);

    return 0;
}