#include<bits/stdc++.h>

//merge sort for Doubly linked list
using namespace std;
class node
{
   public:
   int data ;
   node *prev,*next;
   
    node(): prev(NULL), next(NULL)
    { }
};
node* createnode()
{
    node *t= new node();
    t->prev=t->next=NULL;
    return t ;
}
void insert(node **head, int num)
{
    node *temp= createnode() ;
    temp->data=num;
    if ((*head)==NULL)
    {
        *head=temp;
    }
    else 
    {
      node *p=*head ;
      (*head)->prev=temp;
      (*head)=temp;
       temp->next=p;
    }

}
void viewlist(node **head)
{
    node * temp= *head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"  " ;
        temp=temp->next;
    }
}
node* merge(node *start,node *mid )
{
       if (start==NULL)
       {
           return mid;
       }
       if (mid==NULL)
       {
           return start;
       }
       if (start->data<mid->data)
       {
           start->next=merge(start->next, mid);
           start->next->prev=start;
           start->prev=NULL;
           return start ;
       }
       else
       {
           mid->next=merge(start, mid->next);
           mid->next->prev=mid;
           mid->prev=NULL ;
           return mid ;
       }          
}
node* mergesort(node *start)
{
    if ( start==NULL || start->next==NULL)
    {
        return start;
    }
    node *slow=start, *fast=start;
    while (fast->next!=NULL&&fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    node *mid= slow->next;
    slow->next=NULL ;
  start=  mergesort(start);
   mid=  mergesort(mid) ;
    return merge(start,mid);
} 
int main()
{
    node *head=NULL;
    insert(&head,23);
    insert(&head, 86);
    insert(&head, 876);
    insert(&head,56);
    insert(&head, 68);
    cout<<"List entered : ";
    viewlist(&head);
   head= mergesort(head);
    cout<<"\n Sorted list : ";
    viewlist(&head);
}