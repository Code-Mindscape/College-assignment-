#include <stdio.h>
int main()
{
    int i = 1;
    int month_passed;
    double annual_i_rate;  // its rate only
    double monthly_i_rate; // its rate only
    double annual_i = 0;
    double monthly_i = 0;
    double start_balance = 0;
    double ending_balance = 0;
    double withdraw_amount = 0;
    double deposit_amount = 0;
    double total_deposits = 0;
    double total_withdrawls = 0;
    double total_intrest = 0;

    printf("Enter your Annual intrest rate: \n");
    scanf("%lf", &annual_i_rate);
    printf("Enter Starting balance: \n");
    scanf("%lf", &start_balance);
    printf("Enter number of months passed: \n");
    scanf("%d", &month_passed);

    while (i <= month_passed)
    {

        // PART A
        printf("Enter the amount deposit in month %d: \n", i);
        scanf("%lf", &deposit_amount);
        if (deposit_amount < 0)
        {
            printf("Account has been closed\n");
            break;
        }
        total_deposits = total_deposits + deposit_amount;  

        start_balance += deposit_amount;

        // PART B
        printf("Enter the amount withdrawn in month %d: \n", i);
        scanf("%lf", &withdraw_amount);
        if (withdraw_amount < 0)
        {
            printf("Account has been closed\n");
            break;
        }
        total_withdrawls = total_withdrawls + withdraw_amount;  
        start_balance -= withdraw_amount;

        // PART C
        monthly_i_rate = annual_i_rate / 12;                // monthly intrest rate
        monthly_i = (start_balance * monthly_i_rate) / 100; // Monthly intrest value**
        start_balance += monthly_i;
        total_intrest = total_intrest + monthly_i;

        i++;
    }
    ending_balance = start_balance;
    printf("Ending balance: %.2lf\n",ending_balance); 
    printf("Total deposit amount: %.2lf\n",total_deposits); 
    printf("Total withdrawl amount: %.2lf\n",total_withdrawls); 
    printf("Total intrest earned: %.2lf\n",total_intrest); 


    return 0;
}
