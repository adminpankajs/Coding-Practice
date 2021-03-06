#include<iostream>
using namespace std;
    
int main(){
    int arr[] = {1,23,4,5,5,6,8,9};
    int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        if((i+1)==arr[i])
            cout<<"Arr["<<i+1<<"] = "<<arr[i]<<" exists."<<endl;
    }
    
    return 0;
}