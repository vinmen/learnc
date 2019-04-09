#include <stdio.h>
#include <stdlib.h>

void printpuzzle(int data[9][9])
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

int check_exist(int data[9][9], int i, int j, int number)
{
    for (int a = 0; a < 9; a++)
    {
        if (data[i][a] == number || data[a][j] == number)
        {            
            return 1;
        }
    }

    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;

    if (i <= 2)
    {
        x1 = 0;
        x2 = 2;
    }
    else if (i <= 5)
    {
        x1 = 3;
        x2 = 5;
    }
    else
    {
        x1 = 6;
        x2 = 8;
    }

    if (j <= 2)
    {
        y1 = 0;
        y2 = 2;
    }
    else if (j <= 5)
    {
        y1 = 3;
        y2 = 5;
    }
    else if (j <= 8)
    {
        y1 = 6;
        y2 = 8;
    }

    for (int l = x1; l <= x2; l++)
    {
        for (int k = y1; k <= y2; k++)
        {
            if (data[l][k] == number)
            {
                return 1;
            }
        }
    }
}

int get_last_saved_cell(int cell[81][2])
{    
    for(int i = 0; i < 81; i++) 
    {
        if(cell[i][0] == 0 && cell[i][1] == 0)
        {
            if(i == 0)            
                return 0;                            
            else            
                return i - 1;     
        }    
    }   
}

void solve(int data[9][9], int cells[81][2])
{    
    int nums[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};    
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (data[i][j] == 0)
            {                              
                for (int x = 0; x < 9; x++)
                {
                    if(!check_exist(data, i, j, nums[x]))
                    {
                        data[i][j] = nums[x];    
                        int last_cell = get_last_saved_cell(cells);
                        cells[last_cell][0] = i;   
                        cells[last_cell][1] = j;         
                        break;
                    }
                }
                if (data[i][j] == 0)
                {
                    int last_cell = get_last_saved_cell(cells);
                    int cell_i = cells[last_cell][0];
                    int cell_j = cells[last_cell][1];
                    if (data[cell_i][cell_j] == 9)
                    {
                        data[cell_i][cell_j] = 0;
                        cells[last_cell][0] = 0;
                        cells[last_cell][1] = 0;
                    }
                    else
                    {
                        data[cell_i][cell_j] = data[cell_i][cell_j] + 1;                        
                    }                    
                }
            }            
        }
    }     
    printpuzzle(data); 
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

    int cells[81][2] = {{0,0}};
    solve(input, cells);   
    return 0;
}
