#include<iostream>
using namespace std;

struct node //declaring a node type.
{
    int data;
    node* next;
    node* prev;
};
class linked_list
{
private:
    node *head,*tail;//taking node type pointer variables for making head and tail.

public:
    linked_list()//constructor to make the head and tail null initially.
    {
        head=NULL;
        tail=NULL;
    }
    void add_tail(int a)//to add tail node.
    {
        node* temp=new node;//allocating pointer type node in dynamic memory.
        temp->data=a; // assigning the data.
        temp->next=NULL;//making the temp,  next part null.
        temp->prev=NULL;//making the temp,  prev part null.

        if(head==NULL)//if head is null then pointing the head and tail to the first element.
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;//linking the node to the next node.
            temp->prev=tail;//linking the next node with the previous node.
            tail=temp;//pointing the tail to the new node.
        }
    }
    void delete_head()
    {
        node* temp1=head;
        node* temp2=NULL;
        while(!(head==NULL))
        {
            if(head->next==NULL)
            {
                delete temp1;
                head=NULL;
            }
            else
            {
                temp2=temp1->next;
                delete temp1;
                head=temp2;
                temp1=head;
            }
        }
    }
    void display()// Print values from head
    {
        node* temp=head;
        if(temp==NULL)
        {
            cout<<"\nThe list is empty.\n";
        }
        else
        {
            while(!(temp==NULL))
            {
                cout<<temp->data<<" \n";
                temp=temp->next;
            }
        }
    }
    bool isPalindrome(node *left) {
       if (left == NULL)
          return true;
       node *right = left;
       while (right->next != NULL)
          right = right->next;
       while (left != right && right != left->prev) {
          if (left->data != right->data)
             return false;
          left = left->next;
          right = right->prev;
       }
    return true;
    }
    bool pal(node* head)
    {

    }
};
int main()
{
    int x=5;
    linked_list a;
    for(int i=0;i<x;i++)
    {
        int n;
        cout<<"Enter value: ";
        cin>>n;
        a.add_tail(n);
    }
    bool pal=a.isPalindrome();
    cout<<pal;
    a.display();
    a.delete_head();
}
