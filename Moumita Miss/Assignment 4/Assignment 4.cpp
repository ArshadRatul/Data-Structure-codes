#include<iostream>
using namespace std;
struct node
{
    float data;
    node* next;
};
node *head=NULL,*tail=NULL;
void insert_data(int n)
{
    if(n>0){
        float val;
        cin>>val;
        node* temp=new node;
        temp->data=val;
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
            tail->next=head;
        }
        insert_data(n-1);
    }
}
void print_list(node* help)
{
    if(head==NULL)
    {
        cout<<"The list is empty.";
        return;
    }
    cout<<help->data<<endl;
    if(help->next!=head)
    {
        print_list(help->next);
        return;
    }
}
void search_val(node* help,float val,int counter)
{
    if(help->data==val){counter++;}
    if(help->next!=head)
    {
        search_val(help->next,val,counter);
        return;
    }
    if(help->next==head)
    {
        if(counter==0){cout<<val<<" not found in the list."<<endl;}
        else{cout<<val<<" is found "<<counter<<" times in the list."<<endl;}
    }
}
void delete_all()
{
    node* help=head;
    head=head->next;
    tail->next=head;
    delete help;
    if(head!=tail){delete_all();}
    if(head==tail)
    {
        head=NULL;
        tail=NULL;
    }
}
int main()
{
    int n=0,val;
    cout<<"Enter the number of values you want to take: ";
    cin>>n;
    insert_data(n);
    print_list(head);
    cout<<"\nEnter the value you want to find: ";
    cin>>val;
    search_val(head,val,0);
    delete_all();
    print_list(head);

    return 0;
}
