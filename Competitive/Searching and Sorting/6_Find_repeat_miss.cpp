#include<iostream>
#include<unordered_set>
using namespace std;
    
int main(){
    unordered_set <int> set;
    int sum = 0;
    int max = 0;
    int rep = 0;
    int arr[] = {1,2,5,6,7,7,4,8,9};
    int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        if(set.find(arr[i])==set.end())
        {
            set.insert(arr[i]);
        }
        else
        {
            rep = arr[i];
            cout<<"Repeating number is "<<arr[i]<<endl;
        }
        if(arr[i]>max)
            max=arr[i];
        sum = sum+arr[i];
    }
    if(sum>max*(max+1)/2)
    {
        sum = sum-(max*(max+1)/2);
        cout<<"Missing number is "<<rep-sum;
    }
    else
    {
        sum = (max*(max+1)/2)-sum;
        cout<<"Missing number is "<<rep+sum;
    }
    return 0;
}