#include<iostream>
#include<unordered_map>
using namespace std;
    
int main(){
    unordered_map <int,int> map;
    int arr[] = {1,2,5,3,5,5,4,5,5,6,5};
    int n = sizeof(arr)/sizeof(int)
    for (int i = 0; i < n; i++)
    {
        if(map.find(arr[i])!=map.end())
        {
            
        }
    }
    
    return 0;
}