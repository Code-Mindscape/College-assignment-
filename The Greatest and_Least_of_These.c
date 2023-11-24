#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    int greater;
    int smaller;

    printf("Enter a number\n");
    scanf("%d", &num1);

    printf("Enter a number\n");
        scanf("%d", &num2);

    if (num1 > num2){
        greater = num1;
        smaller = num2;
    }
    else if (num2 > num1)
    {
        greater = num2;
        smaller = num1;
    }
    

    while (1)
    {
        printf("Enter a number\n");
        scanf("%d", &num3);

        if(num3 == -99){
            break;
        }

        if (num3 > greater){
            greater = num3;
        }
        else if (num3 < smaller){
            smaller = num3;
        }
        
    }
    printf("The smalllest number you entered: %d\n",smaller);
    printf("The greatest number you entered: %d\n",greater);
    return 0;
}
