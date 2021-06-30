#include<iostream>
#include<fstream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt", ios::trunc);
    if(infile.fail() || outfile.fail())
    {
        cout<<"No such file found !!"<<endl;
    }
    else
    {
        string s;
        while (infile>>s)
        {
            string str;
            int num = stoi(s);
            if(num%2==0)
            {
                num = (num-2)/2;
            }
            else
            {
                num = num-1;
            }
            outfile<<num<<endl;
        }
    }
    return 0;
}