#include <stdio.h>
int main()
{
    int time = 5;
    float cal_increase_rate = 3.6;
    float Calories_burned = 0;

    printf("_______________________________________\n");
    printf("minutes    ");
    printf("Calories burned\n");
    printf("_______________________________________\n");

    while (time <= 30)
    {
        Calories_burned = time * cal_increase_rate;
        printf("%d              ",time);
        printf("%.2f\n",Calories_burned);
        time = time + 5;
    }

    return 0;
}