#include <stdio.h>
int main()
{
    int org_in_start = 0;
    int days = 0; 
    int increase_avg_rate;
    int increase_avg;
    int increased_org;
    int i = 1;

    printf("Number of organisms: \n");
    scanf("%d", &org_in_start);
    printf("Number of days: \n");
    scanf("%d", &days);
    printf("Enter Avg increase: \n");
    scanf("%d", &increase_avg_rate);

    increase_avg = (org_in_start * increase_avg_rate) / 100;
    while (i <= days)
    {
        org_in_start = org_in_start + increase_avg;
        printf("Total organisms population in day %d will be: %d\n", i, org_in_start);
        i++;
    }
    

    return 0;
}