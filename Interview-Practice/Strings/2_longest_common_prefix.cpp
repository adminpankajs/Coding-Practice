#include <bits/stdc++.h>

using namespace std;

int main()
{
    string arr[] = {"apprle", "appre", "ppril"};
    string str = arr[0];
    for(auto x : arr)
    {
        int count = 0;
        for(auto y : x)
        {
            if(y==str[count])
                count++;
            else
                break;
        }
        str = str.substr(0,count);
    }
    cout<<str<<endl;
    return 0;
}