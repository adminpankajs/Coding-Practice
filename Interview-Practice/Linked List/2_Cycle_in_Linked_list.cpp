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
    node * temp;
    while(n--)
    {
        node * newnode = new node;
        if(n==5)
            temp = newnode;
        int x;
        cin>>x;
        newnode->data = x;
        mynode->next = newnode;
        mynode = mynode->next;
        if(n==0)
        {
            mynode->next = temp;
            cout<<"TEST : "<<mynode->next->data<<endl;
        }
    }
}

int findCycle(node * mynode)
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
        
        if(slowptr == fastptr)
        {
            slowptr = head->next;
            while(slowptr != fastptr)
            {
                slowptr = slowptr->next;
                fastptr = fastptr->next;
                ans = slowptr->data;
            }
            return ans;
        }
    }
    return ans;
}


int main()
{
   node * mynode = new node;
   int n;
   cin>>n;
   head = mynode;
   insertNode(mynode, n);
   cout<<findCycle(mynode);
   return 0;
}