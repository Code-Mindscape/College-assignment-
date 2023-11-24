#include <stdio.h>
int main()
{
    int em_number;
    int day = 1;
    double g_pay;
    double State_t;
    double Fedral_t;
    double FICA;
    double total_tax;
    double total_g_pay;
    double total_state_t;
    double total_fedral_t;
    double total_fica_t;
    double net_pay;
    double net_pay_total;

    while (day <= 7)
    {
        while (1)
        {
            g_pay = 0.00;
            State_t = 0.00;
            Fedral_t = 0.00;
            FICA = 0.00;
            net_pay = 0.00;

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
            printf("TOTAL TAX : %.2lf\n\n", total_tax);

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

            day++;
        }
        printf("Net Gross Pay: %.2lf\n", total_g_pay);
        printf("Total State Tax: %.2lf\n", total_state_t);
        printf("Total Fedral Tax: %.2lf\n", total_fedral_t);
        printf("Total FICA withholdings: %.2lf\n", total_fica_t);
        printf("Net Pay: %.2lf\n", net_pay_total);

    }

    return 0;
}
