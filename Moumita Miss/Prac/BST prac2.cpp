#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left_child;
    node* right_child;
    node* parent;
};

node* root = NULL;

node* create_new_node(int value)
{
    node* newnode = new node;
    newnode->data = value;
    newnode->left_child = NULL;
    newnode->right_child = NULL;
    newnode->parent = NULL;

    return newnode;
}
node* insert_value(node* current_node, int value)
{
    if(current_node==NULL) {
        return create_new_node(value);
    }
    if(current_node->data>value) {
        current_node->left_child = insert_value(current_node->left_child,value);
        current_node->left_child->parent = current_node;
    }
    else {
        current_node->right_child = insert_value(current_node->right_child,value);
        current_node->right_child->parent = current_node;
    }

    return current_node;
}
void inorder_traversal(node* current_node)
{
    if(current_node!=NULL) {
        inorder_traversal(current_node->left_child);
        cout<<current_node->data<<" ";
        inorder_traversal(current_node->right_child);
    }
}
node* find_min(node* current_node)
{
    if(current_node->left_child!=NULL)
        return find_min(current_node->left_child);
    return current_node;
}
node* find_max(node* current_node)
{
    if(current_node->right_child!=NULL)
        return find_max(current_node->right_child);
    return current_node;
}

int main()
{
    int n=0,input=0;
    cout<<"Enter the number of entries: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        root=insert_value(root,input);
    }
    inorder_traversal(root);
    cout<<endl;
    cout<<"Minimum: "<<find_min(root)->data;
    cout<<"\nMaximum: "<<find_max(root)->data;
    return 0;
}
