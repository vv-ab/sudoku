#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 9
#define MAX_COLS 9

int board[MAX_ROWS][MAX_COLS];

void FormBoard();
int GetCoordinates(char *coordinatesInput, int *rowCount, int *colCount);
int OverwritingFieldNumber(int, int, int);

void GeneratingSudoku();
int CheckRow(int fieldValue, int);
int CheckColumn(int fieldValue, int);
int CheckBox(int fieldValue, int, int);


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
    /* printf("Enter coordinates:\n");
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
*/
    GeneratingSudoku();
    //letting Player overwrite number of the field of previously chosen coordinates
    //Generate random sudoku

    FormBoard();
    return 0;
}

void FormBoard() {

    // board[3][6] = 7;

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
            for (int fieldValue = 1; fieldValue <= 9; fieldValue++) {
                //wenn ja, wird das Sudoku generiert/beschrieben

                // int fieldValue = rand()%9 + 1;
                if (!CheckRow(fieldValue, i)) continue;
                if (!CheckColumn(fieldValue, j)) continue;
                if (CheckBox(fieldValue, i, j));

                {board[i][j] = fieldValue;
                break;}
            }

            if (board[i][j] == 0) {
                //backtracking to find fitting number
                printf("stop\n");

                board[i][j-1] = 0;
            }

        }
    }
}

int CheckRow(int i_fieldValue, int i_row) {

    for (int i = 0; i < MAX_COLS; i++) {
        if (i_fieldValue == board[i_row][i]) {
            return 0;
        }
    }
    return 1;
}

int CheckColumn(int i_fieldValue, int i_col) {

    for (int i = 0; i < MAX_ROWS; i++) {
        if (i_fieldValue == board[i_col][i]) {
            return 0;
        }
    }
    return 1;
}

int CheckBox(int i_fieldValue, int i_row, int i_col) {


    if (i_row <= 2) {
        //row of boxes 1
        if (i_col <= 2) {
            //box 1
        }
        if 
    }

    for (int i = 0; i < 3; i++) {
        if (i_fieldValue == board[i][]) {
            return 0;
        }

    }
    return 1;
}
