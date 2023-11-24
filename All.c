#include <stdio.h>
#include <conio.h>
void printAllChoices();
void sumOfNUmbers();
void charactersForASCII();
void oceanLevel();
void caloriesBurned();
void membershipFee();
void distanceTraveled();
void penniesForPay();
void mathTutor();
void hotelOccupancy();
void averageRainfall();
void population();
void celsiusToFahrenheit();
void greatestAndLeastNumber();
void payrollReport();
void savingAccountBalance();

int main()
{

    char input;
    do
    {
        int userChoice = 0;
        printAllChoices();
        printf("\nSelect option you want:\n");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 1:
            sumOfNUmbers();
            break;
        case 2:
            charactersForASCII();
            break;
        case 3:
            oceanLevel();
            break;
        case 4:
            caloriesBurned();
            break;
        case 5:
            membershipFee();
            break;
        case 6:
            distanceTraveled();
            break;
        case 7:
            penniesForPay();
            break;
        case 8:
            mathTutor();
            break;
        case 9:
            hotelOccupancy();
            break;
        case 10:
            averageRainfall();
            break;
        case 11:
            population();
            break;
        case 12:
            celsiusToFahrenheit();
            break;
        case 13:
            greatestAndLeastNumber();
            break;
        case 14:
            payrollReport();
            break;
        case 15:
            savingAccountBalance();
            break;

        default:
            printf("Please! enter only given choice.\n");
            break;
        }
        printf("\nWant to run again Enter >> y <<\n\n");
        input = getch();

    } while (input == 'y');

    return 0;
}

