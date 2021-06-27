#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int ,5> myarray_1 = {1,2,3,4,5};
    array<int, 3> myarray_2;
    myarray_2 = {6,7,8};
    cout<<(myarray_1.size())<<endl;
    cout<<(myarray_1.front())<<endl;
    cout<<(myarray_1.back())<<endl;
    cout<<(myarray_1.data())<<endl;
    cout<<(myarray_2.size())<<endl;
    cout<<(myarray_2.front())<<endl;
    cout<<(myarray_2.back())<<endl;
    cout<<(myarray_2.data())<<endl;
    return 0;
}