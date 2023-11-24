#include <stdio.h>
int main()
{
    int membership_fee = 2500;
    int years = 1;

    printf("_______________________________________\n");
    printf("Years    ");
    printf("Fee increased\n");
    printf("_______________________________________\n");

    while (years <= 6)
    {
        float fee_increase_rate = membership_fee * 0.04;

        membership_fee = membership_fee + fee_increase_rate;
        printf("%d             ",years);
        printf("%d\n",membership_fee);
        years++;
    }

    return 0;
}