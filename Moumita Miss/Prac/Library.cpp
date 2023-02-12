#include<iostream>
using namespace std;
struct book
{
    string name,author,status;
    int popularity;
    book *next,*prev;
};
struct alpha
{
    char letter;
    alpha* next;
    book* b_list;
};
alpha* head=NULL;
alpha* get_head()
{
    return head;
}
void add_book()
{
    book* temp=new book;
    cout<<"Enter book name: ";
    cin>>temp->name;
    cout<<"Enter author name: ";
    cin>>temp->author;
    temp->popularity=0;
    temp->status="available";
    temp->next=NULL;
    temp->prev=NULL;

    alpha* temp2=new alpha;
    temp2->next=NULL;
    temp2->letter=temp->name[0];
    if(head==NULL)
    {

    }
    else
    {
        alpha* h=get_head();
        while(h->next!=NULL)
        {
            if(h->letter==temp->name[0])
            {

            }
            h=h->next;
        }
    }


}
int main()
{
    int option=0;
    do
    {
        cout<<"1. View list of all (both available or borrowed) books\n2. View list of available books\n3. Add new book\n4. Delete a book if it is lost\n5. Check the availability of a particular book\n6. Changing the status of a book when a user borrows/returns it\n7. Find the most popular book and recommend it to users\n8. Exit the program\n";
        cout<<"Enter your choice: ";
        cin>>option;
        switch(option)
        {
        case 1:
            print_all_books();
            break;
        case 2:
            print_available();
            break;
        case 3:
            add_book();
            break;
        case 4:
            delete_book();
            break;
        case 5:
            check_availibility();
            break;
        case 6:
            change_status();
            break;
        case 7:
            find_popular();
            break;
        case 8:
            break;
        default:
            cout<<"Invalid option.";
            break;
        }
    }while(option!=8);
    return 0;
}
