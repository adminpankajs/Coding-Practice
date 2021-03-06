#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,8,9,1,2,3,4,5,6};
    int num = 5;
    int n = sizeof(arr)/sizeof(int);
    int low = 0, high = n-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        cout<<"Mid : "<<mid<<endl;
        if(num>arr[mid] && num>arr[high])
        {
            high = mid-1;
            cout<<"HIGH : "<<high<<endl;
        }
        else if(num>arr[mid] && num<arr[high])
        {
            low = mid+1;
            cout<<"LOW : "<<high<<endl;
        }
        else if(num<arr[mid])
        {
            high = mid-1;
            cout<<"HIGH : "<<high<<endl;
        }
        else
        {
            cout<<"NUMBER FOUND AT : "<<mid;
            break;
        }
    }
    return 0;
}