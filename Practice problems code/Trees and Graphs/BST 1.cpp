#include<iostream>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};
class BST
{
private:
    node* root;
public:
    BST()
    {
        root=NULL;
    }
    void insert_val(int a)
    {
        if(root==NULL)
        {
            node* temp=new node;
            temp->data=a;
            node* prev=temp;
            temp->left=NULL;
            temp->right=NULL;
        }
        else
        {
            if(a>prev->data)
            {
                prev->right=a;
            }
            else if(a<prev->data)
            {
                prev->left=a;
            }
        }
    }
};
int main()
{

    return 0;
}
