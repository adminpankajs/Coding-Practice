#include <bits/stdc++.h>

using namespace std;


int main()
{
    bool row_check = false;
    bool col_check = false;
    vector<vector<int>> mat;
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++)
    {
        vector <int> tmp;
        for(int j=0;j<col;j++)
        {
            int x;
            cin>>x;
            tmp.push_back(x);    
        }
        mat.push_back(tmp);
    }
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(mat[i][j] == 0)
            {
                if(i==0)
                    row_check = true;
                if(j==0)
                    col_check = true;
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }
    cout<<endl;
    for(auto x : mat)
    {
        for(auto y : x)
            cout<<y<<" ";
        cout<<endl;
    }
    for(int i=1; i<row;i++)
    {
        if(mat[i][0] != 0)
            continue;
        else
        {
            for(int j=0;j<col;j++)
                mat[i][j] = 0;
        }
    }
    for(int j=1; j<col;j++)
    {
        if(mat[0][j] != 0)
            continue;
        else
        {
            for(int i=0;i<row;i++)
                mat[i][j] = 0;
        }
    }
    
    if(row_check == true)
    {
        for(int j=0;j<col;j++)
            mat[0][j] = 0;
    }
    
    if(col_check == true)
    {
        for(int j=0;j<row;j++)
            mat[j][0] = 0;
    }
    
    cout<<endl;
    for(auto x : mat)
    {
        for(auto y : x)
            cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}