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
    linkedlist c;
    for(int i=0;i<11;i++)
    {
        int data=rand()%100;
        a.addTail(data);
    }
    for(int j=0;j<11;j++)
    {
        int data1=rand()%100;
        b.addTail(data1);
    }
    node* A=a.getHead();
    node* B=b.getHead();
    while(!(A==NULL))
    {
        if(A->data%2!=0)
        {
            c.addTail(A->data);
        }
        A=A->next;
    }
    while(!(B==NULL))
    {
        if(B->data%2==0)
        {
            c.addTail(B->data);
        }
        B=B->next;
    }
    a.print();
    b.print();
    c.print();
    a.delHead();
    b.delHead();
    c.delHead();
}
