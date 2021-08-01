#include <bits/stdc++.h>

using namespace std;


int main()
{
    int row, col;
    cin>>row>>col;
    vector<vector<int>> mat;
    for(int i=0;i<row;i++)
    {
        vector<int> tmp;
        for(int j=0;j<row;j++)
        {
            int x; 
            cin>>x; 
            tmp.push_back(x);
        }
        mat.push_back(tmp);
    }
    for(auto x : mat)
    {
        for(auto y: x)
            cout<<y<<" ";
        cout<<endl;
    }
    int l = 0;
    int r = col;
    int u = 0;
    int d = row;
    int opt = 0;
    while(l<r && u<d)
    {
        switch(opt)
        {
            case(0):
                {
                    for(int j=l;j<r;j++)
                        cout<<mat[u][j]<<" ";
                    u++;
                    opt = 1;
                    break;
                }
            case(1):
                {
                    for(int j=u;j<d;j++)
                        cout<<mat[j][r-1]<<" ";
                    r--;
                    opt = 2;
                    break;
                }
            case(2):
                {
                    for(int j=r-1;j>=l;j--)
                        cout<<mat[d-1][j]<<" ";
                    d--;
                    opt = 3;
                    break;
                }
            case(3):
                {
                    for(int i=d-1;i>=u;i--)
                        cout<<mat[i][l]<<" ";
                    l++;
                    opt = 0;
                    break;
                }
        }
    }
    
    return 0;
}