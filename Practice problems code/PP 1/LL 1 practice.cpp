#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
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
    void add_node(int a)
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
            tail=tail->next;
        }
    }
    void delete_node()
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
     void display()
     {
         node* temp=head;
         if(temp==NULL)
         {
             cout<< "The list is empty";
         }
         else
         {
             while(!(temp==NULL))
             {
                 cout<<temp->data<<" ";
                 temp=temp->next;
             }
         }
         cout<<"\n";
     }
     int count_list()
     {
         int c=0;
         node* temp=head;
         while(!(temp==NULL))
         {
             c++;
             temp=temp->next;
         }
         return c;
     }
     void average()
     {
         int c=count_list();
         int sum=0;
         float ave;
         node* temp=head;
         while(!(temp==NULL))
         {
             sum=sum+(temp->data);
             temp=temp->next;
         }
         ave=sum/c;
         cout<<"The average is: "<<ave<<endl;
     }
     node* gethead(){return head;}


};
void concatenate(node* a,node* b)
     {
         while(!(a->next==NULL))
         {
             if(a->next==NULL)
             {
                 a->next=b;
             }
             a=a->next;
         }
     }
int main()
{
    linkedlist a;
    linkedlist b;
    a.add_node(8);
    a.display();
    a.add_node(9);
    a.add_node(6);
    a.display();
    b.add_node(5);
    b.add_node(10);
    b.display();
    concatenate(a.gethead(),b.gethead());
    a.display();
    //findElement(a.b,6);
    //a.average();
    a.display();
    b.delete_node();
    a.delete_node();
    b.display();
    a.display();

    return 0;
}
