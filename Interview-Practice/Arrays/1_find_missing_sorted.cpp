#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> vec)
{
    int prev = vec[0]-1;
    for(auto x : vec)
    {
        if(prev+1 != x)
        {
            cout<<prev+1<<endl;
            return;
        }
        else
            prev = x;
        
    }
    cout<<"Not found missing"<<endl;
    return;
}

int main()
{
    int size;
    cin>>size;
    vector <int> vec(size);
    for(auto &x : vec)
    {
        cin>>x;
    }
    solve(vec);
    return 0;
}