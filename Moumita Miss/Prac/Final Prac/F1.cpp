#include<iostream>
using namespace std;
struct node
{
    string name;
    int year,seat;
    float price;
    node* next;
};
node* head=NULL;
node* tail=NULL;
node* get_head()
{
    return head;
}
void add_node(string s)
{
    node* help=get_head();
    node* temp=new node;
    temp->name=s;
    cin>>temp->year;
    cin>>temp->seat;
    cin>>temp->price;
    if(help==NULL)
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
void add_movie(string a,node* h)
{
    bool check=false;
    while(h!=NULL)
    {
        if(h->name==a)
        {
            check=true;
        }
        h=h->next;
    }
    if(check==false)
    {
        add_node(a);
    }
    else{cout<<"The Movie already exist.";}
}
void buy_tickets(string n,int tickets)
{
    node* help=get_head();
    while(help->name!=n)
    {
        help=help->next;
        if(help==NULL){return ;}
    }
    if(help->seat-tickets<0)
    {
        cout<<"Seats available: "<<help->seat<<endl;
    }
    else
    {
        help->seat=help->seat-tickets;
    }
}
void update_price(string a,float p)
{
    node* help=get_head();
    while(help->name!=a)
    {
        help=help->next;
    }
    help->price=p;
}
int main()
{

    return 0;
}
