#include<iostream>
using namespace std;
    
int main(){
    int arr[6] = {7,1,5,3,6,4};
    int buy = arr[0];
    int sell=arr[0],buypos=0;
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]<buy)
        {
            buy=arr[i];
            buypos = i;
            sell = buy;
        }           
        if(i>buypos and sell<arr[i])
        {
            sell = arr[i];
            cout<<sell<<endl;
        }
    }
    cout<<"PROFIT : "<<(sell-buy);
    
    return 0;
}