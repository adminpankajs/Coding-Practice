#include<iostream>
#include<list>
#include<iterator>

using namespace std;

printList(list<int> myList)
{
    auto itr = myList.begin();
    cout<<endl;
    while (itr != myList.end())
    {
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;
}

printRList(list<int> myList)
{
    auto itr = myList.rbegin();
    cout<<endl;
    while (itr != myList.rend())
    {
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;
}

int main()
{
    list<int> myList = {1,2,3,4,5,6};
    auto itr = myList.begin();
    // printList(myList);
    // myList.push_front(10);
    // myList.push_back(20);
    // printList(myList);
    // myList.pop_front();
    // printList(myList);
    // myList.pop_back();
    // printList(myList);
    // printRList(myList);
    // cout<<myList.empty();
    advance(itr,1);
    myList.insert(itr,1,30);
    printList(myList);
    itr = myList.begin();
    myList.erase();
    printList(myList);
    
    return 0;
}
