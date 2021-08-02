#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 5, 5, 5 ,28, 37, 42}, target = 37;
    int n = sizeof(arr)/sizeof(arr[0]);
    int * lbound = lower_bound(arr, arr+n,target);
    int * ubound = upper_bound(arr, arr+n,target);
    if(lbound != ubound)
    {
        int x = lbound - arr;
        int y = ubound - arr - 1;
        cout<<x<<", "<<y<<endl;
    }
    else
    {
        cout<<"Range not exist"<<endl;
    }
    return 0;
}