#include <stdio.h>

void printBoard();
int checkwin();

char board[]= {'0','1','2','3','4','5','6','7','8','9'};

void main()
{
    int player=1,input,status=-1;
    printBoard();

    while(status==-1)
    {
       if (player % 2 == 0) {
    player = 2;
} else {	
    player = 1;
}

        char mark;

if (player == 1) {
    mark = 'x';
} else {
    mark = '0';
}
        printf(" Dear Player %d\n Enter a number :\n",player);
        scanf("%d", &input);
        if(input<1 || input>9)
        {
            printf("invalid input");
        }

        board[input]=mark;
        printBoard();

        int result=checkwin();

        if(result==1)
        {
            printf("Congratulation! Player %d. You are the winner,yahoo!", player);
            return;
        }
        else if(result==0)
        {
            printf("It's a Draw. Better Luck Next Time");
            return;
        }
        player++;
    }
}

void printBoard()
{
    system("cls");
    printf("\n\n");
    printf("\t\t          TIC TAC TOE \t\t \n\n");
    printf("\t\t Dear Player, please select a number \n");
    printf("\n\n");
    printf("\t\t\t    %c   %c   %c \n",board[1],board[2],board[3]);
    printf("\n");
    printf("\n");
    printf("\t\t\t    %c   %c   %c \n",board[4],board[5],board[6]);
    printf("\n");
    printf("\n");
    printf("\t\t\t    %c   %c   %c \n",board[7],board[8],board[9]);
    printf("\n");
    printf("\n\n");

}


int checkwin()
{
    if(board[1]==board[2] && board[2]==board[3])
    {
        return 1;
    }
    if(board[1]==board[4] && board[4]==board[7])
    {
        return 1;
    }
    if(board[7]==board[8] && board[8]==board[9])
    {
        return 1;
    }
    if(board[3]==board[6] && board[6]==board[9])
    {
        return 1;
    }
    if(board[1]==board[5] && board[5]==board[9])
    {
        return 1;
    }
    if(board[3]==board[5] && board[5]==board[7])
    {
        return 1;
    }
    if(board[2]==board[5] && board[5]==board[8])
    {
        return 1;
    }
    if(board[4]==board[5] && board[5]==board[6])
    {
        return 1;
    }

    int count=0;
    for(int i = 1; i <= 9; i++)
    {
        if(board[i]=='x' || board[i]=='0')
        {
            count++;
        }
    }

    if(count==9)
    {
        return 0;
    }
    return -1;
}



