#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int arr[] = {2,5,8,9,12,6,1,7};
    int count = 8;
    unordered_set<int> s;
    for (int i = 0; i < count; i++)
    {
        if(s.find(arr[i])!=s.end())
        {
            cout<<"True => ";
            cout<<"Repedated value :"<<arr[i];
            return 0;
        }
        s.insert(arr[i]);
    }
    cout<<"False => ";
    cout<<"No repeated value";
    return 0;
    
}