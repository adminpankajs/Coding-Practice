#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue <vector<int>, vector<vector<int>>,greater<vector<int>>> q;
    int mat[3][3] =
    {
       {1, 4, 5},   
       {2, 6, 9},  
       {3, 6, 10} 
    };
    for(int i=0 ;i < 3;i++)
    {
        vector<int> tmp;
        tmp.push_back(mat[0][i]);
        tmp.push_back(0);
        tmp.push_back(i);
        q.push(tmp);
    }
    int ans = mat[0][0];
    int count = 0;
    while(count != 9/2)
    {
        auto x = q.top();
        q.pop();
        vector<int> tmp;
        if(x[1]+1 < 3)
        {
            tmp.push_back(mat[x[1]+1][x[2]]);
            tmp.push_back(x[1]+1);
            tmp.push_back(x[2]);
            q.push(tmp);
        }
        count++;
    }
    auto myans = q.top();
    cout<<myans[0]<<endl;
    return 0;
}