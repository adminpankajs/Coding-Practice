#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] =  {-2, 5, 100, 25, 20, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    int start =0;
    int end = n-1;
    int mid = (start+end)/2;
    while(arr[mid] < arr[mid-1] || arr[mid] < arr[mid+1])
    {
        if(arr[mid] > arr[mid-1])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    int peak = mid;
    start = 0;
    end = peak;
    mid = (start+end)/2;
    while(arr[mid] != k && start < end)
    {
        if(arr[mid] > k)
            end = mid-1;
        else
            start = mid+1;
        mid = (start+end)/2;
    }
    if(arr[mid] == k)
    {
        cout<<mid;
        return 0;
    }
    else
        cout<<"Not found "<<endl;
    start = peak;
    end = n-1;
    mid = (start+end)/2;
    while(arr[mid] != k && start < end)
    {
        if(arr[mid] > k)
            start = mid+1;
        else
            end = mid-1;
        mid = (start+end)/2;
    }
    if(arr[mid] == k)
    {
        cout<<mid;
        return 0;
    }
    else
        cout<<"Not found "<<endl;
    return 0;
}