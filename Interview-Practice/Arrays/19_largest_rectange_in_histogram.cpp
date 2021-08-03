#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map <int,int> umap;
    int area = 0;
    int mymax = 0;
    int arr[] = {2, 4, 8, 10, 8, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(umap.find(arr[i]) == umap.end())
        {
            umap[arr[i]] = i;
            mymax = max(mymax,arr[i]);
        }
        else
        {
            area = max(area,arr[i] * (i-umap[arr[i]]+1));
            mymax = max(mymax,arr[i]);
        }
        area = max(mymax,area);
    }
    cout<<area<<endl;
    return 0;
}