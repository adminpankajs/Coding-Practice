#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {6,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    int area = 0;
    while(start < end)
    {
        area = max(area, min(arr[start],arr[end])*(end-start));
        if(arr[start] < arr[end])
            start++;
        else
            end--;
    }
    cout<<area<<endl;
    return 0;
}