void printAllChoices()
{
    printf("1.Sum of n numbers.\n");
    printf("2.Print characters for ASCII 0 to 127.\n");
    printf("3.Ocean level table.\n");
    printf("4.Calories burned table.\n");
    printf("5.Membership fee increase table.\n");
    printf("6.Distance traveled.\n");
    printf("7.Pennies for Pay.\n");
    printf("8.Math tutor.    (pending)\n");
    printf("9.Calculate Hotel Occupancy.\n");
    printf("10.Calculate Average rainfall.\n");
    printf("11.Population count.\n");
    printf("12.Change Celsius to Fahrenheit.    (pending)\n");
    printf("13.Get greatest and smallest number of a series.\n");
    printf("14.Payroll report for tax.\n");
    printf("15.Saving account Balance Check.\n");
}
void sumOfNUmbers()
{
    int userInput;
    int sum = 0;
    int i = 0;
    printf("Upto how many numbers you wany to add\n");
    scanf("%d", &userInput);

    if (userInput >= 0)
    {
        for (i = 0; i <= userInput; i++)
        {
            sum = i + sum;
        }
        printf("The sum of 1 to %d is %d", userInput, sum);
    }
    else
    {
        printf("enter positive integers only.\n");
    }
}
void charactersForASCII()
{
    int row = 1;
    int col = 1;
    char letter = 0;

    while (row <= 8)
    {
        col = 1;
        while (col <= 16)
        {
            printf(" %c", letter);
            letter++;
            col++;
        }
        printf("\n");
        row++;
    }
}
void oceanLevel()
{
    int years = 1;
    float ocean_level = 1.5;

    printf("_______________________________________\n");
    printf("Year    ");
    printf("Level increased (millimeters)\n");
    printf("_______________________________________\n");

    while (years <= 25)
    {
        printf(" %d        ", years);
        printf("%.1f\n", ocean_level);

        ocean_level = ocean_level + 1.5;
        years++;
    }
}
void caloriesBurned()
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
        printf("%d              ", time);
        printf("%.2f\n", Calories_burned);
        time = time + 5;
    }
}
void membershipFee()
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
        printf("%d             ", years);
        printf("%d\n", membership_fee);
        years++;
    }
}
void distanceTraveled()
{
    int speed;
    int hours;
    int i = 1;
    int distance_traveled;
    float distance_covered_1Hour;

    printf("What is the speed of the vehicle in mph\n");
    scanf("%d", &speed);
    printf("How many hours has it traveled?\n");
    scanf("%d", &hours);
    distance_traveled = hours * speed;
    distance_covered_1Hour = distance_traveled / hours;

    printf("_______________________________________\n");
    printf("Hours    ");
    printf("Distance traveled\n");
    printf("_______________________________________\n");

    while (i <= hours)
    {
        printf("%d          ", i);
        printf("%.2f\n", distance_covered_1Hour);

        distance_covered_1Hour = distance_covered_1Hour + 40;
        i++;
    }
}
void penniesForPay()
{
    int days;
    int i = 1;
    double salary = 5;
    float total_salary = 0;

    printf("Enter number of days:\n");
    scanf("%d", &days);

    printf("_______________________________________\n");
    printf("days     ");
    printf("Salary($)\n");
    printf("_______________________________________\n");

    while (i <= days)
    {
        total_salary = total_salary + salary;
        printf("%d          ", i);
        printf("%.2f\n", salary);
        salary = salary * 2;
        i++;
    }
    printf("Total Salary for %d days is %.2f:\n", days, total_salary);
}
void mathTutor() {}
void hotelOccupancy()
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
}
void averageRainfall()
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
                if (rainfall_monthly >= 0)
                {
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
}
void population()
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
}
void celsiusToFahrenheit() {}
void greatestAndLeastNumber()
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

    if (num1 > num2)
    {
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

        if (num3 == -99)
        {
            break;
        }

        if (num3 > greater)
        {
            greater = num3;
        }
        else if (num3 < smaller)
        {
            smaller = num3;
        }
    }
    printf("The smalllest number you entered: %d\n", smaller);
    printf("The greatest number you entered: %d\n", greater);
}
void payrollReport()
{
    int em_number;
    int day = 1;
    double g_pay;
    double State_t;
    double Fedral_t;
    double FICA;
    double total_tax;
    double total_g_pay = 0;
    double total_state_t = 0;
    double total_fedral_t = 0;
    double total_fica_t = 0;
    double net_pay = 0;
    double net_pay_total;

        while (1)
        {
            g_pay = 0;
            State_t = 0;
            Fedral_t = 0;
            FICA = 0;
            net_pay = 0;

            printf("Enter employee number: ");
            scanf("%d", &em_number);

            if (em_number == 0)
            {
                break;
            }

            printf("Enter gross Pay: ");
            scanf("%lf", &g_pay);

            printf("Enter state Tax: ");
            scanf("%lf", &State_t);

            printf("Enter fedral Tax: ");
            scanf("%lf", &Fedral_t);

            printf("Enter FICA withholdings: ");
            scanf("%lf", &FICA);

            if (g_pay < 0 || State_t < 0 || Fedral_t < 0 || FICA < 0)
            {
                break;
            }

            State_t = (g_pay * State_t) / 100.0;
            Fedral_t = (g_pay * Fedral_t) / 100.0;
            FICA = (g_pay * FICA) / 100.0;

            total_tax = State_t + Fedral_t + FICA;
            printf("\n\nTOTAL TAX : %.2lf\n", total_tax);

            if (total_tax >= g_pay)
            {
                break;
            }

            net_pay = g_pay - total_tax;
            printf("net Pay for employee %d: %.2lf\n\n", em_number, net_pay);

            net_pay_total = net_pay_total + net_pay;
            total_g_pay = total_g_pay + g_pay;
            total_state_t = total_state_t + State_t;
            total_fedral_t = total_fedral_t + Fedral_t;
            total_fica_t = total_fica_t + FICA;
        }
        printf("\nNet Gross Pay: %.2lf\n", total_g_pay);
        printf("Total State Tax: %.2lf\n", total_state_t);
        printf("Total Fedral Tax: %.2lf\n", total_fedral_t);
        printf("Total FICA withholdings: %.2lf\n", total_fica_t);
        printf("Net Pay: %.2lf\n", net_pay_total);
    }
void savingAccountBalance()
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
    printf("Ending balance: %.2lf\n", ending_balance);
    printf("Total deposit amount: %.2lf\n", total_deposits);
    printf("Total withdrawl amount: %.2lf\n", total_withdrawls);
    printf("Total intrest earned: %.2lf\n", total_intrest);
}