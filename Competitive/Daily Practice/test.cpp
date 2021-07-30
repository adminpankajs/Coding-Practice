#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    string temp;
    bool flag=false;
    vector<string> vc{"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
    for(char ch : str)
    {
        cout<<ch<<endl;
        if(flag==true)
        {
            break;
        }
        cout<<ch<<endl;
        if(ch != ' ')
        {
            temp.push_back(ch);
        }
        else  
        {
            cout<<temp<<endl;
            for(string x : vc)
            {
                cout<<"CHANGES "<<endl;
                cout<<x<<" : "<<temp<<endl;
                if(x==temp){
                    flag=true;
                }
            } 
            temp.clear();  
        }   
        cout<<flag<<endl;

    }

}