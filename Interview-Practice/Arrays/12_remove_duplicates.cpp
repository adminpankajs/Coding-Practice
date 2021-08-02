#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {0,0, 1, 1, 2, 9, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    int prev = arr[0];
    arr[count++] = prev;
    for(int i=1;i<n;i++)
    {
        if(prev != arr[i])
        {
            arr[count++] = arr[i];
            prev = arr[i];
        }
    }
    for(int i =0;i<count;i++)
        cout<<arr[i]<<" ";
    return 0;
}