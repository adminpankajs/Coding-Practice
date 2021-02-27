#include<iostream>
using namespace std;
    
int main(){
    int len = 5;
    int max,err=0;
    int arr[len] = {2,4,1,3,5};
    max = arr[0];
    for (int i = 0; i < len; i++)
    {
        cout<<endl<<max<<" "<<arr[i];
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < max)
            err++;
        cout<<endl<<"Inversion : "<<err; 
    }
    cout<<"Inversions : "<<err;
    
    return 0;
}