#include<iostream>
#include<unordered_set>
using namespace std;
    
int main(){
    int len = 5,sum=0;
    int arr[len] = {4,2,-3,1,6};
    unordered_set <int> s;
    for (int i = 0; i < len; i++)
    {
        sum = sum+arr[i];
        if(s.find(sum)!=s.end())
        {
            cout<<"YES";
            exit(0);
        }
        else
            s.insert(sum);
    }
    cout<<"NO";
    return 0;
}