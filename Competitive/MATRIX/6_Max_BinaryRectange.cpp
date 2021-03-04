#include<iostream>
using namespace std;
    
int main(){
    int max=0;
    int pos[2];
    int arr[6][5] = 
    {
        {0,1,1,0,1},
        {1,1,0,1,0},
        {0,1,1,1,0},
        {1,1,1,1,0},
        {1,1,1,1,1},
        {0,0,0,0,0}
    };
    int aux[6][5];
    for (int i = 0; i < 6; i++)
    {
        aux[i][0] = arr[i][0];
    }
    for (int j = 0; j < 5; j++)
    {
        aux[0][j] = arr[0][j];
    }
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (arr[i][j]==1)
            {
                aux[i][j] = min(aux[i][j-1], min(aux[i-1][j], aux[i-1][j-1]))+1;
                if(aux[i][j]>max)
                {
                    max=aux[i][j];
                    pos[0]=i;
                    pos[1]=j;
                }  
            }
            else
                aux[i][j] = 0;   
        }
    }
    cout<<"MAX : "<<max<<endl<<"(Row, Column) : "<<pos[0]<<" "<<pos[1];
    return 0;
}