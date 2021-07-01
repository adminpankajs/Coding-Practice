#include<iostream>
#include<fstream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

ifstream infile("input.txt");
ofstream outfile("output.txt", ios::trunc);

void solve(string input, string length, string dir)
{
    int count = 0;
    string str1, str2, str3;
    if(dir=="L")
    {
        str1 = input.substr(0,stoi(length));
        str2 = input.substr(stoi(length));
        str3 = str2.append(str1);
    }
    else
    {
        str1 = input.substr(0,input.size()-stoi(length));
        str2 = input.substr(input.size()-stoi(length));
        str3 = str2.append(str1);
    }
    outfile<<str3;
}

int main()
{
    if(infile.fail() || outfile.fail())
    {
        cout<<"No such file found !!"<<endl;
    }
    else
    {
        string input;
        while (infile>>input)
        {
            string str,length,dir;
            str = input.substr(0,input.find(','));
            input = input.substr(input.find(',')+1);
            length = input.substr(0,input.find(','));
            input = input.substr(input.find(',')+1);
            dir = input.substr(0,input.find(','));
            solve(str, length, dir);
        }
        cout<<"Success !!"<<endl;
    }
    return 0;
}