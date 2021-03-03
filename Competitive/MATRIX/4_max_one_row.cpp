#include<iostream>
using namespace std;
    
int main(){
    int len  = 4;
    int pos = len-1;
    int max;
    int arr[len][len] =
    {{0, 0, 0, 1},
    {0, 0, 1, 1},
    {1, 1, 1, 1},
    {0, 1, 1, 1}};
    for (int i = 0; i < len; i++)
    {
        for (int j = pos; j >= 0; j--)
        {
            if(arr[i][j]==0)
            {
                pos=j;
                cout<<pos<<endl;
                break;
            }
            if(j==0 && arr[i][j]==1)
            {
                pos=-1;
                break;
            }
        }
    }
    cout<<"MAX 1's : "<<(len-pos-1);
    return 0;
}