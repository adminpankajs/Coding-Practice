#include <iostream>

using namespace std;

struct node
{
    int data;
    node * next;
};

node * head;

void insertNode(node * mynode, int n)
{
    while(n--)
    {
        node * newnode = new node;
        cin>>newnode->data;
        mynode->next = newnode;
        mynode = mynode->next;
        if(n==0)
            mynode->next = NULL;
        
    }
}

void printNode(node * mynode,int n)
{
    mynode = head->next;
    while(mynode)
    {
        cout<<mynode->data<<" ";
        mynode = mynode->next;
    }
}

void reverse(node * mynode)
{
    mynode = mynode->next;
    node * prev = NULL;
    while(mynode)
    {
        node * save = mynode->next;
        mynode->next = prev;
        prev = mynode;
        if(save == NULL)
            head->next = mynode;
        mynode = save;
    
    }
}

int main()
{
   node * mynode = new node;
   int n;
   cin>>n;
   insertNode(mynode, n);
   head = mynode;
   printNode(mynode,n);
   reverse(mynode);
   cout<<endl;
  printNode(mynode,n);
   return 0;
}