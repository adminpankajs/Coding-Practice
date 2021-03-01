#include<iostream>
#include<algorithm>
using namespace std;
    
int main(){
    int len = 3;
    int count = 0;
    int arr[len][len] = 
    {
        {1,3,5},
        {2,6,9},
        {3,6,9}
    };
    int single_arr[len*len];
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            single_arr[count++] = arr[i][j]; 
        }
        
    }
    sort(single_arr,single_arr+(len*len));
    cout<<single_arr[(len*len)/2];
    
    return 0;
}