#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

bool isempty()
{
    if(head==NULL) {
        return true;
    }
    return false;
}

void insert_at_end(int value)
{
    node* new_node = new node;
    new_node->data = value;
    new_node->next = NULL;

    if(isempty()==true) {
        head = new_node;
    }
    else {
        node* current_node = head;
        while(current_node->next!= NULL) {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}

void print_list()
{
    node* current_node = head;
        while(true) {
            cout<<current_node->data<<endl;
            current_node=current_node->next;
            if(current_node->next==NULL)
            {
                cout<<current_node->data<<endl;
                break;
            }
        }
}
void Search(int a)
{
    node* current_node = head;
    bool f=false;
        while(current_node!=NULL) {
                if(a==current_node->data){f=true;}
            current_node=current_node->next;
        }
        if(f==true){cout<<a<<" is found\n";}
        else{cout<<a<<" not found\n";}
}

int main()
{
    insert_at_end(2);
    insert_at_end(5);
    insert_at_end(3);
    print_list();
    Search(5);
    Search(9);
}
