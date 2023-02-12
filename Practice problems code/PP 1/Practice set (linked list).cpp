#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

class linkedlist
{
private:
    node *head,*tail;
public:
    linkedlist()
    {
        head=NULL;
        tail=NULL;
    }
    void add_node(int n)
    {
        node* temp= new node;
        temp->data=n;
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=tail->next;
        }
    }
    void add_head(int n)
    {
        node* temp= new node;
        temp->data=n;
        temp->next=head;
        head=temp;
    }
    void display()
    {
        node* temp1=head;
        if(head==NULL)
        {
            cout<<"The list is empty.";
        }
        else
        {
            while(temp1->next!=NULL)
            {
                cout<<temp1->data<<",";
                temp1=temp1->next;
            }
            cout<<"\b ";
            }
    }
    void delete_linkedlist()
    {
        node* temp1=head;
        node* temp2;
        while(head!=NULL)
        {
            if(temp1->next==NULL)
            {
                head=NULL;
                temp2=temp1->next;
                delete temp1;
                temp1=temp2;
            }
            else
            {
                temp2=temp1->next;
                delete temp1;
                temp1=temp2;
                head=temp1;
            }
        }
    }
    int counter()
    {
        node* temp1=head;
        int c=0;
        while(temp1->next!=NULL)
        {
           c++;
        }
        return c;
    }
    void delete_node(int a)
    {
        node *temp1,*temp2;
        int c,i=0;
        c=counter();
        if(a<c)
        {
            while(i!=a)
            {
                temp1=temp1->next;
            }

        }
    }
};

int main()
{
    linkedlist a;
    a.add_node(5);
    a.add_node(6);
    a.add_node(8);
    a.display();
    cout<<"\n";
    a.add_head(10);
    a.display();
    cout<<"\n";
    a.delete_linkedlist();
    a.display();

    return 0;
}
