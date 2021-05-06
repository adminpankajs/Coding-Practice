#include<iostream>

using namespace std;

int main()
{
    int mat[3][10] =
    {
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
    };
    int i=0;
    int j=0;
    int maxroute = 0;
    int routework = 0;
    bool route(int mat[3][10]; int i; int j)
    {
        if(i==2 && j==9)
        {
            routework++;
            return true;
        }
        for (int k = 0; k < 4; k++)
        {
            if(k==0)
            {
                if(mat[i-1][j]==1 && i!=0)
                {
                    mat[i-1][j] = 2;
                    if(!route(mat,i--,j))
                    {
                        mat[i-1][j] = 1;
                    }
                }
            }
            if(k==1)
            {
                if(mat[i+1][j]==1 && i!=2)
                {
                    mat[i+1][j] = 2;
                    if(!route(mat,i++,j))
                    {
                        mat[i+1][j]
                    }
                }
            }
            if(k==2)
            {
                if(mat[i][j+1]==1 && j!=9)
                {
                    mat[i][j+1] = 2;
                    route(mat,i,j++)
                }
            }
            if(k==3)
            {
                if(mat[i][j-1]==1 && j!=0)
                {
                    mat[i][j-1] = 2;
                    route(mat,i,j--)
                }
            }
        }
        if(i==0 && j==0)
        {
            cout<<"Max Route"<<maxroute<<endl;
            break;
        }
        return false;
    }
    return 0;
}