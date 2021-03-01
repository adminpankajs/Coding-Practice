#include<iostream>
#include<algorithm>
using namespace std;
    
int main(){
    int arr[6] = {1,2,3,-4,-1,4};
    sort(arr,arr+6);
    int i=0,j=5;
    while(i!=j)
    {
        cout<<arr[i]<<","<<arr[j]<<",";
        i++;
        j--;
        if(j<=i)
        {
            i=j;
        }
    }
    
    
    return 0;
}