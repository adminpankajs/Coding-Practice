#include<bits/stdc++.h>

using namespace std;

unordered_set <int>  uset;

void solve(vector<int> vec)
{
    for(auto x :vec)
    {
        if(uset.find(x) == uset.end())
            uset.insert(x);
        else
        {
            cout<<x<<endl;
            return;
        }
    }
    cout<<"No Duplicate"<<endl;
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