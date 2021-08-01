#include <bits/stdc++.h>

using namespace std;


int main()
{
    int size;
    cin>>size;
    vector <int> vec;
    while(size--)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        if(i+1 != vec.size())
        {
            swap(vec[i+1],vec[i]);
            i++;
        }
        else
        {
            i++;
        }
    }
    for(auto x : vec)
        cout<<x<<" ";
    return 0;
}