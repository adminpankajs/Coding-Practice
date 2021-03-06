#include<iostream>
#include<map>
using namespace std;
    
int main(){
    int i = 0;
    char str[] = "helloshivam";
    map <char,int> smap;
    while(str[i]!='\0')
    {
        if(smap[str[i]]==0)
            smap[str[i]]++;
        else
            cout<<"duplicate :"<<str[i]<<endl; 
        i++;
    } 
    return 0;
}