#include <stdio.h>

int count = 0;

void print_puzzle(int data[9][9])
{
    printf("-------------------------------\n");
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j == 0)
                printf("|");

            printf(" %d ", data[i][j]);

            if (((j + 1) % 3) == 0)
                printf("|");
        }
        printf("\n");

        if (((i + 1) % 3) == 0)
            printf("-------------------------------\n");
    }
}

int check_number_exists(int data[9][9], int row, int col, int number)
{
    // check number exists in row and column
    for (int i = 0; i < 9; i++)    
        if (data[row][i] == number || data[i][col] == number)        
            return 1;      
    
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;

    if (row <= 2)
    {
        x1 = 0;
        x2 = 2;
    }
    else if (row <= 5)
    {
        x1 = 3;
        x2 = 5;
    }
    else
    {
        x1 = 6;
        x2 = 8;
    }

    if (col <= 2)
    {
        y1 = 0;
        y2 = 2;
    }
    else if (col <= 5)
    {
        y1 = 3;
        y2 = 5;
    }
    else
    {
        y1 = 6;
        y2 = 8;
    }

    // check number exists in sub grid
    for (int l = x1; l <= x2; l++)    
        for (int k = y1; k <= y2; k++)        
            if (data[l][k] == number)            
                return 1;      

    return 0;
}

int get_empty_cell(int data[9][9], int* row, int* col)
{
    for (int i = 0; i < 9; i++)    
        for (int j = 0; j < 9; j++)        
            if (data[i][j] == 0)
            {
                *row = i;
                *col = j;
                return 0;
            }        
    
    //print puzzle if no empty cells present
    printf("Solution :\n");
    print_puzzle(data);  
    return 1;
}

int solve_puzzle(int data[9][9])
{
    int row;
    int col;       

    if (get_empty_cell(data, &row, &col))
        return 1;

    for (int x = 1; x <= 9; x++)
    {
        if (!check_number_exists(data, row, col, x))
        {
            data[row][col] = x;

            // solve the rest of the empty cells
            if (solve_puzzle(data))
                return 1;

            // set cell as 0 if previous cell not filled
            data[row][col] = 0;             
        }        
    }    
    return 0;
}

int main()
{
    int input[9][9] = {
        {7, 4, 1, 3, 0, 0, 0, 6, 0},
        {0, 2, 0, 1, 0, 9, 0, 0, 5},
        {3, 5, 9, 0, 0, 0, 0, 1, 0},
        {1, 0, 0, 0, 3, 0, 6, 0, 0},
        {0, 0, 0, 5, 0, 7, 0, 0, 0},
        {0, 0, 5, 0, 2, 0, 0, 0, 3},
        {0, 9, 0, 0, 0, 0, 2, 8, 6},
        {2, 0, 0, 8, 0, 3, 0, 9, 0},
        {0, 6, 0, 0, 0, 2, 3, 4, 1}};

    printf("Puzzle :\n");
    print_puzzle(input);
    solve_puzzle(input);    
    return 0;
}
