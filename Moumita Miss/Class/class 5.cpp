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

void delete_value(int given_value)
{
    if(isempty()==true) {
        cout<<"list is empty\n";
    }
    else {
        if(head->data==given_value) {
            node* temp_node = head;
            head = head->next;
            delete temp_node;
        }
        else {
            node* current_node = head;
            while(current_node->next!= NULL) {
                if(current_node->next->data == given_value) {
                    node* temp_node = current_node->next;
                    current_node->next = temp_node->next;
                    delete temp_node;
                    return;
                }
                current_node = current_node->next;
            }
        }
    }
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
    while(current_node!= NULL) {
        cout<<current_node->data<<endl;
        current_node = current_node->next;
    }
}

void print_reverse(node* current_node)
{
    if(current_node!= NULL) {
        print_reverse(current_node->next);
        cout<<current_node->data<<endl;
    }
}

void print2(node* current_node)
{
    if(current_node!= NULL) {
        cout<<current_node->data<<endl;
        print2(current_node->next);
    }
}


void search_value(int value)
{
    node* current_node = head;
    while(current_node!= NULL) {
        if(current_node->data==value) {
            cout<<"found\n";
            return;
        }
        current_node = current_node->next;
    }
    cout<<"not found\n";
}
int c=0;
int count_greter10(node* current)
{
    if(current->next!= NULL) {
        count_greter10(current->next);
        }
    if(current->data>10)
    {
        return c++;
    }
    else{return c;}
}

int main()
{
    insert_at_end(2);
    insert_at_end(5);
    insert_at_end(4);
    insert_at_end(5);
    insert_at_end(3);

    print_list();
    cout<<"\n"<<count_greter10(head)<<" numbers greater than 10";
    c=0;
    /*int value;
    cin>>value;
    search_value(value);*/
    //delete_value(5);
    //print_list();
    cout<<endl;
    cout<<endl;
    print_reverse(head);

    return 0;
}
