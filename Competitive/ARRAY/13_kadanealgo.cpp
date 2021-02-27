#include<iostream>
using namespace std;
    
int main(){
    int len;
    int flag = 0;
    int sum = 0;
    int max = 0;
    cout<<"Enter the size of the array :";
    cin>>len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < len; i++)
    {
        if(flag == 1)
        {
            if((sum+arr[i])>=arr[i])
            {
                sum = sum+arr[i];
            }
            else
            {
                sum = 0;
                sum = sum+arr[i];
            }
            cout<<"SUM : "<<sum<<endl;
            if(max<sum)
            {
                max = sum;
                cout<<"MAX : "<<max<<endl;
            }
        }
        else
        {
            sum = arr[i];
            flag = 1;
        }
    }
    cout<<"Max substring sum : "<<max;
    return 0;
}