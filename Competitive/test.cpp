#include<iostream>
#include<math.h>
using namespace std;


void prime(int num)
{
    int myprime=4;
    while(num!=2)
    {
        bool flag = false;
        cout<<"SQRT : "<<sqrt(myprime)<<endl;

        for(int i=2; i<=sqrt(myprime);i++)
        {
            if(myprime%i==0)
            {
                flag = true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<myprime<<endl;
            num--;
        }
        myprime++;
    }
}

void fibonacci(int num)
{
    int prev = 0;
    int curr =1;
    for (int i = 1; i < num; i++)
    {
        int temp = curr;
        curr = curr + prev;
        prev = temp;
        cout<<curr<<endl;
    }
}

void solve(int num)
{
    if(num%2==0) //Even
    {
        num = num/2;
        prime(num);
    }
    else
    {
        num = num/2+1;
        fibonacci(num);
    }
}

int main()
{
    int num = 14;
    solve(num);
    return 0;
}