#include <stdio.h>
int main()
{
    int years;
    int months = 12;
    int total_months;
    int i = 1;
    int j = 1;
    float rainfall_monthly = 0;
    float rainfall_total_yearly = 0;
    float rainfall_total = 0;
    float average_rainfall_yearly = 0;
    float average_rainfall_total = 0;

    printf("Number of years.\n");
    scanf("%d", &years);
    if (years >= 1)
    {
        while (i <= years)
        {
            average_rainfall_yearly = 0;
            rainfall_total_yearly = 0;
            j = 1;
            while (j <= months)
            {
                rainfall_monthly = 0;
                printf("Rainfall in month %d in inches:\n", j);
                scanf("%f", &rainfall_monthly);
                if(rainfall_monthly >= 0){
                rainfall_total_yearly = rainfall_total_yearly + rainfall_monthly;
                }
                j++;
            }
            rainfall_total = rainfall_total + rainfall_total_yearly;
            average_rainfall_yearly = rainfall_total_yearly / months;
            printf("Avergage rainfall in year %d: %.2f\n", i, average_rainfall_yearly);

            i++;
        }
        total_months = years * months;
        average_rainfall_total = rainfall_total / total_months;

        printf("Total months : %d\n", total_months);
        printf("Total Rainfall : %.2f inches\n", rainfall_total);
        printf("Average Rainfall for entire time period : %.2f inches\n", average_rainfall_total);
    }

    return 0;
}
