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
    int listSize()
    {
        node* temp=head;
        if(temp==NULL)
        {
            cout<<"\nThe list is empty. ";
        }
        int c=0;
        while(!(temp==NULL))
        {
            c++;
            temp=temp->next;
        }
        return c;
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
    void divide(node* a,node* b, node* c,node* d)
    {

    }
};
int main()
{
    int inp;
    linkedlist a;
    for(int k=0;k<8;k++)
    {
        cout<<"Enter value for list: ";
        cin>>inp;
        a.addTail(inp);
    }
    linkedlist f;
    linkedlist s;
    linkedlist t;
    int c=a.listSize();
    int n=c/4;
    int help[c];
    node* temp=a.getHead();
    for(int i=0;i<c;i++)
    {
        help[i]=temp->data;
        temp=temp->next;
        cout<<help[i]<<" ";
    }
    for(int j=0;j<c;j++)
    {
        if(j<n)
        {
            f.addTail(help[j]);
        }
        if(j<(n+n))
        {
            f.addTail(help[j]);
        }
        if(j<(n+n+n))
        {
            f.addTail(help[j]);
        }
    }
    a.print();
    f.print();
    s.print();
    t.print();
    //a.divide(a.getHead(),f.getHead(),s.getHead(),t.getHead());
    a.delHead();
    f.delHead();
    s.delHead();
    t.delHead();
    a.print();
    f.print();
    s.print();
    t.print();
    return 0;
}

