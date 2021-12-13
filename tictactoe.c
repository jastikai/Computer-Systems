#include <stdlib.h>
#include <inttypes.h>

int8_t tictactoe_check(int8_t * gameboard, int win_len);

int main(void)
{
    return 0;
}

int8_t tictactoe_check(int8_t * gameboard, int win_len)
{
    int8_t win0, win1;
    win0 = 0;
    win1 = 0;
    int8_t board[10][10];
    int i, j, k;
    int square_pointer = 0;
    int winCtr0, winCtr1;

    //täytetään 10x10 lauta
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            board[i][j] = gameboard[square_pointer];
            square_pointer++;
        }
    }

    //käydään läpi riveittäin
    for (i = 0; i <= 9; i++)
    {
        winCtr0 = 0;
        winCtr1 = 0;

        for (j = 0; j <= 9; j++)
        {
            if (board[i][j] == 0)
            {
                winCtr0 = 0;
                winCtr1 = 0;
                //continue;
            }
            if (board[i][j] == 1)
            {
                winCtr0++;
                winCtr1 = 0;
            }
            if (board[i][j] == 2)
            {
                winCtr0 = 0;
                winCtr1++;
            }

            if (winCtr0 >= win_len)
                win0 = 1;
            if (winCtr1 >= win_len)
                win1 = 1;
        }
    }

    //käydään läpi sarakkeittain
    for (j = 0; j <= 9; j++)
    {
        winCtr0 = 0;
        winCtr1 = 0;

        for (i = 0; i <= 9; i++)
        {
            if (board[i][j] == 0)
            {
                winCtr0 = 0;
                winCtr1 = 0;
                //continue;
            }
            if (board[i][j] == 1)
            {
                winCtr0++;
                winCtr1 = 0;
            }
            if (board[i][j] == 2)
            {
                winCtr0 = 0;
                winCtr1++;
            }

            if (winCtr0 >= win_len)
                win0 = 1;
            if (winCtr1 >= win_len)
                win1 = 1;
        }

    }

    //käydään läpi vinorivit yläpuolikkaalta
    for (k = 0; k <= 9; k++)
    {
        winCtr0 = 0;
        winCtr1 = 0;

        for (i = k, j = 0; i >= 0 && j <= k; i--, j++)
        {
            if (board[i][j] == 0)
            {
                winCtr0 = 0;
                winCtr1 = 0;
                //continue;
            }
            if (board[i][j] == 1)
            {
                winCtr0++;
                winCtr1 = 0;
            }
            if (board[i][j] == 2)
            {
                winCtr0 = 0;
                winCtr1++;
            }

            if (winCtr0 >= win_len)
                win0 = 1;
            if (winCtr1 >= win_len)
                win1 = 1;
        }

    }

    //käydään läpi vinorivit alapuolikkaalta
    for (k = 9; k >= 0; k--)
    {
        winCtr0 = 0;
        winCtr1 = 0;

        for (i = k, j = 9; i >= 0 && j >= k; i++, j--)
        {
            if (board[i][j] == 0)
            {
                winCtr0 = 0;
                winCtr1 = 0;
                //continue;
            }
            if (board[i][j] == 1)
            {
                winCtr0++;
                winCtr1 = 0;
            }
            if (board[i][j] == 2)
            {
                winCtr0 = 0;
                winCtr1++;
            }

            if (winCtr0 >= win_len)
                win0 = 1;
            if (winCtr1 >= win_len)
                win1 = 1;
        }

    }

    //käydään läpi vinorivit yläpuolikkaalta
    for (k = 0; k <= 9; k++)
    {
        winCtr0 = 0;
        winCtr1 = 0;

        for (i = k, j = 9; i >= 0 && j >= (9- k); i--, j--)
        {
            if (board[i][j] == 0)
            {
                winCtr0 = 0;
                winCtr1 = 0;
                //continue;
            }
            if (board[i][j] == 1)
            {
                winCtr0++;
                winCtr1 = 0;
            }
            if (board[i][j] == 2)
            {
                winCtr0 = 0;
                winCtr1++;
            }

            if (winCtr0 >= win_len)
                win0 = 1;
            if (winCtr1 >= win_len)
                win1 = 1;
        }

    }

    /* tämä blokki ei toimi
    //käydään läpi vinorivit alapuolikkaalta
    for (k = 9; k >= 0; k--)
    {
        winCtr0 = 0;
        winCtr1 = 0;

        for (i = 9, j = k; i >= 0 && j >= k; i--, j--)
        {
            if (board[i][j] == 0)
            {
                winCtr0 = 0;
                winCtr1 = 0;
                //continue;
            }
            if (board[i][j] == 1)
            {
                winCtr0++;
                winCtr1 = 0;
            }
            if (board[i][j] == 2)
            {
                winCtr0 = 0;
                winCtr1++;
            }

            if (winCtr0 >= win_len)
                win0 = 1;
            if (winCtr1 >= win_len)
                win1 = 1;
        }

    }
    */

    if (win0 == 1 && win1 == 0)
        return 1;
    if (win0 == 0 && win1 == 1)
        return 2;
    if (win0 == win1)
        return 0;

    return 0;
}