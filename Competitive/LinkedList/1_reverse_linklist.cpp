#include<iostream>
#include<cstdlib>
using namespace std;

    int flag=0;
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

void reverse_list(struct node * list)
{
    struct node *head = list, *prev, *next;
    prev = NULL;
    while(list!=NULL)
    {
        next = list->link;
        list->link = prev;
        prev = list;
        list = next;
    }
    mylist = prev;
}
int main(){
    mylist = (struct node *)malloc(sizeof(struct node));
    mylist->link=NULL;
    insert_node(mylist,10);
    insert_node(mylist,20);
    insert_node(mylist,40);
    insert_node(mylist,30);
    insert_node(mylist,70);
    display_list(mylist);
    reverse_list(mylist);
    display_list(mylist);
    return 0;
}