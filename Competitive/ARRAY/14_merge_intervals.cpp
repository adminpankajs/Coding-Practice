#include<iostream>
#include<map>
using namespace std;
    
int main(){
    int flag=0,stop=0;
    map <int,int> m{{1,3},{2,6},{8,10},{15,18}};
    map <int,int>:: iterator it = m.begin();
    while (it!=m.end())
    {
        if(flag==0)
        {
            cout<<"["<<it->first;
            flag=1;
        }
        else if (it++->second >= it->first)
        {
            --it;
        }
        else
        {
            it--;
            cout<<","<<it->second<<"] ";
            it++;
            cout<<"["<<it->first;
            if(it==--m.end())
            {
                cout<<","<<it->second<<"]";
            }
            it--;
        }
        it++;
    }
    return 0;
}