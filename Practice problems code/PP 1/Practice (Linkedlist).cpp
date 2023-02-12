/*
********DONT RUN THIS FUCKING CODE*******
1. Add tail node.
2. Add head node.
3. Add node in between.
4. Delete full list from head.
5. Delete full list from tail.
6. Delete any node from middle.
7. Replace a specific data.
8. print odd data.
9. count the similar values.
10. sort the linkedlist
*/
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
    void add_head(int a)
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
            head->prev=temp;//linking the node to the previous node.
            temp->next=head;//linking the head node with the next node.
            head=temp;//pointing the head to the new node.
        }
    }
    int size_link()//method to count the size of the linked list.
    {
        int c;
        node *temp1=head;
        while(temp1->next!=NULL)
        {
            c++;
            temp1=temp1->next;
        }
        return c;// returning the size.
    }
    void add_between(int a, int positon) //taking the data type and the position(after how many node) to add.
    {
        if(positon<=size_link()) // checking whether the size/position of link list exist or not.
        {
            node *tempnode1=head; // taking a pointer to point on the position we are adding the node.
            int x=1;//just to run the while loop.

            while(!(x==positon))// till we reach the desired position.
            {
                tempnode1=tempnode1->next;
                x++;
            }
            node *tempnode2=tempnode1->next;// taking a pointer to point to the next node of the desired position.
            node* temp=new node;//allocating pointer type node in dynamic memory.
            temp->data=a; // assigning the data.
            temp->next=tempnode2;// linking the new node to the next node.
            temp->prev=tempnode1;// linking the new node to the previous node.
            tempnode1->next=temp;// linking the previous node to the new node.
            tempnode2->prev=temp;// linking the next node to the new node.
        }
        else
        {
            cout<<"The link list size exceeded.";
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
    void delete_tail()
    {
        node *temp1=tail;
        node *temp2=NULL;

        while(tail->prev!=NULL)
        {
            if(tail->prev==NULL)
            {
                delete temp1;
                tail=NULL;
            }
            else
            {
                temp2=temp1->prev;
                delete temp1;
                temp1=temp2;
                tail=temp1;

            }
        }

    }
    void delete_middle(int n)//n represents the position to delete
    {
        node *temp1=head;
        node *temp2=NULL;
        node *temp3=NULL;
        int k=1;
        if(n<=size_link())
        {
            while(k!=n)
            {
                temp1=temp1->next;
                k++;
            }
            temp2=temp1->next;
            temp3=temp1->prev;
            delete temp1;
            temp2->prev=temp3;
            temp3->next=temp2;
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
    void replace_data(int x,int y)// replace the value x with value y.
    {
        node *temp=head;
        while(!(temp->next==NULL))
        {
            if(temp->data==x)
            {
                temp->data=y;
            }
            temp=temp->next;
        }
    }
    void print_odd()// printing odd data
    {
        node *temp=head;
        while(!(temp->next==NULL))
        {
            if(temp->data%2!=0)
            {
                cout<<temp->data;
            }
            temp=temp->next;
        }
    }
    void sort_list()//sorting the linkedlist
    {
        int a=0;
        //Using two loops to sort the linked list.
        while(!(a==size_link()))
        {
            node *temp1=head;
            int x;// for temporary storing value.
            while(!(temp1->next==NULL))
            {
                if((temp1->data)>(temp1->next->data))//Swapping the values.
                {
                    x=temp1->data;
                    temp1->data=temp1->next->data;
                    temp1->next->data=x;
                }
                temp1=temp1->next;
            }
            a++;
        }
    }
    void count_same()
    {
        sort_list();//must sort before executing this method.
        node *temp=head;
        int a=temp->data,c=0; // a to store the value to check, c to count.
        while(!(temp->next==NULL))
        {
            if(temp->data==a)
            {
                c++;
            }
            else
            {
                cout<<a<<"= "<<c;
                a=temp->data;
                c=1;
            }
            temp=temp->next;
        }
    }
};

int main()
{
    linked_list a;

    a.add_head(5);
    a.add_head(2);
    a.add_head(3);
    a.add_head(9);
    a.add_head(7);
    a.display();
    a.add_tail(6);
    a.add_tail(7);
    a.display();
    a.add_between(7,3);
    a.add_between(4,6);
    a.display();
    cout<<"size of linked list: "<<a.size_link();
    a.delete_middle(5);
    a.delete_middle(3);
    a.display();
    a.delete_tail();
    a.display();

    a.add_head(5);
    a.add_head(2);
    a.add_head(3);
    a.add_head(9);
    a.add_head(7);
    a.display();
    a.add_tail(6);
    a.add_tail(7);
    a.display();
    a.add_between(7,3);
    a.add_between(4,6);

    a.delete_head();
    a.display();
    return 0;
}
