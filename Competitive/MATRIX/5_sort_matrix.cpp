#include<iostream>
using namespace std;
    
int main(){
    int len = 4;
    int count = 0;
    int tempr=0, tempc=0;
    int arr[len][len] = 
    {{10,20,30,40},
    {15,25,35,45}, 
    {27,29,37,48}, 
    {32,33,39,50}};
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            tempr = i;
            tempc=0;
            while(arr[i][j]>arr[tempr+1][0])
                tempr++;
            while(arr[i][j]>arr[tempr][tempc])
                tempc++;
            tempc -= 1;
            if(tempc==-1)
                tempc += 1;
            // cout<<"("<<i<<","<<j<<")"<<" : ";
            // cout<<tempr<<" "<<tempc<<endl;
            if(i==tempr && j==tempc)
            {
                cout<<"SUM A : "<<arr[i][j];
                cout<<"Value B : "<<arr[i][j];
                cout<<"Value A : "<<arr[i][j];
                cout<<endl;
            }
            else
            {
                arr[i][j] = arr[i][j] + arr[tempr][tempc];
                cout<<"SUM A : "<<arr[i][j];
                arr[tempr][tempc] = arr[i][j] - arr[tempr][tempc];
                cout<<"Value B : "<<arr[tempr][tempc];
                arr[i][j] = arr[i][j] - arr[tempr][tempc];
                cout<<"Value A : "<<arr[i][j];
                cout<<endl;
            }
        }
        
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            // cout<<arr[i][j]<<" ";
        }
        // cout<<endl;
        
    }
    
    return 0;
}