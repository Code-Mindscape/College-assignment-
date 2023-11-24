#include <stdio.h>
int main()
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

    return 0;
}