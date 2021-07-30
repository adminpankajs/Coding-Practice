#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> vec)
{
    int sum = 0;
    for(auto x : vec)
    {
        sum += x;
    }
    int check = (vec.size()*(vec.size()+1))/2;
    if(sum != check)
        cout<<check-sum<<endl;
    else
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