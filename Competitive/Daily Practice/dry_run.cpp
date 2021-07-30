#include <bits/stdc++.h>

using namespace std;

unordered_set <int> uset;

bool global_ans = true;

bool isSafe(int loc)
{
    return(loc >= 0);
}

bool dp(int x,int y, int loc, int mymax, bool isVisited[])
{
    // cout<<"SET : ";
    // for(auto x:uset)
    //     cout<<x<<" ";
    // cout<<endl;
    if(global_ans == false)
        return false;
    bool ans = true;
    if(isVisited[loc] == true)
        return true;
    else
        isVisited[loc] = true;
    cout<<loc<<endl;
    if(uset.find(loc) != uset.end())
    {
        cout<<"GLOBAL SET"<<endl;
        global_ans = false;
        return false;
    }
    if(loc > mymax)
        return true;
    if(isSafe(loc+x))
        if(!dp(x,y,loc+x,mymax,isVisited))
            global_ans = false;
    if(isSafe(loc-x))
        if(!dp(x,y,loc-x,mymax,isVisited))
            global_ans = false;
    if(isSafe(loc+y))
        if(!dp(x,y,loc+y,mymax,isVisited))
            global_ans = false;
    if(isSafe(loc-y))
        if(!dp(x,y,loc-y,mymax,isVisited))
            global_ans = false;
        
    return global_ans;
}

int main()
{
    int tc;
    cin>>tc;
    cout<<tc<<endl;
    while(tc--)
    {
        // cout<<"DOING"<<endl;
        // unordered_set <int> uset;
        int x = 0;
        int count = 0;
        int mymax = 0;
        while(x != -1)
        {
            cin>>x;
            uset.insert(x);
            count++;
            mymax = max(mymax,x);
        }
        bool * isVisited = new bool[count];
        for(auto x : uset)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        int a,b;
        cin>>a>>b;
        
        bool ans = dp(a,b,0,mymax,isVisited);
        if(ans == true)
            cout<<"Alive"<<endl;
        else
            cout<<"Dead"<<endl;
        
        // delete isVisited;
        delete [] isVisited;
        uset.clear();
    }
    return 0;
}