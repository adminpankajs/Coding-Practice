#include<iostream>
#include<set>
using namespace std;

int main()
{
    grid[9][9] = 
    {{3 0 6 5 0 8 4 0 0},
     {5 2 0 0 0 0 0 0 0},
     {0 8 7 0 0 0 0 3 1 },
     {0 0 3 0 1 0 0 8 0},
     {9 0 0 8 6 3 0 0 5},
     {0 5 0 0 9 0 6 0 0},
     {1 3 0 0 0 0 2 5 0},
     {0 0 0 0 0 0 0 7 4},
     {0 0 5 2 0 6 3 0 0}}
    
    bool check(int grid[9][9],int num, int row, int col)
    {
        for (int i = 0; i < 8; i++)
        {
            if(grid[row][i]==num)
                return false;
        }
        for (int i = 0; i < 8; i++)
        {
            if(grid[i][col]==num)
                return false;
        }

        int startrow = 
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                /* code */
            }
            
        }
        
        
        
    }
    
    return 0;
}