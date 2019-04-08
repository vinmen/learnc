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

void solve(int data[9][9])
{
    int *filled_cells;  
    int nums[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (data[i][j] == 0)
            {                
                for (int x = 0; x < 9; x++)
                {
                    int row_col_match = 0;                    
                    int sub_match = 0;

                    for (int a = 0; a < 9; a++)
                    {
                        if (data[i][a] == nums[x] || data[a][j] == nums[x])
                        {
                            row_col_match = 1;
                            break;
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

                    for(int l = x1; l <= x2; l++)
                    {
                        for(int k = y1; k <= y2; k++)
                        {
                            if(data[l][k] == nums[x])
                            {
                                sub_match = 1;
                                break;
                            }                            
                        }
                    }

                    if (!row_col_match && !sub_match)
                    {
                        data[i][j] = nums[x];                           
                        filled_cells = (int *)malloc(sizeof(int) * 2);   
                        int len = (int) sizeof(filled_cells) / sizeof(int);
                        filled_cells[len - 2] = i;
                        filled_cells[len - 1] = j;
                        break;
                    }                        
                }
                if(data[i][j] == 0)
                {
                    int len = (int) sizeof(filled_cells) / sizeof(int);
                    for(int index = len - 1; index >= 0; index--)
                    {
                        int i1 = filled_cells[index - 2];
                        int j1 = filled_cells[index - 1];

                        if(data[i1][j1] == 9)
                        {
                            data[i1][j1] = 0;                             
                        }                           
                        else
                        {
                            data[i1][j1] = data[i1][j1] + 1;
                            i = i1;
                            j = j1;
                        }              
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

    solve(input);    
    return 0;
}
