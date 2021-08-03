#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4][2] = {{1, 4}, {5, 8}, {8, 10}, {12, 15}};
    vector<vector<int>> vec;
    int count = 0;
    vector <int> tmp;
    tmp.push_back(arr[0][0]);
    tmp.push_back(arr[0][1]);
    vec.push_back(tmp);
    count++;
    for(int i=1;i<4;i++)
    {
        vector<int> tmp;
        if(arr[i][0] <= vec[count-1][1])
            vec[count-1][1] = max(vec[count-1][1],arr[i][1]);
        else
        {
            tmp.push_back(arr[i][0]);
            tmp.push_back(arr[i][1]);
            vec.push_back(tmp);
            count++;
        }
    }
    for(auto x : vec)
    {
        for(auto y : x)
            cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}