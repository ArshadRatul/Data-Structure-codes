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
};

int main()
{
    linked_list lnk1;
    lnk1.display();
    lnk1.addNode(1);
    lnk1.addNode(2);
    lnk1.addNode(3);
    lnk1.addNode(4);
    lnk1.addNode(5);
    lnk1.display();
    lnk1.average();
    cout<<"\nThe number of node: "<<lnk1.count_list();

    lnk1.delete_list();
    lnk1.display();

    return 0;
}
