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

bool even(const int& value)
{
    if(value%2==0)
        return true;
    return false;
}

int main()
{
    list<int> myList = {1,2,3,4,5,6};
    list<int> l1 = { 1, 2, 3 };
    list<int> l2 = { 4, 5 };
    list<int> l3 = { 6, 7, 8 };
  
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
    advance(itr,1);
    myList.erase(itr);
    printList(myList);
    // myList.assign(2,5);
    // printList(myList);
    // myList.remove(3);
    myList.remove_if(even);
    printList(myList);
    myList.reverse();
    printList(myList);
    cout<<myList.size();
    myList.resize(4,6);
    printList(myList);
    myList.sort();
    myList.reverse();
    printList(myList);
    cout<<myList.max_size();
    myList.clear();
    printList(myList);
    itr = l1.begin();
    advance(itr,1);
    l1.splice(itr, l2);
    printList(l1);
    return 0;
}
