#include <stdio.h>
int main()
{
    int years = 1;
    float ocean_level = 1.5;

    printf("_______________________________________\n");  
    printf("Year    "); 
    printf("Level increased (millimeters)\n");  
    printf("_______________________________________\n");  


    while (years <= 25)
    {
       printf(" %d        ",years); 
       printf("%.1f\n",ocean_level); 

       ocean_level = ocean_level + 1.5; 
       years++;
    }

    return 0;
}
