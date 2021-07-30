#include <iostream>

using namespace std;

struct node
{
    int data;
    node * next;
};

void insertNode(node * mynode, int n)
{
    while(n--)
    {
        node * newnode = new node;
        cin>>newnode->data;
        mynode->next = newnode;
        mynode = mynode->next;
    }
    mynode->next = NULL;
}

void printNode(node * mynode,int n)
{
    mynode = mynode->next;
    while(mynode)
    {
        cout<<mynode->data<<" ";
        mynode = mynode->next;
    }
}

int findmiddle(node * mynode)
{
    int ans;
    mynode = mynode->next;
    node * slowptr = mynode;
    node * fastptr = mynode;
    while(fastptr && fastptr->next)
    {
        slowptr = slowptr->next;
        ans = slowptr->data;
        fastptr = fastptr->next;
        if(fastptr)
            fastptr = fastptr->next; 
    }
    return ans;
}

int main()
{
   node * mynode = new node;
   int n;
   cin>>n;
   insertNode(mynode, n);
   printNode(mynode,n);
   cout<<endl<<findmiddle(mynode);
   return 0;
}