#include<iostream>
#include<string.h>
using namespace std;
    
int main(){
    int flag = 0;
    string str = "abcba";
    for (int i = 0; i < (str.length()-1)/2; i++)
    {
        if(str[i]!=str[str.length()-1])
            flag=1;
            break;
    }
    if(flag==0)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
    return 0;
}