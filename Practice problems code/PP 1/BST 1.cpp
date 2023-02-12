//BST
#include<iostream>
using namespace std;

struct node
{
    int data;
    node* right;
    node* left;
};
class BST
{
private:
    node *root;
public:

    BST()
    {
        root=NULL; //To make the root pointer null
    }
    node* getRoot() // to get the root.
    {
        return root;
    }
    void Insert(node* b,int a) //While inserting in the main function we need to pass the root node first.
    {
        if (root==NULL) //If there is no root node then creating root.
        {
            node* temp=new node;
            temp->data=a;
            temp->right=NULL;
            temp->left=NULL;
            root=temp;
        }
        else
        {
            if(a==b->data) //If the inserted value is equal to the node value.
            {
                cout<<"No duplicate values allowed.\n";
                return ;
            }
            else if(a<b->data) //If the inserted value is less than the node value.
            {
                //If the left of the node is null than insert the node to the left else
                // recursively calling the insert function passing the left pointer.
                if(b->left==NULL)
                {
                    node* temp=new node;
                    temp->data=a;
                    temp->right=NULL;
                    temp->left=NULL;
                    b->left=temp;
                    cout<<"Inserted to left\n";
                    return;
                }
                else
                {
                    Insert(b->left,a);
                }
            }

            //If the right of the node is null than insert the node to the right else
            // recursively calling the insert function passing the right pointer.
            else if (a>b->data)
            {
                if(b->right==NULL)
                {
                    node* temp=new node;
                    temp->data=a;
                    temp->right=NULL;
                    temp->left=NULL;
                    b->right=temp;
                    cout<<"Inserted to right\n";
                    return;
                }
                else
                {
                    Insert(b->right,a);
                }
            }
            else{cout<<"invalid input";}
        }
    }

    void printInOrder(node* x)
    {
        if(x==NULL)
        {
            return;
        }
        printInOrder(x->left);
        cout<<x->data<<" ";
        printInOrder(x->right);
    }
    void printPreOrder(node* x)
    {
        if(x==NULL)
        {
            return;
        }
        cout<<x->data<<" ";
        printPreOrder(x->left);
        printPreOrder(x->right);
    }
    void printPostOrder(node* x)
    {
        if(x==NULL)
        {
            return;
        }
        printInOrder(x->left);
        printInOrder(x->right);
        cout<<x->data<<" ";
    }
    void del(node* x)
    {
        if(x==NULL)
        {
            return;
        }
        del(x->left);
        del(x->right);
        delete x;
    }

};

int main()
{
    BST A;
    A.Insert(A.getRoot(),20);
    A.Insert(A.getRoot(),15);
    A.Insert(A.getRoot(),30);
    A.Insert(A.getRoot(),10);
    A.Insert(A.getRoot(),17);
    A.Insert(A.getRoot(),25);
    A.Insert(A.getRoot(),35);
    A.Insert(A.getRoot(),20);
    A.printInOrder(A.getRoot());
    cout<<"Done in\n";
    A.printPreOrder(A.getRoot());
    cout<<"Done pre\n";
    A.printPostOrder(A.getRoot());
    cout<<"Done post\n";

    //A.del(A.getRoot());
    A.printInOrder(A.getRoot());
    return 0;
}
