#include<iostream>
using namespace std;

int main()
{
    int flag = 0;
    float distance = 0;
    string str[] = { "TH", "GA", "IC", "HA", "TE", "LU", "NI","CA" };
    int str_p[8] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    string source;
    string desination;
    cin>>source;
    cin>>desination;
    int count =0;
    for(string s : str)
    {
        if(s==source || s ==desination)
        {
            flag++;
            if(flag==1)
            {
                distance += (-str_p[count]);
                cout<<distance<<endl;
            }
            else if(flag==2)
            {
                distance += str_p[count];
                cout<<distance<<endl;
            }
        }
        if(flag==2)
        {
            cout<<"Cost is : "<<(distance/1000)*5<<endl;
            break;
            return 0;
        }
        count++;
    }
    cout<<"INVALID INPUT"<<endl;

    return 0;
}