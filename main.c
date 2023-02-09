#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int board[MAX_ROWS][MAX_COLS];

void FormBoard();
int GetCoordinates(char *coordinatesInput, int *rowCount, int *colCount);
int OverwritingFieldNumber(int, int, int);


int main() {

    /*
    // name of user
    char name[50];
    printf("Enter your name here:");
    scanf("%s", name);
    printf("%s's Sudoku:\n", name);

    int row = 0, n = 0, row = 1;

    printf("  abc def ghi\n");

     */
    //Forming the blank board with 9x9
    FormBoard();

    //Asking player which field to use with coordinates ix9
    printf("Enter coordinates:\n");
    char coordinatesInput[3];
    scanf("%s", coordinatesInput);
    int rowCount, colCount;
    GetCoordinates(coordinatesInput, &rowCount, &colCount);

    int coordinateAsInt[2] = {0, 0};

    printf("%d\n", board[rowCount][colCount]);

    //Asking for players input to generate sudoku with chosen number
    printf("Now enter a number from 1 to 9 for the chosen coordinates to generate your special sudoku:\n");
    int initialNumber;
    scanf("%d", &initialNumber);

    OverwritingFieldNumber(initialNumber, rowCount, colCount);

    FormBoard();

    //letting Player overwrite number of the field of previously chosen coordinates
    //Generate random sudoku

    return 0;
}

void FormBoard() {

    board[3][6] = 7;

    int row, col;
    for (row = 0; row < MAX_ROWS; row++) {
        for (col = 0; col < MAX_COLS; col++) {
            printf("%d", board[row][col]);
        }
        printf("\n");
    }
}

int GetCoordinates(char *coordinatesInput, int *io_rowCount, int *io_colCount) {

    printf("%c%c\n", coordinatesInput[0], coordinatesInput[1]);
    *io_rowCount = coordinatesInput[0] - 'a';
    *io_colCount = atoi(&coordinatesInput[1]) - 1;
}

int OverwritingFieldNumber(int i_initialNumber, int i_rowCount, int i_colCount) {

    board[i_rowCount][i_colCount] = i_initialNumber;

}

int RandomNumber() {

}

void GeneratingSudoku() {
    //Alle Stellen im Sudoku durchgehen...
    for (int i = 0; i < MAX_ROWS; i++) {
        for (int j = 0; j < MAX_COLS; ++j) {
            //...um zu überprüfen, ob die Zahlen noch den Sudokuregeln entsprechen
            for (int value = 1; value <= 9; value++) {
                //wenn ja, wird das Sudoku generiert/beschrieben

               // int myValue = rand()%9 + 1;
                if (!CheckRow(myValue, i)) return 0;
                if (!CheckColumn(myValue, j)) return 0;
                if (!CheckBox(myValue, i, j)) return 0;

                board[i][j] = myValue

            }

        }
    }
}

int CheckRow(int myValue, int row) {

    for (int i = 0; i < MAX_COLS; i++) {
        if (myValue == board[row][i]) {
            return 0;
        }
        else {
            return 1;
        }
    }
}

void CheckColumn() {

}

void checkBox() {

}
