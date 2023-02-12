#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

class linked_list
{
private:
    node* head= NULL;
    node* tail= NULL;
public:

    void add_node(int n)
    {
        node* temp =new node;
        temp->data=NULL;
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            head->temp;
            temp->next=head;
            head=head->next;
        }
    }
};
void display()
{
    node* temp;
    temp=head;
    while(temp != Null)
    {
        cout<<temp->data<<endl;
        temp= temp->next;
    }
}
void del()
{
    node* temp1;
    node* temp2;
    temp=head;
    while(temp != Null)
    {
        temp2=temp1;
        temp=temp1->next;
        delete temp2;
    }
    head=temp1;
}
void counter()
{
    int c=0;
    node* temp;
    temp=head;
    while(temp != Null)
    {
        c++;
        temp= temp->next;
    }
    cout<<"The size of Linked list is "<<c;
}

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.display();
    a.counter();
    a.del()
    linked_list b;
    b.add_node(22);
    b.add_node(33);
    b.add_node(44);
    b.display();
    b.counter();
    b.del();

    return 0;
}
