#include<iostream>
#include<cstdlib>
using namespace std;

int flag=0;
int myflag =0;
struct node {
    struct node * link;
    int value;
};  
struct node * mylist = NULL;
void insert_node(struct node * list, int myvalue)
{
    while(list->link!=NULL)
    {
        list = list->link;
    }
    if(flag!=0)
    {
        list->link=(struct node *)malloc(sizeof(struct node));
        list = list->link;
    }
    list->value = myvalue;
    list->link=NULL;
    cout<<"Value inserted : "<<list->value<<endl;
    flag=1;
}

void display_list(struct node * list)
{
    int flag = 0;
    while(list!=NULL)
    {
        cout<<list->value<<" ";
        list = list->link;
    }
    cout<<endl;
}

void reverse_list(struct node * list,int size)
{
    struct node *head, *end, *prev, *next;
    int count=0;
    end = NULL;
    while(list!=NULL)
    {
        prev = NULL;
        while(count!=size)
        {
            if(count==0)
            {
                head = end;
                end = list;
            }
            next = list->link;
            list->link = prev;
            prev = list;
            count++;
            if(count==size && head!=NULL)
            {
                head->link = list;
            }
            if(next==NULL)
            {
                head->link = list;
            }
            list = next;
            if(list==NULL)
                break;
        }
        if(myflag==0)
        {
            mylist = prev;
            myflag=1;
        }
        prev = head;
        count = 0;
    }
}
int main(){
    mylist = (struct node *)malloc(sizeof(struct node));
    mylist->link=NULL;
    insert_node(mylist,10);
    insert_node(mylist,20);
    insert_node(mylist,40);
    insert_node(mylist,30);
    insert_node(mylist,50);
    display_list(mylist);
    reverse_list(mylist,3);
    display_list(mylist);
    return 0;
}