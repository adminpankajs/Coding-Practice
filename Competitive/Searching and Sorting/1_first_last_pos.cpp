#include<iostream>
using namespace std;
    

int first(int arr[],int x ,int n)
{
    int low = 0, high = n-1, res = -1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid] > x)
            high = mid - 1;
        else if(arr[mid] < x)
            low = mid + 1;
        else
        {
            res = mid;
            high = mid-1;
        }
    }
    return res;
}
int last(int arr[],int x ,int n)
{
    int low = 0, high = n-1, res = -1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid] > x)
            high = mid - 1;
        else if(arr[mid] < x)
            low = mid + 1;
        else
        {
            res = mid;
            low = mid+1;
        }
    }
    return res;
}    
int main(){

    int array[] = {1,2,3,3,3,5,6,7,8,9};
    int n = sizeof(array)/sizeof(int);
    cout<<"First : "<<first(array,3,n)+1;
    cout<<"Last : "<<last(array,3,n)+1;
    return 0;
}