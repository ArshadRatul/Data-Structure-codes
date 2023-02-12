#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

node* head = NULL;
node* tail = NULL;

bool isempty()
{
    if(head==NULL) {
        return true;
    }
    return false;
}

void insert_at_the_end(int value)
{
    node* new_node = new node;
    new_node->data = value;
    new_node->next = NULL;
    new_node->prev = NULL;

    if(isempty()==true) {
        head = new_node;
        tail = new_node;
    }
    else {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

void print_list()
{
    node* current_node = head;
    while(current_node!= NULL) {
        cout<<current_node->data<<endl;
        current_node = current_node->next;
    }
}
void print_list_tail()
{
    node* current_node = tail;
    while(current_node!= NULL) {
        cout<<current_node->data<<endl;
        current_node = current_node->prev;
    }
}

int main()
{
    insert_at_the_end(2);
    insert_at_the_end(5);
    insert_at_the_end(7);
    print_list_tail();
    cout<<endl;
    print_list();
}
