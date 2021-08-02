#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] =  {3, 4, 5, 6, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end  = n-1;
    int mid = (start+end)/2;
    while(arr[mid] < arr[mid-1] || arr[mid] < arr[mid+1])
    {
        if(arr[mid] > arr[0])
            start = mid+1;
        else
            end = mid-1;
        mid = (start+end)/2;
    }
    if(mid == n-1)
        cout<<arr[0]<<endl;
    else
        cout<<arr[mid+1]<<endl;
    return 0;
}