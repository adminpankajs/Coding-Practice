#include<iostream>
using namespace std;
    
int main(){
    int denom[] = {1,2,5,10,20,50,100,500,1000};
    int n = sizeof(denom)/sizeof(denom[0]);
    int num = 121;
    int coins = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if(num!=0)
        {
            coins += (num/denom[i]);
            num = num%denom[i];
            if(i==0){
                cout<<"COINS : "<<coins<<endl;
                break;
            }
        }
        else
        {
            cout<<"COINS : "<<coins<<endl;
            break;
        }
    }    
    return 0;
}