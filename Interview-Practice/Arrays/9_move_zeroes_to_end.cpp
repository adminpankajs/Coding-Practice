#include <bits/stdc++.h>

using namespace std;


int main()
{
    int arr1[] = {1, 8, 0, 2, 0, 1, 13, 0};
    int arr[] = {0, 0, 0, 23, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = 0;
    while(end != n)
    {
        while(arr[start] != 0)
            start++;
        end = start+1;
        while(arr[end] == 0 && end<n)
            end++;
        if(end >= n)
            break;
        swap(arr[start],arr[end]);
    }
    for(auto x : arr)
        cout<<x<<" ";
    return 0;
}