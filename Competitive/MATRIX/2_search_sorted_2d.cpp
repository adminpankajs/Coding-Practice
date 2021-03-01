#include<iostream>
#include<stdlib.h>
using namespace std;
    
int main(){
    int len = 4;
    int num = 17;
    int temp;
    int matrix[len][len] = {{1,3,5,7},
    {10,11,16,20},
    {23,30,34,60}};
    for (int i = 0; i < 3; i++)
    {
        if(matrix[i][0]>num)
        {
            for (int j = 0; j < len; j++)
            {
                if(matrix[i-1][j]==num)
                {
                    cout<<"Found !!";
                    exit(0);
                }
            }
            
        }
        if(matrix[i][0]==num)
        {
            cout<<"Found !!";
            exit(0);
        }
    }
    cout<<"Not Found !!";
    return 0;
}