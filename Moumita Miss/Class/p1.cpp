#include<iostream>
using namespace std;
struct node
{
    string books;
    node* next;
};
node* head=NULL;
void add_node(string a)
{
    node* temp=new node;
    temp->books=a;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node* help=head;
        while(help->next!=NULL)
        {
            help=help->next;
        }
        help->next=temp;
    }
}
void print_lists()
{
    node* help=head;
    if(head==NULL)
    {
        cout<<"\nEmpty";
        return;
    }
    while(help!=NULL)
    {
        cout<<help->books<<" ";
        help=help->next;
    }
}
void insert_books(string specific_book,string new_book)
{
    node* temp=new node;
    temp->books=new_book;
    temp->next=NULL;
    node* help=head;
    node* book_before=help->next;
    while(help!=NULL)
    {
        if(book_before->books==specific_book)
        {
            break;
        }
        help=help->next;
        book_before=help->next;
    }
    help->next=temp;
    temp->next=book_before;
}
void delete_lists()
{
    node* help=head;
    node* temp=help;

    while(help!=NULL)
    {
        help=help->next;
        delete temp;
        temp=help;
        head=help;
    }
}
int main()
{
    add_node("Ratul");
    add_node("Tunisha");
    add_node("Love");
    print_lists();
    cout<<endl;
    insert_books("Tunisha","Safi");
    print_lists();
    delete_lists();
    print_lists();

    return 0;
}
