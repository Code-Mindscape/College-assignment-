#include <stdio.h>
int main()
{
    int speed;
    int hours;
    int i=1;
    int distance_traveled;
    float distance_covered_1Hour;

    printf("What is the speed of the vehicle in mph\n");
    scanf("%d",&speed);
    printf("How many hours has it traveled?\n");
    scanf("%d",&hours);
    distance_traveled = hours * speed;
    distance_covered_1Hour = distance_traveled / hours;

    printf("_______________________________________\n");
    printf("Hours    ");
    printf("Distance traveled\n");
    printf("_______________________________________\n");

    while (i <= hours)
    {
        printf("%d          ",i);
        printf("%.2f\n",distance_covered_1Hour);

        distance_covered_1Hour = distance_covered_1Hour + 40;
        i++;
    }

    return 0;
}