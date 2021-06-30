#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<int, char> myPair(1,'A');

    cout<<myPair.first<<" "<<myPair.second<<endl;
    return 0;
}