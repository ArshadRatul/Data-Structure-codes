#include<iostream>
using namespace std;
/*struct node
{
    string professional;
    node* next;
    node* prev;
};

node* head;
node* tail;
void add_head(string a)
{
    node* temp;
    temp->professional=a;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=head;
    }
    else
    {
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
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
        cout<<help->professional<<" ";
        help=help->next;
    }
}
void delete_lists(string a)
{
    node* help=head;
    node* temp=help;

    while(help!=NULL)
    {
        if(help->professional==a)
        {
            help->prev->next=help->next;
            help->next->prev=help->prev;
            temp=help;
            delete temp;
        }
        help=help->next;
    }
}
int main()
{
    add_head("Student");
    add_head("Doctor");
    add_head("Teacher");
    add_head("Student");
    print_lists();

    return 0;
}*/
int main()
{
    int a1,a2;
    cin>>a1>>a2;
    char* arr1=new char[a1];
    char* arr2=new char[a2];
    char* arr3=new char[a1+a2];
    cout<<"Enter arr1\n";
    for(int i=0;i<a1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter arr2\n";
    for(int i=0;i<a2;i++)
    {
        cin>>arr2[i];
    }
    int a=0;
    for(int i=0;i<a1+a2;i++)
    {
        if(i<a1)
        {
            arr3[i]=arr1[i];
        }
        else
        {
            arr3[i]=arr2[a];
            a++;
        }
    }
    for(int i=0;i<a1+a2;i++)
    {
        if(i<a1)
        {
            cout<<arr3[i]<<" ";
        }
        else
        {
            cout<<arr3[i]<<" ";
        }
    }
delete[] arr1;
delete[] arr2;
delete[] arr3;
}
