#include<stdio.h>

int main(){
    // A nested loop is a loop inside a loop
    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol to use: ");
    getchar();
    symbol = getchar();

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}