#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int ,5> myarray = {1,2,3,4,5};
    cout<<(myarray.size())<<endl;
    cout<<(myarray.front())<<endl;
    cout<<(myarray.back())<<endl;
    cout<<(myarray.data())<<endl;
    return 0;
}