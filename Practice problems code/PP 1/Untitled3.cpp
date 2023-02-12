#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head=NULL;
        tail=NULL;
    }
    void addNode(int a)
    {
        node* temp=new node;
        temp->data=a;
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
    void display()
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
    void delete_list()
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
    int count_list()
    {
        int c=0;
        node* temp=head;
        if(temp==NULL)
        {
            cout<<"The list is empty.";
        }
        else
        {
            while(!(temp==NULL))
            {
                c++;
                temp=temp->next;
            }
        }
        return c;
    }
    void average()
    {
        int c=count_list(),sum=0;
        node* temp=head;
        if(temp==NULL)
        {
            cout<<"The list is empty.";
        }
        else
        {
            while(!(temp==NULL))
            {
                sum=sum+temp->data;
                temp=temp->next;
            }
        }
        cout<<"\nThe sum is: "<<sum;
        cout<<"\nThe average is: "<<sum/c;
    }
    void first_occ(int x)
    {
        bool found=false;
        node* a=head;
        while(!(a==NULL))
        {
            if(a->data<x)
            {
                cout<<"the first occurrence of linked list element smaller than X is "<< a->data<<endl;
                found=true;
                break;
            }
            a=a->next;
        }
        if(found==false)
        {
            cout<<"No value found smaller than x."<<endl;
        }
    }
    void last_occ(int x)
    {
        bool found=false;
        int l=x;
        node* a=head;
        while(!(a==NULL))
        {
            if(a->data>x)
            {
                if(l<a->data)
                {
                    l=a->data;
                found=true;

                }
                            }
            a=a->next;
        }
        if(found==true)
        {
            cout<<" the last occurrence of linked list element greater than X is "<<l<<endl;
        }
        else{cout<<"No value found greater then x";}
    }
};

int main()
{
    int x;
    linked_list a;
    a.addNode(2);
    a.addNode(5);
    a.addNode(9);
    a.addNode(6);
    a.addNode(7);
    a.addNode(9);
    a.addNode(5);
    a.addNode(2);
    a.addNode(1);
    a.addNode(3);
    cin>>x;
    a.first_occ(x);
    a.last_occ(x);
    a.delete_list();
    return 0;
}

