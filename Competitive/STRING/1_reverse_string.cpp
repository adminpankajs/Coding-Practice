#include<iostream>
#include<string.h>
using namespace std;
    
int main(){
    string str = "mystring";
    for (int i = str.length()-1; i >= 0; i--)
    {
        cout<<str[i];
    }
    return 0;
}