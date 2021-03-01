#include<iostream>
using namespace std;
    
int main(){
    int len = 4;
    int matrix[len][len] = 
    {{1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15,16}};
    int top = 0;
    int bottom = len-1;
    int left = 0;
    int right = len-1;
    int dir = 0;
    while(top<=bottom && left<=right)
    {
        if(dir==0)
        {
            for (int i = left; i <= right; i++)
            {
                cout<<matrix[top][i]<<" ";
            }
            top++;
            dir++;
        }
        else if(dir==1)
        {
            for (int i = top; i <= bottom; i++)
            {
                cout<<matrix[i][right]<<" ";
            }
            right--;
            dir++;
        }
        else if(dir==2)
        {
            for (int i = right; i >= left; i--)
            {
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
            dir++;
        }
        else
        {
            for (int i = bottom; i >= top; i--)
            {
                cout<<matrix[i][left]<<" ";
            }
            left++;
            dir=0;
        }
    }
    return 0;
}