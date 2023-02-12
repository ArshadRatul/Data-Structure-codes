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
    node* tmp = new node;
    tmp-&gt;data = n;
    tmp-&gt;next = NULL;
    if(head == NULL)
    {
    head = tmp;
    tail = tmp;
    }
    else
    {
    tail-&gt;next = tmp;
    tail = tail-&gt;next;
    }
    }
    void OandEElements()
    {
        int even=0,odd=0;
        node *temp=head;
        while(!(temp==NULL))
        {
            if(temp->data%2==0)
            {
                even++;
            }
            else{odd++;}
            temp=temp->next;
        }
        cout<<"Number of Odd elements: "<<odd;
        cout<<"Number of even elements: "<<even;
    }
};

int main()
{
linked_list a;
for int (int i = 0; i &lt; 11; i++)
{
int newData = rand()%100;
a.add_node(newData);
}
return 0; }

