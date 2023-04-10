#include <stdio.h>
char box[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void createBoard();
void markingBoard(int, char);
int checkWinner();
int main(){
    int choice, player = 1, i;
    char mark;
    do {
        createBoard();
        player = (player % 2) ? 1 : 2;

        printf("\t\tplayer %d, enter a number:", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'o';
        markingBoard(choice, mark);

        i = checkWinner();
        player++;
    }
    while
        (i == -1);
    createBoard();

    if (i == 1)
        printf("player %d You have won the game", --player);
    else
        printf("<-------Draw------->");
return 0;
}

void createBoard()
{
    printf("\n\n\tTic-tac-toe\n\n");
    printf("\t\t\t\t\tPlayer 1 (X) -- Player 2 (0)\n\n");
    printf("\t\t\t\t\t\t     |    |   \n");
    printf("\t\t\t\t\t\t %c   | %c  |%c   \n", box[1], box[2], box[3]);
    printf("\t\t\t\t\t\t_____|____|____\n");
    printf("\t\t\t\t\t\t     |    |    \n");
    printf("\t\t\t\t\t\t %c   | %c  |%c   \n", box[4], box[5], box[6]);
    printf("\t\t\t\t\t\t_____|____|____\n");
    printf("\t\t\t\t\t\t     |    |    \n");
    printf("\t\t\t\t\t\t %c   | %c  |%c   \n", box[7], box[8], box[9]);
    printf("\t\t\t\t\t\t_____|____|____\n");
    printf("\t\t\t\t\t\t     |    |    \n");
}

void markingBoard(int choice, char mark)
{
    if (choice == 1 && box[1] == '1'){
        box[1] = mark;
    }
    else if (choice == 2 && box[2] == '2'){
        box[2] = mark;
    }
    else if (choice == 3 && box[3] == '3'){
        box[3] = mark;
    }
    else if (choice == 4 && box[4] == '4'){
        box[4] = mark;
    }
    else if (choice == 5 && box[5] == '5'){
        box[5] = mark;
    }
    else if (choice == 6 && box[6] == '6'){
        box[6] = mark;
    }
    else if (choice == 7 && box[7] == '7'){
        box[7] = mark;
    }
    else if (choice == 8 && box[8] == '8'){
        box[8] = mark;
    }
    else if (choice == 9 && box[9] == '9'){
        box[9] = mark;
    }
    else{
        printf("Invalid");
    }
}

int checkWinner()
{
    // horizontal matching condition...
    if (box[1] == box[2] && box[2] == box[3])
        return 1;
    else if (box[4] == box[5] && box[5] == box[6])      
        return 1;
    else if (box[7] == box[8] && box[8] == box[9])
        return 1;

    // vartical matching condition...
    else if (box[1] == box[4] && box[4] == box[7])
        return 1;
    else if (box[2] == box[5] && box[5] == box[8])      
        return 1;
    else if (box[3] == box[6] && box[6] == box[9])
        return 1;

    // transverse matching condition...
    else if (box[1] == box[5] && box[5] == box[9])      
        return 1;
    else if (box[3] == box[5] && box[5] == box[7])
        return 1;

    // no matching condition...
    else if (box[1]!= '1' && box[2]!= '2' && box[3]!= '3' && box[4]!= '4' && box[5]!= '5' && box[6]!= '6' && box[7]!= '7' && box[8]!= '8' && box[9]!= '9')      // no match...
        return 0;
    else {
        return -1;
    }
}
