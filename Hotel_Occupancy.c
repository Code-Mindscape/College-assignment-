#include <stdio.h>
int main()
{
    int floors;
    int rooms;
    int occupied_rooms;
    int Unoccupied_rooms;
    float t_rooms = 0;
    float t_occupied_rooms = 0;
    float t_Unoccupied_rooms = 0;
    float occupied_percentage;
    int i = 1;
    float a = 40.0, b = 60.0;

    printf("How many floors the hostel has?\n");
    scanf("%d", &floors);

    if (floors > 1)
    {
        while (i <= floors)
        {
            if (floors == 13)
            {
                break;
            }
            
            printf("How many rooms are there on %d floor?\n", i);
            scanf("%d", &rooms);
            if (rooms >= 10)
            {
                printf("How many Occupied rooms are there on this floor?\n");
                scanf("%d", &occupied_rooms);
                printf("How many Unoccupied rooms are there on this floor?\n");
                scanf("%d", &Unoccupied_rooms);
                t_rooms = t_rooms + rooms;
                t_occupied_rooms = t_occupied_rooms + occupied_rooms;
                t_Unoccupied_rooms = t_Unoccupied_rooms + Unoccupied_rooms;

                i++;
            }
        }

        occupied_percentage = (t_occupied_rooms / t_rooms) * 100;
        printf("Total rooms are : %.0f\n", t_rooms);
        printf("Occupied rooms : %.0f\n", t_occupied_rooms);
        printf("Unoccupied rooms : %.0f\n", t_Unoccupied_rooms);
        printf("Occupied percentage : %.0f\n", occupied_percentage);
    }

    return 0;
}