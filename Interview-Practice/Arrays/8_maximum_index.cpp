#include <bits/stdc++.h>

using namespace std;


int main()
{
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res=0,i=0;
        while(res<n-i-1)
        {
            for(int j=i+res;j<n;j++)
            {
                if(arr[i]<=arr[j])
                    res = j-i;
            }
            i++;
        }
    cout<<res<<endl;
    return 0;
}