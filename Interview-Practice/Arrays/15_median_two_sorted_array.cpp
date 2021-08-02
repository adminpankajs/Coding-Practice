#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr1[] = {1, 3, 5, 11, 17};
    int arr2[] = {9, 10, 11, 13, 14};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int s = sizeof(arr2)/sizeof(arr2[0]);
    int start = 0;
    float ans = 0.0;
    bool flag = false;
    int reqd;
    reqd = (n+s)/2;
    int end = reqd-1;
    int mid = (start+end)/2;
    while(flag==false)
    {
        if(arr1[mid] <= arr2[reqd-mid] && arr2[reqd-mid-1] <= arr1[mid+1])
        {
            cout<<"RUN"<<endl;
            if((n+s)%2==0)
            {
                ans = (float)(max(arr1[mid],arr2[reqd-mid-2])+min(arr2[reqd-mid-1],arr1[mid+1]))/2;
                
            }
            else
            {
                ans = min(arr2[reqd-mid-1],arr1[mid+1]);
            }
            flag = true;
        }
        else
        {
            if(arr1[mid] > arr2[reqd-mid])
                end = mid-1;
            else
                start = mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}