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
    
    vector<vector<int>> newmat;
    
    for(int i=0;i<row;i++)
    {
        vector<int>tmp;
        for(int j=0;j<col;j++)
        {
            tmp.push_back(mat[j][i]);
        }
        newmat.push_back(tmp);
    }
    cout<<endl;
    for(auto x : newmat)
    {
        for(auto y: x)
            cout<<y<<" ";
        cout<<endl;
    }
    
    for(int j=0;j<col/2;j++)
    {
        for(int i=0;i<row;i++)
            swap(newmat[i][j],newmat[i][col-1-j]);
    }
    
    cout<<endl;
    for(auto x : newmat)
    {
        for(auto y: x)
            cout<<y<<" ";
        cout<<endl;
    }
    
    
    return 0;
}