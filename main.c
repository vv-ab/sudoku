#include <stdio.h>

int main() {

    printf("Enter your name here:");
    char name [50];
    scanf("%s", name);
    char getEnter = getchar();

    int i = 0;
    int n = 0;

    int row = 1;

    printf("%s's Sudoku:\n", name);
    printf("  abc def ghi\n");

    while(i != 3) {
        printf("  --- --- ---\n");

        while (n != 3) {

            printf("%d", row++);
            printf("|***|***|***|\n");
            n++;
        }
        n = 0;
        i++;
    };
     printf(" --- --- ---\n");

     return 0;
}
