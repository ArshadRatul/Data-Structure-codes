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
    void addTail(int n)
    {
        node* temp=new node;
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
            tail=temp;
        }
    }
    void delHead()
    {
        node* temp=head;
        while(!(head==NULL))
        {
            head=head->next;
            delete temp;
            temp=head;
        }
        if(head==NULL){cout<<"\nDONE";}
    }
    node* getHead()
    {
        return head;
    }
    void concanate(node* x,node* y)
    {
        if(x!=NULL && y!=NULL)
        {
            if(x->next==NULL)
            {
                x->next=y;
            }
            else{concanate(x->next,y);}
        }
        else{cout<<"Cannot be cancatenate";}
    }
    void print()
    {
        node* temp=head;
        if(temp==NULL)
        {
            cout<<"\nThe list is empty. ";
        }
        cout<<endl;
        while(!(temp==NULL))
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    linkedlist a;
    linkedlist b;
    a.addTail(5);
    a.addTail(9);
    a.addTail(7);
    a.addTail(3);
    a.print();
    b.addTail(9);
    b.addTail(2);
    b.addTail(6);
    b.addTail(5);
    b.print();
    b.concanate(b.getHead(),a.getHead());
    b.print();
    a.delHead();
    a.print();
    return 0;
}
