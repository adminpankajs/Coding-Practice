#include <bits/stdc++.h>

using namespace std;

string ans;

bool pass1(string str)
{
    ans = "";
    bool check = false;
    for(int i=0;i<str.length()/2;i++)
    {
        if(str[i] != str[str.length()-1-i])
        {
            str[str.length()-1-i] = str[i];
            check = true;
        }
    }
    ans = str;
    return check;
}

bool pass2(string str)
{
    ans = "";
    int pointer = (str.length()-1)/2;
    bool check = false;
    while(check == false && pointer >=0)
    {
        if(str[pointer] < '9')
        {
            check = true;
            char ch  = (char)(int)(str[pointer]+1);
            str[pointer] = ch;
            str[str.length()-1-pointer] = ch;
        }
        else
        {
            str[pointer] = '0';
            str[str.length()-1-pointer] = '0';
        }
        pointer--;
        
    }
    ans = str;
    return  check;
}

bool pass3(string str)
{
    ans = "";
    ans  += '1';
    for(int i=0;i<str.length()-1;i++)
        ans += '0';
    ans += '1';
    return true;
}

int main()
{
    string str;
    cin>>str;
    if(pass1(str))
    {
        cout<<ans;
        return 0;
    }
    if(pass2(str))
    {
        cout<<ans;
        return 0;
    }
    if(pass3(str))
    {
        cout<<ans;
        return 0;
    }
    return 0;
}