/*Single linked list
1. Add node to tail
2. Add node to head
3. Delete full from head
4. Delete full from tail
5. print linked list
*/
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
    void addHead(int n)
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
            temp->next=head;
            head=temp;
        }
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
    void addMid(int n,int p)
    {
        int c=listSize();
        if(p<=c)
        {
            int a=1;
            node* temp1=head;
            node *prev,*nex;
            while(a!=p)
            {
                prev=temp1;
                temp1=temp1->next;
                nex=temp1->next;
                a++;
            }
            node* temp2=new node;
            temp2->data=n;
            prev->next=temp2;
            temp2->next=temp1;
            temp1=nex;
        }
        else{cout<<"The position is wrong";}
    }
    void delMid(int p)
    {
        int c=listSize();
        if(p<=c)
        {
            int a=1;
            node* temp1=head;
            node *prev,*nex;
            while(a!=p)
            {
                prev=temp1;
                temp1=temp1->next;
                nex=temp1->next;
                a++;
            }
            prev->next=nex;
            delete temp1;
        }
        else{cout<<"The position is wrong";}
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
    void delTail()
    {
        if(tail==NULL)
        {
            cout<<"The list is empty";
        }
        node* temp=head;
        node* prev=NULL;
       while(!(temp->next==NULL))
            {
                prev=temp;
                temp=temp->next;
            }
        cout<<"\ntemp:"<<temp->data;
        cout<<"\nprev:"<<prev->data;
        tail=prev;
        tail->next=NULL;
        delete temp;
        if (!(tail==NULL))
        {
            delTail();
        }
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
    a.addTail(5);
    a.addTail(9);
    a.addTail(7);
    a.addTail(3);
    a.print();
    a.addHead(2);
    a.addHead(8);
    a.print();
    a.addMid(10,3);
    a.print();
    a.delMid(3);
    //a.delTail();
    a.print();
    a.delHead();
    a.print();
    return 0;
}
