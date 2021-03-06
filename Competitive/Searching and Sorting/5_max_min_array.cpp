#include<iostream>
using namespace std;
    
int main(){
    int  a=170,b=200,c=150;
    if(a>b)
    {
        if(c>a)
        {
            cout<<"a is middle";
        }
        else
        {
            cout<<"c is middle";
        }
    }
    else
    {
        if(c>b)
        {
            cout<<"b is middle";
        }
        else
        {
            cout<<"b is middle";
        }
    }
    return 0;
}