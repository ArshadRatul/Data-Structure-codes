#include <iostream>

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
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    node* gethead()
    {
        return head;
    }

     static void display(node *head)
    {
        if(head == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->data << endl;
            display(head->next);
        }
    }

     static void concatenate(node *a,node *b)
    {
        if( a != NULL && b!= NULL )
        {
            if (a->next == NULL)
                a->next = b;
            else
                concatenate(a->next,b);
        }
        else
        {
            cout << "Either a or b is NULL\n";
        }
    }

    void front(int n)
    {
        node *tmp = new node;
        tmp -> data = n;
        tmp -> next = head;
        head = tmp;
    }

    void after(node *a, int value)  // a=500, value=3
    {
        node* p = new node;
        p->data = value;
        p->next = a->next;
        a->next = p;
    }

    void del (node *before_del)
    {
        node* temp;
        temp = before_del->next;
        before_del->next = temp->next;
        delete temp;
    }
};

int main()
{
    linked_list a;
    linked_list b;

    a.add_node(1);
    a.add_node(2);
    a.front(3);
    a.add_node(5);
    a.add_node(15);
    a.add_node(20);
    a.after(a.gethead()->next->next->next, 10);
    a.del(a.gethead()->next->next);
    linked_list::display(a.gethead());
    b.add_node(5);
    b.add_node(15);
    linked_list::concatenate(a.gethead(),b.gethead());
    linked_list::display(a.gethead());
    return 0;
}

// creating link list 
// link list traverse
//link list concatenate/ merge
//link list insert (head/front, tail/end, middle)
//link list delete (whole list, from any place, head/front,tail/end)

// node* tmp= head;
// head=head-.next;
// delete tmp;

// single link list, double link list, circular link list