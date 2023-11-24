#include<stdio.h>
int main (){
    int userInput; 
    int sum = 0;
    int i = 0;
    printf("Upto how many numbers you wany to add\n");
    scanf("%d",&userInput);

    if (userInput >= 0)
    {
        for (i = 0; i <= userInput; i++)
        {
        sum = i + sum;
        }
        printf("The sum of 1 to %d is %d",userInput,sum);
    }
    else{
        printf("enter positive integers only.\n");
    }
    
    
    
    return 0;
}